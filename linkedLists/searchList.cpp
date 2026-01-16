#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode* next; 
    listNode():val(0),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x, listNode* next): val(x),next(next){}
};
void checkValue(listNode*& head,int value){
    if(!head){
        return;
    }
    listNode* curr = head; 
    while(curr->next != nullptr){
        if(curr->val == value){
            cout<<"found element"<<curr->val<<"\n";
            return;
        }
        curr = curr->next;
    }
    cout<<"value not found!\n";
}
int main(){
    listNode* first = new listNode(40,nullptr); 
    listNode* second = new listNode(30,first); 
    listNode* third = new listNode(20,second); 
    listNode* head = new listNode(10,third);
    int value = 30;
    checkValue(head,value);
    return 0;
}


