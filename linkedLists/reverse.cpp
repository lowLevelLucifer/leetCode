#include<iostream>
using namespace std;
struct listNode{
    int val; 
    listNode* next;

    listNode():val(0),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x, listNode* next):val(x),next(next){}
};
listNode* reverseList(listNode* head){
    listNode* curr = head; 
    listNode*prev = nullptr; 

    while(curr != nullptr){
        listNode* next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }
    return prev;
}
void printList(listNode* head){
    listNode*curr = head; 
    while(curr!=nullptr){
        cout<<curr->val<<"->";
        curr = curr->next;
    }
    cout<<"nullptr"<<endl;
}
int main(){
    listNode* n1 = new listNode(40,nullptr);
    listNode* n2 = new listNode(30,n1);
    listNode* n3 = new listNode(20,n2);
    listNode* head = new listNode(10,n3);
    printList(head);
    head = reverseList(head);
    printList(head);
}
