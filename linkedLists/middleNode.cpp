#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode* next; 

    listNode():val(),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x, listNode* next):val(x),next(next){}
};

listNode* middleNode(listNode* head){
    if(!head){
        return head;
    }    
    listNode* slow = head; 
    listNode* fast = head; 
    
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next; 
        fast = fast->next->next; 
    }
    return slow; 
}

void secondHalf(listNode* head){
    while(head){
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"nullptr";
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
    listNode* res = middleNode(head);
    cout<<"Middle Node is:"<<res->val<<"\n";
    secondHalf(res);
    return 0; 
}
