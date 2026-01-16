#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
bool operations(const string &s){
    stack<int> st;
    int num = 0;
    for(char c : s){
        if(c == 'A'){
            num++;
            st.push(num);
        }
        else if(c == 'R'){
            if(st.empty()){
                continue;
            }else{
                st.pop();
            }
        }
        else if(c == 'T'){
            if(st.empty()){
                cout<<"stack is empty";
                continue;
            }else{
                cout<<st.top();
            }
        }else{
            if(st.empty()){
                return true;
            }else{
                return false;
            }
        }
    }

}
int main(){
    string s = "AATARTZ"; 
    if(operations(s)){
        cout<<"Stack is empty"; 
    }else{
        cout<<"Stack is Not empty";
    }
}
