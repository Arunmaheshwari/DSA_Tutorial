#include<iostream>
using namespace std;


int maxElement(int *array, int idx, int n){
    //base case
    if(idx==n-1){
         return array[idx];
    }
    

    return max(array[idx],maxElement(array, idx+1, n));

    
}

int main(){
    int n = 5;
    int array[] = {3,6,4,9,7};
    int result = maxElement(array,0,n);
    cout<<result<<endl;
}