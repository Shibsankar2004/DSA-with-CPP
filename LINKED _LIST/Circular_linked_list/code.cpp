#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=NULL;
        }
};
class circularlist{
    Node* head;
    Node* tail;
public:
    circularlist(){
    head=tail=NULL;
    }
    void insertAtHead(int val){
        Node* newNode=new Node(val);
        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    
    }
    void print(){
        if(head==NULL)return ;
        cout<<head->data<<"->";
        Node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
    void insertAtTail(int val){
         Node* newNode=new Node(val);
        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void deleteAtHead(){
        if(head==NULL) return;
        else if(head==tail){//single node
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void deleteAtTail(){
        if(head==NULL) return ;
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=tail;
            Node* prve=head;
            while(prve->next!=tail){
                prve=prve->next;
                
            }
            tail=prve;
                tail->next=head;
                temp->next=NULL;
                delete temp; 
        }
    }
};
int main(){
    circularlist cll; 
    // cll.insertAtHead(1);
    // cll.insertAtHead(2);
    // cll.insertAtHead(3);
    cll.insertAtTail(1);
    cll.insertAtTail(2);
    cll.insertAtTail(3);
    // cll.deleteAtHead();
    // cll.deleteAtHead();
    // cll.deleteAtHead();
    cll.deleteAtTail();
    cll.print();
    return 0;
}