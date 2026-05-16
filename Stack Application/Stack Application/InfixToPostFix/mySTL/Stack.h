/// Author: Rifath Mahmud
///	Date: 12/22/2024
/// Data Structure Demo of Stack using Singly Linked List

#ifndef STACK_USING_LINKED_LIST
#define STACK_USING_LINKED_LIST

#include "LinkedList.h"

template<typename T>
class Stack{
private:
	LinkedList<T> myList;
public:
	bool isEmpty(){
		return myList.isEmpty();
	}
	void push(T data){
		myList.insertAtFirst(data);
	}
	void pop(){
		if(!isEmpty()){
			myList.deleteFirst();
		}
	}
	T top(){
		if(!isEmpty()){
			return *myList.begin();
		}
		else{
			throw std::underflow_error("Stack Underflow.");
		}
	}
};

#endif
