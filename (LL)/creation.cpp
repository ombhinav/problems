#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor, which will give data to the node, and
    //point the next to NULL.
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

int main(){

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;
    insertAtHead(head,11);
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 14);
    print(head);
    return 0; 
}