//Implementing stack using a linked list

#include <iostream>
using namespace std;


//defining the structure of a stacknode.
struct stackNode {
int data ; 
stackNode* next ; 
};


// creating a new stacknode with the given data
stackNode* newNode(int data){
stackNode* temp = new stackNode() ;
temp->data = data ; 
temp->next = NULL ; 
return temp ;
}


//Checking whether the stack is empty or not
bool isEmpty(stackNode* root){
if(root==NULL)
return 1 ; 
else 
return 0 ; 
}


//Pushing a new element on top of the stack
void push( stackNode** root , int data){
stackNode* stackNode = newNode(data) ; 
stackNode->next = *root ; 
*root = stackNode ; 
}


//Popping an element from top of the stack.
int pop(stackNode** root , int data){
if (isEmpty(*root)){
cout<<"The stack is empty"<<"\n"  ; 
return -1; 
}
else{
stackNode* temp = *root ; 
*root = (*root)->next ; 
int popped = temp->data ; 
delete(temp) ; 
return popped ; 
}
}


//method to get the top element of the stack
int top(stackNode* root){
if(isEmpty(root)){
cout<<"The stack is empty"<<" \n" ; 
return -1 ; 
}
else
return root->data ; 
}



//method to print all the elements in the stack.
void printStack(stackNode* root){
if(root ==NULL)
cout<<"The stack is empty"<<" \n" ; 
while (root!=NULL){
cout<<root->data<<" " ; 
root= root->next ; 
}
}


int main() {
	
	stackNode* root = NULL ; 
	push(&root , 10) ; 
	push(&root , 15) ; 
	push(&root , 16) ; 
	printStack(root) ; 
	
	
}