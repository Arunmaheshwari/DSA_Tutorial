#include<iostream>
using namespace std;

int mazePath(int i, int j, int n, int m){

    if(i==n-1 and j == m-1) return 1;
    if(i>= n or j>=m) return 0;

    return mazePath(i, j+1, n, m) + mazePath(i+1, j, n, m);
}
int main(){

    cout<<mazePath(0,0,2,3);


    return 0;
}