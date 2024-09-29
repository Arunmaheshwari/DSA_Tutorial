#include<iostream>
#include<set>
using namespace std;


int main(){
    set <int> set1;

    //Insertion in a set
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(4);
    
    cout<<set1.size()<<endl;

    // Traversing in a set
    // set<int>:: iterator itr;
    // for( itr = set1.begin(); itr!= set1.end(); itr++){
    //     cout<<*itr<<" ";
    // }cout<<endl;

    // for(auto value:set1){
    //     cout<<value<<" ";
    // }cout<<endl;

    //deletion of elements
    //1
    //set1.erase(3);

    //2
    // auto itr = set1.begin();
    // advance(itr,2);
    // set1.erase(itr);

    //3
    // auto start_itr = set1.begin();
    // start_itr++;

    // auto end_itr = set1.begin();
    // advance(end_itr, 3);
    // set1.erase(start_itr, end_itr);


    for(auto value:set1){
        cout<<value<<" ";
        
    }cout<<endl;

    // search operation
    if(set1.find(3)!= set1.end()){
        cout<<"Value is present"<<endl;
    }else{
        cout<<"Value is not present"<<endl;
    }
    return 0;
}