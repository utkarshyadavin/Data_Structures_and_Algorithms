#include <iostream>
using namespace std;
#define MAX_SIZE 100 
int a[MAX_SIZE] ; 
int top = -1 ; 



//Method to push an element in stack
void push(int x){
if(top==MAX_SIZE-1){
cout<<"Error! , The stack is full"<<"\n" ; 
return ; }
else {
a[++top] = x ;
}
}



//Method to pop an element out of stack
void pop(){
if(top==-1){
cout<<"Error! , THe stack is empty"<<"\n" ; 
return ; }
else {
top-- ; 
}
}



//Method to output the top element
int Top (){
return a[top] ; 
}


//Method to print the stack
void printStack(){
if(top==-1)
cout<<"The stack is empty"<<"\n" ; 
else{
for (int i = 0 ; i<=top ; i++ ){
cout<<a[i]<<" ";
}
}
}





int main() {
	
push(5)  ; 
push(7) ; 
push(11) ; 
printStack() ; 
}