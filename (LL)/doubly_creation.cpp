#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev  = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }

    }


};

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int cnt=0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert =  new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(Node* &head, int position){

    int length = getLength(head);
    cout<<length<<endl;

    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;    
    }

    else{
        Node* temp = head;
        // Node* curr = head;
        // Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            temp = temp -> next;
            cnt++;
            
        }
        cout<<temp -> data<<endl;


        // curr -> prev = NULL;
        // prev -> next = curr -> next;
        // curr -> next = NULL;
        // delete curr;

        temp -> prev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;
        temp -> prev = NULL;
        temp -> next = NULL;
        delete temp;

    }
}



int main(){
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    // int m = getLength(head);
    // cout<<m;
    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,19);
    print(head);
    
    insertAtTail(tail,3);
    print(head);

    insertAtTail(tail,69);
    print(head);

    insertAtMiddle(head, tail, 1, 21);
    print(head);

    deleteNode(head,7);
    print(head);
    
    
    return 0;
}