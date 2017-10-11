#include <iostream>
using namespace std ; 



// Defining the structure of a chainode ; 
struct chainNode{
int data ; 
chainNode* next ; 
chainNode* prev ; 
};

chainNode* head = NULL ; 


// method to create a new node.
//Returns the pointer to the created new node.
chainNode* createNode(int data) {
chainNode* temp = new chainNode() ; 
temp->data = data ; 
temp->next = NULL ;
temp->prev = NULL ;
return temp ; 
} 



//Method to insert new node into the linked list
chainNode*  insert(int data){
if(head ==NULL){
head = createNode(data) ; 

}
else {
chainNode* temp = head ; 
while(temp->next!=NULL){
	temp = temp->next ; 
}
temp->next = createNode(data) ; 
temp->next->prev= temp ; 
}

}


//Method to print the linked list
void printLinkedList() {
if(head==NULL){
cout<<"The linked list is empty"<<endl ;
return ;
}
else{
	
chainNode* temp  = head ; 
while(temp!=NULL){
cout<<temp->data<<" ";
temp = temp->next ; 
}
}
}


//main method

int main () {

insert(10) ; 
insert(4) ; 
insert(5) ; 
insert(8) ; 
printLinkedList() ;

}