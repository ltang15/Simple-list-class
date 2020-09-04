//
// Created by tangb on 4/8/2020.
//

#ifndef ECLINKEDLIST_NODE_H
#define ECLINKEDLIST_NODE_H

#include <iostream>
#include <cassert>
using namespace std;


template <typename T>
struct node{
    T _item;
    node<T>* _next;

    // constructor
    node(const T& item=T(), node<T>* next = nullptr):_item(item), _next(next){}

    friend ostream& operator<<(ostream& outs, const node<T> n){
        outs<<"["<<n._item<<"]->";
        return outs;
    }
};


template<typename T>
node<T>* _insert_head(node<T>*& head_ptr, const T& item);

template<typename T>
node<T>* _insert_after(node<T>* & head_ptr, node<T>* current_ptr, const T& item);

template <typename T>
node<T>* _insert_before (node<T>*& head_ptr, node<T>* before_me,  const T& item );

template<typename T>
node<T>* _remove_head(node<T>*& head_ptr);

template <typename T>
node<T>* _remove_this (node<T>*& head_ptr, node<T>* remove_me);

template <typename T>
T _delete_this (node<T>*& head_ptr, node<T>* delete_me);

template<typename T>
node<T>* _search(node<T>* head_ptr, const T &key);

template <typename T>
node<T>* _previous (node<T>* head_ptr, node<T>* prevToThis);



template <typename T>
void _clear_list (node<T>*& head_ptr);

template <typename T>
T& _at (node<T>*& head_ptr, int pos);

template <typename T>
node <T>* _copy_list (node<T>*& head_ptr);

template <typename T>
node <T>* _last_node (node<T>*& head_ptr);

template <typename T>
node <T>* _where_this_goes (node<T>*& head_ptr, T item, bool descending = true);

template <typename T>
node<T>*  _insert_sorted (node<T>* &head, T item, bool descending=true);

template<typename T>
ostream& _print_list(node<T>* head_ptr, ostream& outs = cout);

//======================

template<typename T>
node<T>* _insert_head(node<T>*& head_ptr, const T& item){
    //insert the item at the head of the list: make it the first j
    //      link in the chain.

    //1: create a new node:
    node<T>* temp = new node<T>(item);
    //2. point (the next field of) this new node to where head is pointing to
    temp->_next = head_ptr;

    //3. point head to this new node:
    head_ptr = temp;

    return head_ptr;
}

template<typename T>
node<T>* _insert_after(node<T>*& head_ptr, node<T>* after_me, const T& item){
    //insert the item after the current node

    node<T>* w = after_me -> _next;
    //1: create a new node:
    node<T>* temp = new node<T>(item);

    if (head_ptr == NULL)
        _insert_head(head_ptr, item); //empty case

    // insert at the middle
    if (w != NULL) {
        //2. point this new node to the next node
        temp->_next = after_me->_next;
        //3. point the after_me to this new node:
        after_me->_next = temp;
    }

    //insert after the last node
    else{
        temp->_next = NULL; // temp will be the last node
        after_me->_next = temp;

    }

    return after_me ->_next;

}
template<typename T>
node<T>* _search(node<T>* head_ptr, const T &key){
    // searching for a key, return the node which contains the key


    if (head_ptr== nullptr) return nullptr; //empty list case

    for ( node<T>*w = head_ptr; w!=nullptr; w =w->_next) {
        if (w->_item == key)
            return w;
    }


    return nullptr;

}
template <typename T>
node<T>* _previous (node<T>* head_ptr, node<T>* prevToThis){

    //no prev node case
    if (prevToThis == head_ptr)
        return nullptr;

    //normal case at middle of the list
    for (node<T>* w = head_ptr; w!=nullptr; w =w->_next){
        if (w -> _next == prevToThis )
            return w;
    }
    assert (prevToThis == NULL);// empty list
    return nullptr;

}


