//
//  Stack.hpp
//  Unit 8: No Brainer Stack Template
//
//  Created by Coleton Watt on 11/1/21.
//

#ifndef Stack_hpp
#define Stack_hpp
#include <iostream>
using namespace std;

template<class Type>
struct Node{
    Type data;
    Node *next;
};
template<class Type>
class Stack;

template<class Type>
ostream &operator <<(ostream &, const Stack<Type> &);

template<class Type>
class Stack{
public:
    Stack();//constuctor create empty stack
    ~Stack();//delete object
    void push(Type data);//add to stack
    void pop();//remove top value
    Type peak();//see top value
    void swap();
    bool isEmpty();
    friend std::ostream &operator << <>(ostream &, const Stack<Type> &);
    
    
    
private:
    Node<Type> *top;
};

#endif /* Stack_hpp */

template<class Type>
Stack<Type>::Stack(){
     top = nullptr;
}

template<class Type>
Stack<Type>::~Stack(){
    while(!isEmpty()){
        pop();
    }
}

template<class Type>
void Stack<Type>::push(Type data){
    Node<Type> *toAdd = new Node<Type>;
    toAdd ->data = data;
    //toAdd->next = nullptr;

    if(top == nullptr)/*empty stack*/{
        top = toAdd;
        toAdd->next = nullptr;
    }else{
        toAdd->next = top;
        top = toAdd;
        //toAdd->next = nullptr;

        
    }
    //toAdd->next = nullptr;

    
}

template<class Type>
Type Stack<Type>::peak(){
    return top->data;
}

template<class Type>
void Stack<Type>::pop(){
    if(!isEmpty()){
        Node<Type> *temp = top;
        top = top->next;
        delete temp;
    }
}

template<class Type>
bool Stack<Type>::isEmpty(){
    
    return(top==nullptr);
}

template<class Type>
void Stack<Type>::swap(){
    Node<Type> *second = top->next;
    top->next = second->next;

}

template<class Type>
ostream &operator <<(ostream & out, const Stack<Type> &s){
    Node<Type> *curr = s.top;
    while(curr != nullptr){
        out<< curr->data <<" ";
        curr = curr->next;
    }
    //delete curr;
    return out;
}
