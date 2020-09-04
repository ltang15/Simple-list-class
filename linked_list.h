//
// Created by tangb on 4/8/2020.
//

#ifndef ECLINKEDLIST_LINKED_LIST_H
#define ECLINKEDLIST_LINKED_LIST_H
#include <iostream>
#include <cassert>
#include "node.h"
template <typename T>

class List{
public:
    List();

    //Big Three
    ~List();
    List(const List<T> &copyThis);
    List& operator =(const List& rhs);


    node<T>* insert_head(const T& item);   //inset item at the head of list
    node<T>* insert_after (node<T>* after_this, const T& insert_this);  //inset item after the marker
    node<T>* insert_before (node<T>* before_this, const T& insert_this);//inset item before the marker
    node<T>* insert_sorted (const T& insert_this);  //insert item. Assume sorted list
    node<T>* search (const T& key); // search for the item
    node<T>* next (node<T>* after_this); //get the next node to the marker
    node<T>* prev (node<T>* before_this);//get the previous node to the marker
    T delete_this (node<T>* delete_me);//  delete node pointed to by the marker
    node<T>* begin() const;// get the first node
    node<T>* last();// get the last node

    T& operator [] (int index); //return the item at index
    friend ostream& operator <<(ostream& outs,
                                const List<T>& l){
        return _print_list(l._head_ptr, outs);

    }
private:
    node<T>* _head_ptr;
};


template<typename T>
List<T>::List(){
    _head_ptr = nullptr;
}

template <typename T>
List<T>::~List(){
    _clear_list(_head_ptr);

}

template <typename T>
List<T>::List(const List<T> &copyThis){

    _head_ptr= copyThis._head_ptr;
    //copy items
    _copy_list(_head_ptr);

}
template <typename T>
List<T>& List<T>::operator =(const List& rhs){

    //check for self reference
    if (this == &rhs){
        return *this; //return this object (me!)
    }
   _clear_list(_head_ptr); // deallocate

    _head_ptr= rhs._head_ptr;

    //copy items
    _copy_list(_head_ptr);

    return *this;

}

template <typename T>
node<T>* List<T>::insert_head(const T& item){
    return _insert_head(_head_ptr, item);
}

template <typename T>
node<T>* List<T>::insert_after (node<T>* after_this, const T& insert_this){

    return _insert_after(_head_ptr, after_this, insert_this );

}

template <typename T>
node<T>* List<T>::search (const T& key){
    return _search(_head_ptr, key);

}

template <typename T>
node<T>* List<T>::next (node<T>* after_this){
    while (after_this ->_next != NULL)
        return after_this ->_next;

    return after_this;
}

template <typename T>
node<T>* List<T>::insert_before (node<T>* before_this, const T& insert_this){
    return _insert_before(_head_ptr, before_this, insert_this);
}

template <typename T>
node<T>* List<T>::insert_sorted (const T& insert_this){

    return _insert_sorted(_head_ptr, insert_this, true);// assuming descending list



}

template <typename T>
T List<T>::delete_this (node<T>* delete_me){
    if (_head_ptr == NULL) return NULL;

    return _delete_this(_head_ptr, delete_me);


}
template <typename T>
node<T>* List<T>::prev (node<T>* before_this){
    while (_previous(_head_ptr, before_this) != NULL)
        return _previous(_head_ptr, before_this);
    return before_this;

}

template <typename T>
node<T>* List<T>::begin() const{
    return _head_ptr;
}

template <typename T>
node<T>* List<T>::last(){
    return _last_node(_head_ptr);
}

template <typename T>
T& List<T>::operator [] (int index){
    return _at(_head_ptr, index);

}

#endif //ECLINKEDLIST_LINKED_LIST_H
