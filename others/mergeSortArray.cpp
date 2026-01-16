#include<iostream>
#include<vector>
using namespace std; 
class Solution{
	public:
		void merge(vector<int>&nums1, int m,vector<int>&nums2,int n){
			int i = m -1;
			int j = n -1; 
			int k = m+n -1;

			while(i>=0 && j>=0){
				if(nums1[i]>nums2[j]){
					nums1[k--] = nums1[i--];
				}
				else{
					nums1[k--] = nums2[j--];
				}
			}
			while(j>=0){
				nums1[k--] = nums2[j--];
			}
		}
};

int main(){
	Solution sol; 

	int m, n;
	cout<<"Enter the values of m and n:\n"; 
	cin>>m>>n;
	vector<int> nums1(m+n);
	vector<int> nums2(n);
	cout<<"Enter the elements for the nums1:\n";
	for(int i = 0; i < m;i++){
		cin>>nums1[i];
	}
	cout<<"Enter the elements for the nums2:\n";
	for(int i = 0; i < n; i++){
		cin>>nums2[i];
	}
	sol.merge(nums1,m,nums2,n);

	cout<<"Sorted array:\n";
	for(int num : nums1){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;

}
