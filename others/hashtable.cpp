#include<iostream>
#include<vector>
#include<list>
using namespace std; 
class Myhash{
	private:
		static const int SIZE = 7; 
		vector<list<pair<int,int>>>table;

		int hash(int key){
			return key%SIZE;
		}
	public:
		Myhash(){
			table.resize(SIZE);
		}
		void put(int key, int value){
			int index = hash(key);
			for(auto &p : table[index]){
				if(p.first == key){
					p.second = value; 
					return;
				}
			}
			table[index].push_back({key,value});
		}
		int get(int key){
			int index = hash(key); 
			for(auto &p : table[index]){
				if(p.first == key) return p.second;
			}
			return -1;
		}
		void remove(int key){
			int index = hash(key); 
			table[index].remove_if([&](auto &p){return p.first == key;});
		}
		void printTable(){
			for(int i =0;i<SIZE;i++){
				cout<< i<<": "; 
				for(auto &p:table[i]){
					cout<<"("<<p.first<<","<<p.second<<")";
				}
				cout<<endl;
			}
		}

};
int main(){
	Myhash map; 
	map.put(1,100); 
	map.put(8,100);
	map.put(15,300);
	map.printTable();
	cout<<"Get 8:"<<map.get(8)<<endl;
	return 0;
}
