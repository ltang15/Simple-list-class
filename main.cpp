/*
 * Project: Simple list class
 * Purpose:  Creating a node struct and a list class with required functions.
            Running test for node functions and list functions.
            Building a navigation app using the node struct and list class built

 * Notes: Inputting the command and item to run the application in main
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "node_test.h"
#include "list_test.h"
#include "linked_list.h"
#include "node.h"
using namespace std;



void print_app (const List<int> & l, node <int>* cursor);// Print function for the app

int main() {
    cout << endl << endl << endl;
//    test_node();
   // test_list ();
//
    List <int> l;

    srand(time(NULL));

    //initialize the list with random number 0-99
    for (int i = 0; i <5 ; i++){
        int num = rand()%100;
        l.insert_head(num);
    }


    node <int>* cursor = l.begin();
    print_app (l, cursor);

    bool done = false;
    do {

        cout << "Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it" << endl;
        char command;
        cin >> command;

        switch (command) {
            case 'n':
            case 'N': {
                //move to next node
                cursor = l.next(cursor);
                print_app(l, cursor);
                break;
            }
            case 'p':
            case 'P': {
                //move back to the previous node
                cursor = l.prev(cursor);
                print_app(l, cursor);
                break;
            }
            case 'r':
            case 'R': {
                if (cursor == nullptr)
                    //inserting random number into the list by insert head
                    cursor = l.insert_head(rand()%100);
                else
                    //inserting after random number for normal list
                    cursor = l.insert_after (cursor,rand()%100);
                print_app(l, cursor);
                break;
            }

            case 'a':
            case 'A': {
                // insert the input after the current node
                int value;
                cout << "??" << endl;
                cin >> value;
                if (cursor == nullptr)
                    cursor = l.insert_head(value);
                else
                    cursor = l.insert_after(cursor,value);
                print_app(l, cursor);
                break;
            }

            case 'b':
            case 'B': {
                // insert the input before the current node
                int value;
                cout << "??" << endl;
                cin >> value;
                if (cursor == nullptr)
                    cursor = l.insert_head(value);
                else
                    cursor = l.insert_before (cursor,value);
                print_app(l, cursor);
                break;
            }
            case 'd':
            case 'D':{
                //delete the current node
                l.delete_this(cursor);
                cursor = l.begin();
                print_app (l, cursor);
                break;
            }
            case 'h':
            case 'H': {
                // back to the first node in the list
                cursor = l.begin();
                print_app(l, cursor);
                break;
            }
            case 'e':
            case 'E': {
                // go the the last node
                cursor = l.last();
                print_app(l, cursor);
                break;
            }
            case 's':
            case 'S':{
                //search for the key
                int key;
                cout << "??" << endl;
                cin >> key;
                cursor = l.search(key);
                print_app(l, cursor);
                break;
            }
            case 'x':
            case 'X': {
                // exit program
                done = true;
                break;
            }
        }
    }
    while (!done);
    cout << "====================END==================" << endl;

    return 0;
}

void print_app (const List<int> & l, node <int>* cursor){
    node<int>* w = l.begin();
    cout << "..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   .." << endl;
    for (; w!= nullptr; w = w->_next){
        if (w == cursor)
            cout << "{" << cursor ->_item << "}" << "->";
        else
            cout << "[" << w ->_item << "]" << "->";
    }

    cout <<"|||" << endl;

}
