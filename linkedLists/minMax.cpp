#include<iostream>
using namespace std; 

struct listNode{
    int val; 
    listNode* next; 

    listNode():val(0),next(nullptr){}
    listNode(int x):val(x),next(nullptr){}
    listNode(int x,listNode* next):val(x),next(next){}
};

pair<int,int> findMinMax(listNode*& head){
    listNode* curr = head;
    int max = head->val;
    int min = head->val;
    while(curr != nullptr){
        if(curr->val > max){
            max = curr->val;
        }
        if(curr->val < min){
            min = curr->val;
        }
        curr = curr->next;
    }
    return {max,min};
}

int main(){
   listNode* first = new listNode(40); 
   listNode* second = new listNode(30,first); 
   listNode* third = new listNode(20,second); 
   listNode* head = new listNode(10,third); 
   auto result = findMinMax(head); 
   cout<<"Max element: "<<result.first<<"\n";
   cout<<"Min element: "<<result.second<<"\n";
}
