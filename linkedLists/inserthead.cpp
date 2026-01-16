#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode* next; 
    listNode(): val(0),next(nullptr){} 
    listNode(int x):val(x), next(nullptr){}
    listNode(int x,listNode* next): val(x),next(next){}
};

void insertHead(listNode*&head,int value){
    listNode* newNode = new listNode(value);
    newNode->next = head; 
    head = newNode;
}
void insertAtTail(listNode*&head, int value){
    listNode* tailNode = new listNode(value);
    if(!head){
        head = tailNode;
        return;
    }
    listNode* curr = head;
    while(curr->next){
        curr = curr->next;
    }
    curr->next = tailNode;
}
void insertAtPos(listNode*& head, int value , int pos){
    listNode* midNode = new listNode(value); 
    if(pos==0){
        insertHead(head, value);
    }
    listNode* curr = head;
    for(int i = 0; i < pos-1;i++){
        if(!curr){
            cout<<"Position is out of bound"; 
            return;
        }
        curr=curr->next;
    }
    if(!curr){
        cout<<"Position is out of bound"; 
        return;
    }
    midNode->next = curr->next; 
    curr->next = midNode;
}
void printList(listNode* head){
    listNode* curr = head;
    while(curr != nullptr){
        cout<<curr->val<<"->";
        curr = curr->next;
    }

    cout<<"nullptr\n";
}
void deletehead(listNode*& head){
    if(!head) return; 
    listNode* temp = head; 
    head = head->next; 
    delete temp;
}
void deletetail(listNode*& head){
    if(!head){
        return;
    }
    if(!head->next){
        delete head; 
        head = nullptr;
        return;
    }
    listNode* curr = head; 
    while(curr->next->next){
        curr->next;
    }
    delete curr->next; 
    curr->next = nullptr;
}
int main(){
    listNode* head = nullptr;
    insertHead(head,10);
    insertAtTail(head,30); 
    insertAtPos(head,20,1);
    printList(head);
    deletehead(head);
    deletetail(head);
    printList(head);
    return 0;
}
