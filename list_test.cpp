//
// Created by tangb on 4/8/2020.
//
#include "list_test.h"
void test_insert_head(){
    List<int> l;
    cout << "Insert head even numbers 0 ->10: " << endl;

    for (int i=0; i<6; i++){
        l.insert_head(i*2);
        cout << l << endl;
    }

    cout<<l<<endl;
}

void test_insert_after(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    node <int>* found = l.search(2);
    l.insert_after(found, 10);
    cout << " Searching for 2 and insert after 2 with 10:" << endl;
    cout << l;

}


void test_insert_before(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    node <int>* found = l.search(2);
    l.insert_before(found, 30);
    cout << " Searching for 2 and insert before 2 with 30:" << endl;
    cout << l;

}

void test_insert_sorted(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;
    l.insert_sorted( 5);
    cout << "Insert 5 into the list: " << endl;
    cout << l;


}

void test_next(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;

    node <int>* after_this = l.search(6);
    cout << "The next node of 6: " << *l.next(after_this)<< endl;
}

void test_prev(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;

    node <int>* prev = l.search(4);
    cout << "The prev node of 4: " << *l.prev(prev) << endl;
}

void test_begin(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;
    cout << "The first node is : " << *l.begin() << endl;
}

void test_last(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;
    cout << "The last node is : " << *l.last() << endl;
}
void test_at_operator(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;
    cout << "The value at i = 4 is: " << l[4] << endl;

}

void test_delete(){
    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;

    int num = l.delete_this(l.search(6));
    cout << "The node is deleted:  " << num   << endl;
    cout << l;

}

void test_list(){
    cout << "- Test for insert head: " << endl;
    test_insert_head();
    cout << endl;

    cout << "- Test for insert after and search functions: " << endl;
    test_insert_after();
    cout << endl;

    cout << "- Test for insert before and search functions" << endl;
    test_insert_before();
    cout << endl;

    cout << "- Test for next function " << endl;
    test_next();
    cout << endl;

    cout << "- Test for prev function " << endl;
    test_prev();
    cout << endl;

    cout << "- Test for begin function " << endl;
    test_begin();
    cout << endl;

    cout << "- Test for last function " << endl;
    test_last();
    cout << endl;

    cout << "- Test for [] function " << endl;
    test_at_operator();
    cout << endl;

    cout << "- Test for delete function " << endl;
    test_delete();
    cout << endl;

    cout << "- Test for insert sorted function " << endl;
    test_insert_sorted();
    cout << endl;

    List<int> l;
    for (int i=0; i< 6; i++){
        l.insert_head(i*2);
    }
    cout << l;
    List<int> l1 (l);
    cout << l1;
    List<int> l2;
    l2 = l;
    cout << l2;


}