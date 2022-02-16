#pragma once
#include "Node.h"
#include "Iterator.h"
#include <iostream>

template<typename T>
class List
{
public:
	List();
	List(const List<T>& otherList);
	~List();

	//Deletes all nodes in the list
	void destroy(); 

	//Returns the node at the start of the list
	Iterator<T> start() const; 
	//Returns the node at the end of the list
	Iterator<T> end() const; 
	// Checks to see if the given object is in the list
	const bool checkIfIncludes(const T object); 

	//Adds a new node at the beginning of the list
	void pushFront(const T& value);
	//Adds a new node to the end of the list
	void pushBack(const T& value); 
	//Adds a new node at the given index
	bool insert(const T& value, int index); 
	//Removes the node with the given value
	bool remove(const T& value); 

	//Prints the data of every node
	void print() const; 
	//Set the default values for the first node pointer, the last node pointer, and the node count
	void initialize();  
	//Returns whether or not the list has any nodes in it
	bool isEmpty() const; 
	//Sets the given iterator to point at a node at the given index
	bool getData(Iterator<T>& iterator, int index); 
	//Returns the amount of nodes in the list
	int getLength() const; 

	//Sets a list to be equal to a different list
	const List<T>& operator =(const List<T>& otherList); 
	//Sorts the nodes in the list 
	void sort(); 
};

