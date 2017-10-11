#include <iostream>
using namespace std;


struct chainNode{
int data ; 
chainNode* chainLink ; 
};



struct tableNode {
int data ; 
bool occupied ; 
tableNode* tableLink ; 
chainNode* chainLink ; 
};


chainNode* createChainNode(int data){
chainNode* temp = new chainNode ; 
temp->data = data ; 
temp->chainLink = NULL ;
return temp ; 
}



tableNode* createTableNode(){
tableNode* temp = new tableNode ; 
temp->data = 0 ; 
temp->occupied = false ; 
temp->chainLink = NULL ; 
temp->tableLink = NULL ; 
return temp ; 
}



int main() {

//Creating the hash table

tableNode* root = createTableNode() ; 
tableNode* tableTemp = root ; 


for(int i = 0 ; i<5 ; i++){
tableTemp->tableLink = createTableNode() ;
tableTemp = tableTemp->tableLink ; 
}

int input ; 
int index ; 
chainNode* chainTemp = NULL ; 
	
while(cin>>input){
	index = (3*input + 4)%6 ; 
	tableTemp = root ; 
	
	for (int i = 0 ; i<index ; i++){
		tableTemp= tableTemp->tableLink ;
	}
	
	if(!tableTemp->occupied){
	tableTemp->data = input ; 
	tableTemp->occupied = true ; 
	continue ;
	}
	if(tableTemp->chainLink){
		chainTemp = tableTemp->chainLink ;
	}
	else{
		tableTemp->chainLink = createChainNode(input) ; 
		continue ; 
	}
	while(chainTemp->chainLink!=NULL){
		chainTemp= chainTemp->chainLink ; 
	}
	chainTemp->chainLink = createChainNode(input);
}


tableTemp = root ; 

cout<<"Hash Table"<<" \n" ; 
while(tableTemp!=NULL){
	cout<<tableTemp->data ; 
	chainTemp = tableTemp->chainLink ; 
	while(chainTemp!=NULL){
	cout<<"->"<<chainTemp->data ; 
	chainTemp = chainTemp->chainLink ; 
	}
	tableTemp=tableTemp->tableLink;
		cout<<endl;
	
	
	
}




	
}