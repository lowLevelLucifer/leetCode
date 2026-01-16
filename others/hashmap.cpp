#include<iostream>
#include<unordered_set>
using namespace std; 

int main(){
	unordered_set<int>seen;
	int arr[] = {1,2,3,4,5,1};
	for(int i =0;i<7;i++){
		if (seen.find(arr[i]) != seen.end()) {
            		cout<<"Duplicate found: "<<arr[i]<<endl;
			return 0;
        	} else {
            		seen.insert(arr[i]); // mark as seen
        	}
	}	
	cout<<"Duplicate not found";
}
