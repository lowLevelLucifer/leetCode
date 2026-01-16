#include<iostream> 
using namespace std; 

struct ListNode{
    int val;
    ListNode* next;

    ListNode():val(0),next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};

void printList(ListNode* head){
    ListNode* curr = head; 
    while(curr != nullptr){
        cout<<curr->val<<"->";
        curr = curr->next;
    }
    cout<<"nullptr\n";
}
int main(){
    ListNode* n3 = new ListNode(15); 
    ListNode* n2 = new ListNode(10,n3); 
    ListNode* head = new ListNode(5,n2);
    printList(head);
    return 0;
}
