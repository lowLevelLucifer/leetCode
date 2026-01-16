#include<vector>
#include<iostream>
#include<stack>
using namespace std; 
class Solution{
    public: 
         vector<int> dailyTemperatures(vector<int>& temperatures){
            stack<int> st; 
            int n = temperatures.size();
            vector<int> result(n,0);
            for(int i = 0; i < n; i++){
                while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                    int idx = st.top(); 
                    st.pop(); 
                    result[idx] = i - idx;
                }
                st.push(i);
            }
            return result;
         }
};

int main(){
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    Solution sol; 
    vector<int> output = sol.dailyTemperatures(temperatures);
    cout<<"[";
    for(int i = 0; i < temperatures.size() ; i ++){
        cout<<output[i]<<" , ";
    }
    cout<<"]";
    return 0;
}
