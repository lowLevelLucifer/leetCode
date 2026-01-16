#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st; 
        int n  = heights.size();
        int maxArea = 0; 
        for(int i = 0; i <= n; i++){
            int currentHeight = (i == n? 0 : heights[i]);

            while(!st.empty() && currentHeight < heights[st.top()]){
                int h = heights[st.top()]; 
                st.pop(); 

                int right = i; 
                int left = st.empty()? -1: st.top();
                int width = right - left -1; 
                maxArea = max(maxArea , h*width);
            }
            st.push(i);
        }
        return maxArea;
    }
};

int main(){
    vector<int>heights = {1,1,1,1,1,1   }; 
    Solution sol; 
    int res = sol.largestRectangleArea(heights); 
    cout<<"Largest Area ="<<res;
    return 0; 
}


/*
    example = 
    heights = [2 , 1 , 5 , 6 , 2 , 3]
    index =   [0 , 1 , 2 , 3 , 4 , 5 ]

    i = 0                                                       
    currentHeight = 2
    stack = empty
    heights.top = n
    pop = n
    right = n 
    left = n
    width = n
    maxArea = 0
    push = 0
    
    
    i = 1
    currentHeight = 1 
    stack = 0
    heights.top =  2
    h = 2
    pop = 0
    right = 1
    left =  -1
    width =  1
    maxArea = 2
    push =  1
    stack = 1

    i = 2
    currentHeight = 5    
    stack = 1
    heights.top =  1
    h = 2
    pop = n
    right = n
    left = n
    width = n
    maxArea =n
    push = 2
    stack = 1 , 2

    i = 3
    currentHeight = 6 
    stack = 1 , 2
    heights.top =  5
    h = 2
    pop = n
    right =n 
    left = n
    width = n
    maxArea =2
    push = 3
    stack = 1 , 2 , 3

    i = 4
    currentHeight = 2 
    stack = 1 , 2 , 3 - > 1 , 2 -> 1
    heights.top =  6 - > 5
    h = 6 - > 5
    pop = 3 -> 2
    right = 4 
    left = 1 
    width = 1 -> 2
    maxArea = 6 -> 10
    push = 
    stack = 1 , 2 


*/
