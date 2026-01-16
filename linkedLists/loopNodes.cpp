#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode* next; 

    listNode():val(),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x, listNode* next):val(x),next(next){}
};
bool hasCycle(listNode*head){
    listNode* fast = head; 
    listNode* slow = head;
    int count = 1;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next; 
        fast = fast->next->next;
        if(slow == fast){
            slow = head; 
            while(slow!=fast){
                count = count + 1;
                slow= slow->next; 
            }
            cout<<"Is a cyclic linkedlist\n";
            cout<<"Number of Nodes in list are: "<<count<<"\n"; 
            return true;
        }
    }
    return false;
}
int main(){
    listNode* n7 = new listNode(70,nullptr);
    listNode* n6 = new listNode(60,n7);
    listNode* n5 = new listNode(50,n6);
    listNode* n4 = new listNode(40,n5);
    listNode* n3 = new listNode(30,n4);
    listNode* n2 = new listNode(20,n3);
    listNode* n1 = new listNode(10,n2);
    listNode* head = new listNode(00,n1);
    n7->next = n2; 
    bool result = hasCycle(head);
    if(result != true){
        cout<<"is not a Cyclic Linked List";
    }
    return 0; 
}

