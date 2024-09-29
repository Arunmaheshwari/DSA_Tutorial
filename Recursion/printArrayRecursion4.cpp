#include<iostream>
using namespace std;

void printArray(int *array, int idx, int n){
    //base case
    if(idx==n) return;
    // self work
    cout<<array[idx]<<endl;
    // assumption
    printArray(array, idx+1,n);

}

int main(){
    int n = 5;
    int array[] = {3,4,7,4,9};

    printArray(array,0,n);
    
    return 0;
}