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
    while(fast != nullptr && fast->next!=nullptr){
        slow= slow->next; 
        fast = fast->next->next; 
    }
    return slow;
}
listNode* reverseList(listNode* res){
    listNode* curr = res; 
    listNode* prev = nullptr; 

    while(curr != nullptr){
        listNode* next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }
    return prev;
}
bool checkPalindrome(listNode*head, listNode*res){
    listNode* p1 = head; 
    listNode* p2 = res; 
    bool ispalindrome = true; 
    while(p2 !=nullptr){
        if(p1->val != p2->val){
            ispalindrome = false;
            break;
        }
        p1 = p1->next; 
        p2 = p2->next;
    }
    return ispalindrome;
}
void printList(listNode* head){
    listNode* curr = head; 
    while(curr!=nullptr){
        cout<<curr->val<<"->"; 
        curr = curr->next;
    }
    cout<<"nullptr\n";
}
int main(){
    listNode* n7 = new listNode(10,nullptr);
    listNode* n6 = new listNode(20,n7);
    listNode* n5 = new listNode(30,n6);
    listNode* n4 = new listNode(40,n5);
    listNode* n3 = new listNode(40,n4);
    listNode* n2 = new listNode(30,n3);
    listNode* n1 = new listNode(20,n2);
    listNode* head = new listNode(10,n1);
    listNode* res = middleNode(head); 
    res = reverseList(res);
    bool rev = checkPalindrome(head,res);
    if(rev){
        cout<<"Palindrome\n";
    }
    else{
        cout<<"Not Palindrome\n";
    }
    res = reverseList(res);
    printList(head);
    return 0;
}
