#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

bool isValid(const string &s){
    stack<char> st;
    for(char c: s){
        if(c == 'A'){
            st.push('A'); 
        }else if(c == 'B'){
            if(st.empty()){  
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string s = "AABABB"; 
    if(isValid(s)){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }
}
