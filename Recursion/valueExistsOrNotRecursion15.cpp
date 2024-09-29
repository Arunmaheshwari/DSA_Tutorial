#include<iostream>
using namespace std;

bool valueExists(int *arr, int n, int i, int target){
    if(i==n) return 0;
        
    

    return (target == arr[i]) or valueExists(arr, n, i+1, target);
        
        
    
}
int main(){

    int arr[] = {4,12,54,14,3,8,6,1};
    int n = 8;
    int target = 1;
    int result = valueExists(arr, n, 0, target);
    if(result) cout<<"Yes";
    else cout<<"NO";
    return 0;
}