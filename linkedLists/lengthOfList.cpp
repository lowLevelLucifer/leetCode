#include<iostream>
using namespace std; 

struct listNode{
    int val; 
    listNode* next;
    listNode(): val(0),next(nullptr){}
    listNode(int x): val(x), next(nullptr){}
    listNode(int x, listNode* next): val(x), next(next){}
};

int countListLength(listNode* &head){
    if(!head){
        return 0;
    } //could have improved it by doing count++ first and not add and edge case of !head
    listNode *curr = head; 
    int count = 1;
    while(curr->next != nullptr){
        curr = curr->next;
        count++;
    }
    return count;
}

int main(){
    listNode* first = new listNode(40,nullptr);
    listNode* second = new listNode(30,first);
    listNode* third = new listNode(20,second);
    listNode* head = new listNode(10,third);
    int result = countListLength(head);
    cout<<"The count of the list Lenght is:"<<result<<"\n";
}
