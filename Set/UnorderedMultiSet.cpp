#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_multiset<int> ms1;

    ms1.insert(4);
    ms1.insert(3);
    ms1.insert(4);
    ms1.insert(1);
    ms1.insert(5);

    for(auto values:ms1){
        cout<<values<<" ";
    }cout<<endl;

    return 0;
}