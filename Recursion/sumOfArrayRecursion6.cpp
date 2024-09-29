#include<iostream>
using namespace std;

int sumOfArray(int *array, int idx, int n){
    //base case
    if(idx==n-1){
        return array[idx];
    }

    // self work and assumption
    return array[idx] + sumOfArray(array, idx+1, n);
}


int main(){
    int array[] = {1,2,3,4,5};
    int n = 5;
    cout<<sumOfArray(array,0,n)<<endl;
    return 0;
}