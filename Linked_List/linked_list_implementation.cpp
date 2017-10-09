#include <iostream>
using namespace std ; 



// Defining the structure of a chainode ; 
struct chainNode{
int data ; 
chainNode* next ; 
};



// method to create a new node.
//Returns the pointer to the created new node.



chainNode* createNode(int data) {
chainNode* temp = new chainNode() ; 
temp->data = data ; 
temp->next = NULL ; 
return temp ; 
} 




int main () {
	
chainNode* head = NULL ; 
head = createNode(10) ; 

	
	
	
	
}
