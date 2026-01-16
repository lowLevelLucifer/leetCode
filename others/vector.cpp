#include<iostream>
#include<vector>
using namespace std;
int main(){
	int i = 0;
	int size; 
	cout<<"Enter the size for elements of array:";
	cin>> size;
	vector<int>arr(size);
	cout<<"\nEnter the elements for an array:";
	for(i=0; i <size;i++){
		cin>>arr[i];
	}

	cout<<"\nArray = "; 
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
