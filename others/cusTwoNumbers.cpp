#include<iostream>
#include<vector>
using namespace std; 
class Cushash{
    private:
        static cosnt int SIZE = 100; 
        int table[SIZE]; 
    public:
        Cushash(){
            for(int i =0; i < SIZE;i++){
             table[i] = INT32_MIN;
            }
        }
        int hash(int key){
            return abs(key)%SIZE; 
        }

        void insert(int key){
        }
        void search(int key){

        }
};
bool TwoSum(vector<int>&nums, int target){
    Cushash map; 
    for(int num : nums){
        int compliment = target - num; 
        if(map.search(compliment)){
            cout<<"Pair Found: "<<num<<"+"<<compliment<<"="<<target<<endl;
            return true;
        }
        map.insert(num);
    }
    return false;
}
int main(){
    vector<int>nums ={1,2,3,4,5,6};
    int target = 9;
    
}
