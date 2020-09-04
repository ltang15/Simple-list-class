//
// Created by tangb on 4/8/2020.
//

#ifndef ECLINKEDLIST_Z__OUTPUT_H
#define ECLINKEDLIST_Z__OUTPUT_H
/*
***** ALL RESULTS ARE VERIFIED ******
//---------------------------------------------------------------------
// Test for list functions
//---------------------------------------------------------------------

 ------------ RESULTS --------------------
- Test for insert head:
Insert head even numbers 0 ->10:
H->[0]->|||

H->[2]->[0]->|||

H->[4]->[2]->[0]->|||

H->[6]->[4]->[2]->[0]->|||

H->[8]->[6]->[4]->[2]->[0]->|||

H->[10]->[8]->[6]->[4]->[2]->[0]->|||

H->[10]->[8]->[6]->[4]->[2]->[0]->|||


- Test for insert after and search functions:
 Searching for 2 and insert after 2 with 10:
H->[10]->[8]->[6]->[4]->[2]->[10]->[0]->|||

- Test for insert before and search functions
 Searching for 2 and insert before 2 with 30:
H->[10]->[8]->[6]->[4]->[30]->[2]->[0]->|||

- Test for next function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
The next node of 6: [4]->

- Test for prev function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
The prev node of 4: [6]->

- Test for begin function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
The first node is : [10]->

- Test for last function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
The last node is : [0]->

- Test for [] function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
The value at i = 4 is: 4

- Test for delete function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
The node is deleted:  15339864
H->[10]->[8]->[4]->[2]->[0]->|||

- Test for insert sorted function
H->[10]->[8]->[6]->[4]->[2]->[0]->|||
Insert 5 into the list:
H->[10]->[8]->[6]->[5]->[4]->[2]->[0]->|||

====================END==================

Process finished with exit code 0




 //---------------------------------------------------------------------
// Test for node functions
//---------------------------------------------------------------------

 ------------ RESULTS --------------------
- Insert head 0 -> 50:
H->[0]->|||
H->[10]->[0]->|||
H->[20]->[10]->[0]->|||
H->[30]->[20]->[10]->[0]->|||
H->[40]->[30]->[20]->[10]->[0]->|||
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
H->[50]->[40]->[30]->[20]->[10]->[0]->|||

- Searching for 20:
H->[20]->[10]->[0]->|||

- Test insert after:
Searching for 0 and insert after 0 with 3:
H->[50]->[40]->[30]->[20]->[10]->[0]->[3]->|||

- Test insert before
Searching for 0 and insert before 0 with 3:
H->[50]->[40]->[30]->[20]->[10]->[3]->[0]->|||

- Test for insert sorted:
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
Inserting 25 into the list
H->[50]->[40]->[30]->[25]->[20]->[10]->[0]->|||

- Test remove head
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
H->[40]->[30]->[20]->[10]->[0]->|||
H->[30]->[20]->[10]->[0]->|||
H->[20]->[10]->[0]->|||
H->[10]->[0]->|||
H->[0]->|||
H->|||

- Test remove 20
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
H->[50]->[40]->[30]->[10]->[0]->|||

- Test delete
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
The number is deleted: 30
H->[50]->[40]->[20]->[10]->[0]->|||

- Test for clear list
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
After clear:
H->|||

- Test for the item at one position
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
Item at pos 3:  30

- Test for the prev function
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
The node before 30 is: [40]->

- Test last number function:
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
The last node is: [0]->

Test for copy list function
H->[50]->[40]->[30]->[20]->[10]->[0]->|||
New list: H->[50]->[40]->[30]->[20]->[10]->[0]->|||

====================END==================

Process finished with exit code 0


 //---------------------------------------------------------------------
// Test for navigation app
//---------------------------------------------------------------------

  ------------ RESULTS --------------------
  //
 * Initial list and menu. Cursor is at the head:
 //

..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{87}->[23]->[46]->[75]->[85]->|||

 //
 * [N]ext: once you get to the end of the list, the cursor will stay there.
 * 		It will not fall off
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->{23}->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->{46}->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->[46]->{75}->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->[46]->[75]->{85}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->[46]->[75]->{85}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->[46]->[75]->{85}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
n

..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->[46]->[75]->{85}->|||
  //
 * [P]revious: once you get to the begining of the list,
 * 		the cursor will stay there.
 *      It will not fall off
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
p
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->[46]->{75}->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
p
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[23]->{46}->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
p
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->{23}->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
p
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{87}->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
p
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{87}->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
p
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{87}->[23]->[46]->[75]->[85]->|||

 //
 * [R]andom: inserts a random item after the current position.
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
r
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->{33}->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
r
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[33]->{55}->[23]->[46]->[75]->[85]->|||

//
 * [A]fter: inserts an item after the current position
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
a
??
11
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[33]->[55]->{11}->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
a
??
22
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[33]->[55]->[11]->{22}->[23]->[46]->[75]->[85]->|||

 //
 * [B]efore: inserts an item before the current position
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
b
??
33
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[33]->[55]->[11]->{33}->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
b
??
44
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[33]->[55]->[11]->{44}->[33]->[22]->[23]->[46]->[75]->[85]->|||
 //
 * [S]earch will move the cursor to the position of the key if it is found. No change
 *         in cursor position if key is not found in the list.
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
s
??
11
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[87]->[33]->[55]->{11}->[44]->[33]->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
s
??
87
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{87}->[33]->[55]->[11]->[44]->[33]->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
s
??
90
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{87}->[33]->[55]->[11]->[44]->[33]->[22]->[23]->[46]->[75]->[85]->|||

 //
 * [D]elete: deletes the item at the current position and resets position of cursor
 *		NOTE: deleting on an empty list does not cause a crash.
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{33}->[55]->[11]->[44]->[33]->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{55}->[11]->[44]->[33]->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{11}->[44]->[33]->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{44}->[33]->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{33}->[22]->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{22}->[23]->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{23}->[46]->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{46}->[75]->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{75}->[85]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{85}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
|||


//
 * [D]elete: on an empty list does not cause a crash
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
|||

 //
 * [R]andom: on an empty list will add a random number at the head of the list
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
r
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{86}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
|||
 //
 * [A]fter: on an empty list will add a number at the head of the list
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
a
??
13
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{13}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
d
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
|||

 //
 * [B]efore: on an empty list will add a number at the head of the list
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
b
??
25
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{25}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
b
??
11
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{11}->[25]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
a
??
67
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
[11]->{67}->[25]->|||

 //
 * [H]ome and [E]nd take the current position to the begining
 *		and the end of the list
 //
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
h
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..
{11}->[67]->[25]->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
e
..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..   ..


 //
 * Exit program
 //
[11]->[67]->{25}->|||
Menu: [R]andom [A]fter  [B]efore [D]elete  [S]earch [P]revious  [N]ext  [H]ome  [E]nd  e[X]it
x
====================END==================

Process finished with exit code 0

 */
#endif //ECLINKEDLIST_Z__OUTPUT_H
