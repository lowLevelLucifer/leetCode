#include<iostream>
using namespace std; 

struct listNode{
    int val = 0; 
    listNode* next; 
    listNode():val(0),next(nullptr){}
    listNode(int x): val(x),next(nullptr){}
    listNode(int x, listNode* next): val(x), next(next){}
}

int main(){
    listNode* n3 = new listNode(40,nullptr);
    listNode* n2 = new listNode(30,n3);
    listNode* n1 = new listNode(20,n2);
    listNode* head = new listNode(10,n1);
}
