#ifndef AVL_HPP
#define AVL_HPP

#include <queue>
#include <cassert>

using std::queue;

class avl {
    public:
        struct node;
        struct iterator {
            queue<int> items;
            bool has_next() {
                return !items.empty();
            };
            int next() {
                assert(has_next());
                int next_item = items.front();
                items.pop();
                return next_item;
            };
        };
    private:
        node* root;
    public:
        avl();
        void        insert(int);
        void        remove(int);
        bool        isempty();
        bool        contains(int);
        bool        path_sum(int);
        int         height();
        int         size();
        void        print();
        iterator    iterator_create();
        ~avl();
};

#endif