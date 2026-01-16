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

        void put(int key,int value){
            int index = hash(key);
            for(auto &p: table[index]){
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
            return 0;
        }
        void printTable() {
            for (int i = 0; i < SIZE; i++) {
                for (auto &p : table[i]) {
                    cout << p.first << " -> " << p.second << endl;
                }
            }
        }   
};
int main(){
    int arr[] = {1,2,2,3,3,5};
    int n = 6;
    Myhash map;
    for(int i = 0 ; i < n ; i++){
        int currentCount = map.get(arr[i]);
        map.put(arr[i], currentCount+1);
    }
    map.printTable();
    return 0;
}
