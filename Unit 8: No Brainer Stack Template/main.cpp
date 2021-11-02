//
//  main.cpp
//  Unit 8: No Brainer Stack Template
//
//  Created by Coleton Watt on 11/1/21.
//
#include "Stack.hpp"

#include <iostream>
using namespace std;

int main() {
    cout << "Stack implemented with a Linked List" << endl;
    Stack<string>myStack;
    
    myStack.push("Orange Chicken");
    myStack.push("ice cream");
    myStack.push("CheeseCake");
    myStack.push("Chicken");
    myStack.push("Pizza");
    myStack.push("Sushi");
    myStack.push("Candy");
    myStack.push("Bacon");
    myStack.push("Steak");
    myStack.push("Sandwitch");
    myStack.push("WATER");
    
    cout<< myStack << endl;
    for(int i = 0; i < 4;i++){
        myStack.pop();
    }
    
    cout<< myStack << endl;
    
    Stack<int> myIntStack;
    
    for(int i =0; i < 10;i++){
        myIntStack.push(i);
        
   }
cout << myIntStack<<endl;
    cout << "why";
    
    //return 0;
   // cout <<"?";
}
