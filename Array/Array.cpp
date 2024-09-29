#include<iostream>
using namespace std;

int main(){
    // int array[] = {1,2,3,4};

    // cout<<sizeof(array)/sizeof(array[0])<<endl;

    // int size = sizeof(array)/sizeof(array[0]);

    // //Traversing Array

    // // For loop

    // for(int idx = 0;idx<size; idx++){
    //     cout<<array[idx]<<endl;
    // }

    // // For each loop
    // for(int ele: array){
    //     cout<<ele<<endl;
    // }

    // // While loop
    // int i = 0;
    // while(i<sizeof(array)/sizeof(array[0])){
    //     cout<<array[i]<<endl;
    //     i++;
    // }


    // Taking Input

    char vowels[5];

    // For loop

    // for(int idx = 0; idx<5; idx++){
    //     cin>>vowels[idx];
    // }

    // For Each loop

    for(char &element: vowels){
        cin>>element;
    }
    for(int idx=0; idx<5; idx++){
        cout<<vowels[idx]<<" ";
    }


    return 0;
}