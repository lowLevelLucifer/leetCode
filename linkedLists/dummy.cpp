#include<iostream> 
using namespace std; 

struct listNode{
    int val; 
    listNode* next; 
    listNode():val(),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x,listNode* next):val(x),next(next){}
}; 

listNode* mergeSort(listNode* head1, listNode* head2){
    listNode* dummy(0); 
    listNode* tail = &dummy;//initialize the dummy and connect tail.// 
    
    while(p1 != nullptr && p2 != nullptr){
        if(p1->val > p2->val){
            tail->next = p1; 
            p1 = p1->next;
        }else{
            tail->next = p2; 
            p2 = p2->next;
        }
        tail=tail->next;
    }
    if(p1 != nullptr){
        tail->next = p1; 
    }else{rt
        tail->next = p2
    }
    return dummy.next;
}
int main(){
    listNode* n7 = new listNode(70, nullptr);
    listNode* n6 = new listNode(60, n7);
    listNode* n5 = new listNode(50, n6);
    listNode* head1 = new listNode(40, n5);

    listNode* n3 = new listNode(30, nullptr);
    listNode* n2 = new listNode(20, n3);
    listNode* n1 = new listNode(10, n2);
    listNode* head2 = new listNode(0, n1);
    mergeSort(head1,head2);
    
}
