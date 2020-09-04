//
// Created by tangb on 4/8/2020.
//

#include "node_test.h"
#include "node.h"

void _test_insert_head(){
    node<int>* head_ptr=nullptr;
    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);
        _print_list(head_ptr);
    }
    _print_list(head_ptr);

}
void _test_insert_after(){
    //testing search and insert after function
    node<int>* head_ptr=nullptr;
    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);

    }
    node<int>* current_ptr = _search(head_ptr, 0);

    _insert_after(head_ptr, current_ptr, 3);
    cout << "Searching for 0 and insert after 0 with 3: " << endl;
    _print_list(head_ptr);

}

void _test_insert_before(){
    node<int>* head_ptr=nullptr;
    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);

    }
    node<int>* current_ptr = _search(head_ptr, 0);

    _insert_before (head_ptr, current_ptr, 3);
    cout << "Searching for 0 and insert before 0 with 3: " << endl;
    _print_list(head_ptr);
}
void _test_search(){
    node<int>* head_ptr=nullptr;

    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);

    }

    node<int>* found = _search(head_ptr, 20);

    _print_list(found);

}
void _test_remove_head(){
    node<int>* head_ptr=nullptr;

    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);

    }
    _print_list(head_ptr);
    for (int i=0; i<6; i++) {
         _remove_head(head_ptr);
        _print_list(head_ptr);
    }

}

void _test_remove (){
    node<int>* head_ptr=nullptr;

    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);
    }
    _print_list(head_ptr);
    node<int>* found = _search(head_ptr, 20);
    _remove_this(head_ptr, found);
    _print_list(head_ptr);

}

void _test_delete (){
    node<int>* head_ptr=nullptr;

    for (int i=0; i<6; i++){
        _insert_head(head_ptr, i*10);
    }
    _print_list(head_ptr);
    node<int>* found = _search(head_ptr, 30);
    cout << "The number is deleted: "  << _delete_this(head_ptr, found) << endl;
    _print_list(head_ptr);
}
void _test_clear () {
    node<int> *head_ptr = nullptr;

    for (int i = 0; i < 6; i++) {
        _insert_head(head_ptr, i * 10);
    }
    _print_list(head_ptr);
    _clear_list(head_ptr);
    cout << "After clear: " << endl;
    _print_list(head_ptr);
}
void _test_at (){
    node<int> *head_ptr = nullptr;

    for (int i = 0; i < 6; i++) {
        _insert_head(head_ptr, i * 10);
    }
    _print_list(head_ptr);
    cout << "Item at pos 3:  " << _at(head_ptr, 3) << endl;
}

void _test_previous (){
    node<int> *head_ptr = nullptr;

    for (int i = 0; i < 6; i++) {
        _insert_head(head_ptr, i * 10);
    }
    _print_list(head_ptr);

    node<int>* prev = _previous(head_ptr,_search(head_ptr, 30) );

    cout << "The node before 30 is: " << *prev << endl;
}

void _test_last (){
    node<int> *head_ptr = nullptr;

    for (int i = 0; i < 6; i++) {
        _insert_head(head_ptr, i * 10);
    }
    _print_list(head_ptr);
    node<int>* last = _last_node(head_ptr);

    cout << "The last node is: " << *last << endl;

}
void _test_copy_list (){
    node<int> *head_ptr = nullptr;

    for (int i = 0; i < 6; i++) {
        _insert_head(head_ptr, i * 10);
    }
    _print_list(head_ptr);

    node<int>* new_list = _copy_list(head_ptr);
    cout << "New list: ";
    _print_list(new_list);

}

void _test_insert_sorted (){
    node<int> *head_ptr = nullptr;

    for (int i = 0; i < 6; i++) {
        _insert_head(head_ptr, i * 10);
    }
    _print_list(head_ptr);

    _insert_sorted(head_ptr, 25, true);
    cout << "Inserting 25 into the list" << endl;
    _print_list(head_ptr);

}

void test_node(){
    cout << "- Insert head 0 -> 50: " << endl;
    _test_insert_head();
    cout << endl;

    cout << "- Searching for 20: " << endl;
    _test_search();
    cout << endl;

    cout << "- Test insert after: " << endl;
    _test_insert_after();
    cout << endl;

    cout << "- Test insert before" << endl;
    _test_insert_before();
    cout << endl;

    cout << "- Test for insert sorted: " << endl;
    _test_insert_sorted ();
    cout << endl;


    cout << "- Test remove head" << endl;
    _test_remove_head();
    cout << endl;

    cout << "- Test remove 20" << endl;
    _test_remove ();
    cout << endl;

    cout << "- Test delete" << endl;
    _test_delete();
    cout << endl;

    cout << "- Test for clear list" << endl;
    _test_clear();
    cout << endl;

    cout << "- Test for the item at one position" << endl;
    _test_at();
    cout << endl;

    cout << "- Test for the prev function" << endl;
    _test_previous();
    cout << endl;

    cout << "- Test last number function: " << endl;
    _test_last();
    cout << endl;

    cout << "Test for copy list function " << endl;
    _test_copy_list ();
    cout << endl;


}


