#include<iostream>
using namespace std;

int main(){

    //1
    // Calculate the sum of all the elements in the given array
    // int array[] = {3,6,8,4};
    // int size = sizeof(array)/sizeof(array[0]);

    // int sum=0;
    // for (int i =0; i<size; i++){
    //     sum = sum+array[i];
    // }
    // cout<<sum<<endl;

    //2
    // Fing the maximum value out of the elements in the array

    // int array[]={3,7,8,9};
    // int size = sizeof(array)/sizeof(array[0]);

    // int max = array[0];

    // for(int i =0; i<size; i++){
    //     if(array[i]>max){
    //         max = array[i];
    //     }
    // }
    // cout<<max;

    //3
    // Search if a given element is present in the array or not. if it is not present then return -1 else return the index

    int array[]={3,65,11,14,63};
    int size = sizeof(array)/sizeof(array[0]);

    int key = 1;
    int ans = -1;

    for(int i = 0; i<size; i++){
        if(array[i]==key){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}