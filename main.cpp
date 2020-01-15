/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elaheh Aghaarabi
 *
 * Created on November 20, 2019, 7:07 PM
 */

#include <iostream>
#include <string>
using namespace std;


struct Node
{
 string name;
 Node *link;
};
typedef Node* NodePtr;

void showOutput(NodePtr listPtr);
int main()
{
 NodePtr listPtr, tempPtr , lastPtr;
 listPtr = new Node;
 listPtr->name = "Emily";
 tempPtr = new Node;
 tempPtr->name = "James";
 listPtr->link = tempPtr;
 tempPtr->link = new Node;
 tempPtr = tempPtr->link;
 tempPtr->name = "Joules";
 tempPtr->link = NULL;
 
 
 showOutput(listPtr);
 cout << endl;
 lastPtr = new Node;
 tempPtr = listPtr;
 while (tempPtr!=NULL)
 {
     lastPtr = tempPtr;
     tempPtr = tempPtr ->link;
 }
 
 tempPtr = new Node;
 tempPtr->name = "Joshua";
 tempPtr->link = NULL;
 lastPtr->link=tempPtr;
 showOutput(listPtr);
 cout << endl;
 tempPtr = listPtr;
 while (tempPtr!=NULL)
 {
     if (tempPtr ->name == "Joules")
     {
         lastPtr->link = tempPtr ->link;
         break;
     }
     else
     {
         lastPtr = tempPtr;
         tempPtr = tempPtr ->link;
     }
 }
 showOutput(listPtr);
 cout << endl;
 
 tempPtr = listPtr;
 while (tempPtr != NULL)
 {
     NodePtr nodeToDelete =tempPtr;
     tempPtr = tempPtr->link;
     delete nodeToDelete;
 }
 
 
return 0;
}

void showOutput(NodePtr listPtr)
{
  NodePtr tempPtr = listPtr;
while (tempPtr != NULL)  
{
    cout << tempPtr->name << "  ";
    tempPtr = tempPtr->link;
}
    
}

