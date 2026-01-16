#include<iostream>
#include<unordered_map>
using namespace std; 

char nonrepeatnumber(const string &s){
	unordered_map<char,int>freq; 
	for(char c:s){
		freq[c]++;
	}
	for(char c:s){
		if(freq[c]==1){
			return c;
		}
	}
	return '\0';

}
int main(){
	string s = "first"; 
	char ans = nonrepeatnumber(s);
	if(ans != 0){
		cout<<"First non-repeating charecter is: "<<ans<<endl;
	}else{
		cout<<"Non-repeating charecter not found"<<endl;
	}
	return 0;
}
