#include<iostream>
#include<set> 
using namespace std;

int main(){

    multiset<int> ms;

    ms.insert(2);
    ms.insert(4);
    ms.insert(3);
    ms.insert(2);

    for(auto values:ms){
        cout<<values<<" ";
    }cout<<endl;

    return 0;
}