#include<iostream>
using namespace std; 

bool minStack(const string token){


}

void split(const string s){
    stringstream ss(s);
    string token;
    while(ss >> token){
        stack<int> st;
        stack<int> min;
        if(token[0] == 'P'){
            int value = stoi(token.substr(1));
            st.push(value);    
            
        }   
            else if(token == 'R'){
                st.pop();
            }
            else if(token == 'M'){    

            }   
            else if(token == 'Z'){
                return st.empty();       
            }
        return st.empty(); 
    }

    
}

int main(){ 
    string s = "P5 P3 M P7 P2 M R M Z"
    split(s)
}
