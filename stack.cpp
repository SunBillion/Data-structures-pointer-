#include <bits/stdc++.h>

using namespace std;

struct Node{
	int value;
	Node* link;
};

Node* Head = new Node;

void print(){
	Node* next = Head->link;
	cout << "list: ";
	while(next != NULL){
		cout << next->value << " ";
		next = next->link;
	}
	cout << endl;
}

void push(int index, int value){
	cout << "push " << value <<" in " << index << endl;
	Node* next = Head;
	
	for(int i=0; next!=NULL && i<index; i++){
		next = next->link;
	}
	
	Node* temp = next->link;
	next->link = new Node;
	next->link->value = value;
	next->link->link = temp;
}


void push(int index, int value){
	cout << "push " << value <<" in " << index << endl;
	Node* next = Head;
	
	for(int i=0; next!=NULL && i<index; i++){
		next = next->link;
	}
	
	Node* temp = next->link;
	next->link = new Node;
	next->link->value = value;
	next->link->link = temp;
}


void push(int index, int value){
	cout << "push " << value <<" in " << index << endl;
	Node* next = Head;
	
	for(int i=0; next!=NULL && i<index; i++){
		next = next->link;
	}
	
	Node* temp = next->link;
	next->link = new Node;
	next->link->value = value;
	next->link->link = temp;
}

int main(){
	Head->link = NULL;
	push(3);
	print();
	push(4);
	print();
	push(5);
	print();
	push(6);
	print();
	push(9);
	print();
	push(7);
	print();
	push(8);
	print();
}
