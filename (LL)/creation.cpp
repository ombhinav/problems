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

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for the data"<<value<<endl;
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

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    for(int i=1;i<position-1;i++){
        temp = temp -> next;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteAtPosition(Node* &head, Node* &tail, int position){


    if(position ==1){

        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{

        Node* curr = head;
        Node* prev = NULL;

        for(int i=1;i<position;i++){
            prev = curr;
            curr = curr -> next; 
        }



        prev -> next = curr -> next;
        if(curr -> next == NULL){

        tail = prev;
        }
        curr -> next = NULL;
        delete curr;



    }


}

bool elementPresent(Node* &head, int data){
    Node* temp = head;
    int i =1;

    if(temp -> data == data){
        cout<<temp ->data <<" true" <<endl;
        return true;
    
    }

    else{

        while(temp -> next != NULL){
            temp = temp -> next;
            if(temp -> data == data){
                cout<<temp ->data <<" true" <<endl;
                return true;
            }
        }
    }

    cout<<temp -> data<<" false"<<endl;
    return false;
}

int main(){

    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,11);
    // print(head);
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 14);
    print(head);

    insertAtPosition(head,tail,5,16);
    print(head);

    deleteAtPosition(head,tail,5);
    cout<<tail -> data<<endl;
    print(head);

    bool a = elementPresent(head,14);

    cout<<a<<endl;

    
    return 0; 
}