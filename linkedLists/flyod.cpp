#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode* next; 

    listNode():val(0),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x, listNode* next):val(x),next(next){}
};     
listNode* flyod(listNode*head){
    listNode* slow = head; 
    listNode* fast = head; 
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            cout<<"Cyclic";
            return slow;
        }
    }
    cout<<"Acyclic";
    return nullptr;
}
int main(){
    listNode* n3 = new listNode(40,nullptr); 
    listNode* n2 = new listNode(30,n3);
    listNode* n1 = new listNode(20,n2); 
    listNode*head = new listNode(10,n1);
    n3->next = n1;
    flyod(head);
    return 0;
}
