#include<iostream>
using namespace std;
int main(){
	int arr[10]; 
	cout<<"Enter the 10 elements in an array\n"; 
	for(int i = 0 ; i < 10; i++){
		cin>>arr[i];
	}
	cout<<"Your elements are:"; 
	for(int i = 0; i < 10;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
