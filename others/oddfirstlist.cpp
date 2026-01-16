#include<iostream>
using namespace std; 
struct listNode{
    int val; 
    listNode* next; 

    listNode():val(0), next(nullptr){} 
    listNode(int x): val(x), next(nullptr){} 
    listNode(int x, listNode* next):val(x), next(next){}
};
void sortOdd(listNode* head){
    /* had to fix this issue of if(!head || head->next) */
    if(head->next == nullptr){
        return ; 
    }
    listNode *odd = head; 
    listNode *even = head->next;
    listNode *evenHead = even; 
    while(even!=nullptr && even->next !=nullptr){
        odd->next = even->next; 
        odd = odd->next; 
        even->next = odd->next; 
        even = even->next; 
    }
    odd->next = evenHead; 
}
void printList(listNode* head){
    listNode* current = head; 
    while(current != nullptr){
        cout<<current->val<<"->"; 
        current = current->next;
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
    cout<<"List Before sorting Odd\n";
    printList(head);
    sortOdd(head); 
    cout<<"List After sorting Odds\n";
    printList(head);
    return 0;
}
