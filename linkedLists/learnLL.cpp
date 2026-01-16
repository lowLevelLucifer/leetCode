#include<iostream>
using namespace std; 

struct ListNode{
    int val; 
    ListNode* next; 
    ListNode() : val(0),nullptr(){}
    ListNode(int x): val(x),nullptr(){}
    ListNode(int x, ListNode* next): val(x),next(next){}
};

int main(){
    ListNode* first = new ListNode(); 
    first->val = 10; 
    first->next = nullptr; 
    ListNode* second = new ListNode(); 
    second->val =20; 
    second->next = nullptr;
    first->next = second;
}
