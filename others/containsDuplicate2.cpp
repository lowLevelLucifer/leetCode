#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution{
    public:
    bool constrainsNearbyDuplicates(vector <int>&nums, int k){
        unordered_map<int , int>lastseen;
        for(int i =0; i<nums.size(); i++){
            if(lastseen.find(nums[i]) != lastseen.end()){
                if(i - lastseen[nums[i]] <= k){
                    return true;
                }
            }
            lastseen[nums[i]] = i;
        }
        return false;
    }
};

int main(){
    Solution sol; 
    vector<int> nums = {1,2,3,4,1}; 
    int k = 3; 
    bool result = sol.constrainsNearbyDuplicates(nums,k);
    cout<<result;
    return 0;
}
