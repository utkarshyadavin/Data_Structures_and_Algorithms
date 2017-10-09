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



//Method to insert new node into the linked list
chainNode* insert(chainNode* head , int data){
if(head ==NULL)
head = createNode( data) ; 
else {
head->next = insert(head->next , data) ; 
}
return head; 
}


//Method to print the linked list
void printLinkedList(chainNode* head) {
if(head==NULL){
cout<<"The linked list is empty"<<endl ;
return ;}
else {
while(head!=NULL){
cout<<head->data<<" ";
head = head->next ; 
}
}
}




//main method

int main () {
chainNode* head = NULL ; 
head = insert(head , 10 ) ; 
head = insert(head , 11 ) ;
head = insert(head , 12 ) ;
printLinkedList(head) ;

}
