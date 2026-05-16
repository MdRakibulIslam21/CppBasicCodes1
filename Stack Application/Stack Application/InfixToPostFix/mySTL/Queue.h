/// Author: Rifath Mahmud
///	Date: 12/22/2024
/// Data Structure Demo of Queue using Singly Linked List

#ifndef QUEUE_USING_LINKED_LIST
#define QUEUE_USING_LINKED_LIST

#include "LinkedList.h"

template<typename T>
class Queue{
private:
	LinkedList<T> myList;
public:
	bool isEmpty(){
		return myList.isEmpty();
	}
	void enqueue(T data){
		myList.insertAtLast(data);
	}
	void dequeue(){
		if(!isEmpty()){
			myList.deleteFirst();
		}
	}
	T front(){
		if(!isEmpty()){
			return *myList.begin();
		}
		else{
			throw std::underflow_error("Stack Underflow.");
		}
	}
};

#endif
