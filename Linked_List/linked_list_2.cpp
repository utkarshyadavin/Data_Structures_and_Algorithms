#include <iostream>
using namespace std;

// Linked List implementation in using struct in cpp 


struct Node {
	
	int data ; 
	Node* next ; 
	
} ; 


Node* head = NULL ; 

Node* createNode(int value){
	
	Node* temp = new Node() ; 
	temp->data = value ; 
	temp->next = NULL ;
	
	
	return temp ; 
	
}

// Inserting a new node at the end of a linked list
void insertNode(int value ){
	
	Node* temp = createNode(value) ;
	
	if(head ==NULL){
		head = temp ; 
		
	}
	else {
		Node* iterator = head ; 
		while(iterator->next !=NULL){
			iterator = iterator->next ;  
		}
		
		iterator->next = temp ; 
	
		
		
	}
	
}


//Calculating the length of the linked list 
int numberOfElements(){
	int length = 0 ; 
	
	if(head==NULL)
	{
		length = 0 ; 
		
	}
	else{
		Node* iterator = head ; 
		while(iterator!=NULL){
			length++ ;
			iterator = iterator->next ; 
		}
	}
	
	return length ; 
}


//Printing out the elements of a linked list
void print (){
	if(head==NULL){
		cout<<"The list is empty\n";
	}
	else {
		Node* iterator = head  ; 
		while(iterator!= NULL){
			cout<<iterator->data<<"\n";
			iterator = iterator->next ; 
		}
	}
	
}

// Inserting a node at the nth position in the linked list
void insertAtnthPosition( int value , int n){
	int length = numberOfElements() ; 
	if(n>length) {
	cout<<"The element can't be inserted. Please enter a valid value of n\n";
	}
	else {
		
	Node* temp = createNode(value) ; 
	Node* iterator = head ; 
	
	if(n==0){
		if(head==NULL)
		head = temp ; 
		else{
			
			head = temp ; 
			temp->next = iterator ; 
		}
		
	}
	else if (n==length){
		
	while(iterator->next!=NULL){
		iterator = iterator->next;
	}
	iterator->next = temp ; 
		
		
	}
	else {
	
	for (int i = 0 ; i<n-1 ; i++){
	iterator = iterator->next ;
	}
	
	Node* temp1 = iterator->next ;
	iterator->next = temp ;
	temp->next = temp1 ; 
	} 
	}


}
	


int main() {
	// your code goes here
	
	
	insertNode(5) ; 
	insertNode(10) ;
	insertNode(15) ;
	insertNode(20) ; 
	insertNode(41) ; 
	insertNode(51) ; 
	insertAtnthPosition(13 , 0) ;
	insertAtnthPosition(17 , 0) ;
	insertAtnthPosition(58 , 8) ;

	print() ; 
	cout<<"Length of Linked List: "<<numberOfElements()<<"\n"; 
		
	
}