template <typename T>
node<T>* _insert_before (node<T>*& head_ptr, node<T>* before_me, const T& item ){
    //insert item before the current node

    node<T>* prev = _previous(head_ptr, before_me);

    if (prev == NULL)
        _insert_head(head_ptr, item);
    else{
        _insert_after(head_ptr, prev, item);
    }
    return _previous(head_ptr, before_me);

}
template<typename T>
node<T>* _remove_head(node<T>*& head_ptr){
    //remove the node that head pointer points to

    node<T>* remove_ptr = head_ptr;
    head_ptr = remove_ptr -> _next;
    delete remove_ptr;
    return head_ptr;
}

template <typename T>
node<T>* _remove_this (node<T>*& head_ptr, node<T>* remove_me){
    // remove node at current position

    node<T>* prev = _previous(head_ptr, remove_me);
    if(head_ptr == NULL) return nullptr;
    if (prev != NULL) {
        prev-> _next = remove_me ->_next;
        delete remove_me;
    }
    else
        _remove_head(head_ptr);

    return head_ptr;
}

template <typename T>
T _delete_this (node<T>*& head_ptr, node<T>* delete_me){
    // delete a specific node and return the item being deleted

     _remove_this(head_ptr, delete_me);

    return delete_me -> _item;

}

template <typename T>
void _clear_list (node<T>*& head_ptr){
    // remove all nodes
    while (head_ptr != NULL){
        _remove_head(head_ptr);
    }

}
template <typename T>
T& _at (node<T>*& head_ptr, int pos){
    // return the item of a specific node
    assert (pos > 0);// input for position must be > 0
    node<T>* w = head_ptr;
    assert (pos > 0 && w !=NULL);

    for (int i = 1; i != pos; i++){
        w = w->_next;
    }
    //walker stops at a desired index, and returns the item
    return w ->_item;
}

template <typename T>
node <T>* _copy_list (node<T>*& head_ptr){

    //1. Create the first node of the new list, with the same first item of the old one
    node<T>* new_w = new node<T>(head_ptr ->_item);

    //2. Set up a walker starting at the second node of the old list
    node<T>* old_w = head_ptr -> _next;

    //3. Points head_ptr to the new one
    head_ptr = new_w;

    //4. copying the node from the old list to the new one starting at the second node
    for(; old_w != NULL; old_w = old_w -> _next, new_w = new_w -> _next ){
        _insert_after(head_ptr, new_w , old_w ->_item) ;

    }
    return head_ptr;


}
template <typename T>
node <T>* _last_node (node<T>*& head_ptr){
    //return the last node

    if(head_ptr == NULL) return nullptr;// empty case

    for (node<T>* w = head_ptr; w!=nullptr; w =w->_next){
        if (w-> _next == NULL)
            return w;
    }

}

template <typename T>
node <T>* _where_this_goes (node<T>*& head_ptr, T item, bool descending){
    // finding the node where the item goes to, that satisfy the condition for a sorted list

    node<T>* follower = head_ptr;
    node<T>* walker = head_ptr ->_next;
    node<T>* temp = new node <T>;

    // both walkers keep moving until meeting the suitable position
    if (descending) {
        while (walker->_item > item) {
            follower = follower->_next;
            walker = walker->_next;
        }
    }
    else{
        while (walker ->_item < item) {
            follower = follower->_next;
            walker = walker->_next;
        }
    }
    //adding the node
   temp ->_next = follower ->_next;
   follower ->_next = temp;
   return temp;

}

template <typename T>
node<T>* _insert_sorted(node<T>* &head_ptr, T item, bool descending) {

        node<T>* insert = _where_this_goes(head_ptr, item, descending);
        insert ->_item = item;

        return head_ptr;
}


template<typename T>
ostream& _print_list(node<T>* head_ptr, ostream& outs){
    outs<<"H->";
    for (node<T>* w = head_ptr; w!=nullptr; w =w->_next){
        outs<<*w;
    }
    outs<<"|||" << endl;
    return outs;
}
#endif //ECLINKEDLIST_NODE_H
