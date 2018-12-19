#include "Node.h"

Node::Node(){
	head = NULL;
}

Node::~Node(){
	node *trav;
	node *prev = head;
	if(!head){
		return;
	}
	while(trav){
		trav = prev->next;
		delete prev;
		prev = trav;
	}
}

Node::Node(int length, string *value){

	node *newnode;
	node *trav = head;
	for(int i  = 0; i < length; i++){
		newnode = new node();

		newnode->name = value[i];
		newnode->next = NULL;

		if(i==0){
			head = newnode;
			trav = head;
		}
		else{
			trav->next = newnode;
			trav = trav->next;
		}
	}
}

void Node::display(){
	node *trav = head;
	while(trav){
		cout << trav->name << " ";
		trav = trav->next;
	}
	cout<<endl;
}

//NOTE
// Do NOT change any code above this line
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
	
void Node::reverse()
{

/*Implement Code here*/

	if(head == NULL)
	{
		return;
	}

	node* current = 0;

	node* previous = 0;

	node* next = 0;

	current = head;

	while(current != 0)
	{
		next = current->next;

		current->next = previous;

		previous = current;

		current = next;
	}

	head = previous;
}
