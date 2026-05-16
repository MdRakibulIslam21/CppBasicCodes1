#include<iostream>
#include "ArraySKTH.h"
using namespace std;

class Array{
private:
		int size;
		int length = 0;
		int *arr;

public:
		// Constructor: Initialize array with size and default values
		Array(const int size){
				// Set size and allocate memory for the array
				// Initialize the array with default values
		}

		// Constructor: Initialize array with a specific value
		Array(const int size, int v): Array(size){
				// Initialize the array with the given value
		}

		// Initialize array elements with a specific value
		void initArray(int v){
				// Loop through the array and set each element to value v
		}

		// Return the length of the array (number of elements inserted)
		int getLength(){
				// Return length
		}

		// Get the element at a given position
		int at(int pos){
				// Check if the position is valid
				// If valid, return the element at the position
				// Otherwise, throw an exception
		}

		// Check if the array is empty
		bool isEmpty(){
				// If length is 0, return true, otherwise return false
		}

		// Check if the array is full
		bool isFull(){
				// If length is equal to size, return true, otherwise return false
		}

		// Print the array elements
		void print(){
				// If the array is not empty, print all elements
				// Otherwise, print that the array is empty
		}

		// Insert an element at the end of the array
		void insert(int v){
				// Check if the array is full
				// If not full, insert the element at the end
				// Otherwise, print that insertion failed
		}

		// Insert an element at a specific position
		void insertAt(int pos, int v){
				// Check if the position is valid and array is not full
				// Shift elements to make space at the given position
				// Insert the new element
				// Otherwise, print that insertion failed
		}

		// Replace the element at a specific position
		void replaceAt(int pos, int v){
				// Check if the position is valid
				// Replace the element at the given position
				// Otherwise, print that replacement failed
		}

		// Remove the last element from the array
		void remove(){
				// Check if the array is not empty
				// Decrease the length to remove the last element
				// Otherwise, print that the array is empty
		}

		// Remove an element from a specific position
		void removeAt(int pos){
				// Check if the position is valid and array is not empty
				// Shift elements to fill the gap
				// Remove the last element (decrease length)
				// Otherwise, print that removal failed
		}

		// Clear the array by resetting all elements and length
		void clear(){
				// Reset all elements to 0 and set length to 0
		}

		// Reverse the array
		void reverseArray(){
				// Swap elements from both ends of the array until the middle is reached
		}

		// Copy elements from another array into this array
		void copyArray(int data[], int n){
				// Check if the array size is sufficient to copy elements
				// Clear the current array and copy the elements from the source array
		}

		// Destructor: Clean up memory when the object is destroyed
		~Array(){
				// Deallocate the memory for the array
		}
};
