#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode*next; 

    listNode():val(0),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x,listNode* next):val(x),next(next){}
};

listNode* mergeSort(listNode*p1,listNode*p2){

    listNode dummy(0); 
    listNode* tail = &dummy;
    while(p1 != nullptr && p2 != nullptr){
        if(p1->val < p2->val){
            tail->next = p1;
            p1 = p1->next;
        }else{
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
    }
    if(p1){
        tail->next = p1; 
    }
    if(p1){
        tail->next = p2;
    }
}

int main(){
    listNode* n3 = new listNode(40,nullptr);
    listNode* n2 = new listNode(30,n3);
    listNode* n1 = new listNode(20,n2);
    listNode* p1 = new listNode(10,n1);

    listNode* m3 = new listNode(40,nullptr);
    listNode* m2 = new listNode(30,m3);
    listNode* m1 = new listNode(20,m2);
    listNode* p2= new listNode(10,m1);
    listNode* merged = mergeSort(p1,p2);
    printList(merged);
    return 0;
}
