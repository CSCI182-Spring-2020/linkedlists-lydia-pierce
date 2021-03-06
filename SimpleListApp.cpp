/*
Lydia Pierce
Intro to Data Structures
SimpleListApp.cpp : Creates a linked list, pushes and pops and item like a stack, displays the list.
3/9/2020
*/

#include <iostream>
#include "SimpleList.h"
#include "Node.h"

int main()
{
    SimpleList s1;
    //s1.QueueItem(100);
    //s1.QueueItem(200);
	s1.Push(100);
	s1.Push(200);

    cout << s1.Pop() << endl;

    s1.DisplayList();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
