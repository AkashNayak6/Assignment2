#ifndef UNTITLED68_LINKEDLIST_H
	#define UNTITLED68_LINKEDLIST_H
	

	#include <iostream>
	#include <utility>
	

	using namespace std;
	

	class LinkedList
	{
	public: LinkedList();           // define methods of linkedlist(), add (int a), print list(), and node structure 
	    void add(int a){
	        int ele;
	        if (ele==0) {
	            temp=new Node;
	            temp->data=a;
	            first=temp;
	            ele++;
	            //temp =last
	        }
	        else {
	            temp-> next=new Node;
	            temp=temp->next;
	            temp->data=a;
	            ele++;
	        }
	    }
	    void printList(){
	        temp = first;
	        for (int i=0; i<ele; i++) {
	            cout <<temp->data<<", ";
	            if (temp-> next!=NULL) {
	                temp=temp->next;
	            }
	        }
	        cout << endl;
	    }
	

	private:
	    struct Node{
	        int data;
	        Node* next;
	    };
	    Node * temp;
	    Node* first;
	    int Elements = 0;
	};
	#endif //UNTITLED68_LINKEDLIST_H

