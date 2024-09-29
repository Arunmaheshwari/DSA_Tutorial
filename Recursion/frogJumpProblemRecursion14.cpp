#include<iostream>
using namespace std;

int frogProblem(int *h, int n, int i){
    if(i == n-1) return 0;
    if(i == n-2) return frogProblem(h, n, i+1) + abs(h[i] - h[i+1]);

    return min(frogProblem(h, n, i+1) + abs(h[i] - h[i+1]), frogProblem(h, n, i+2) + abs(h[i] - h[i+2]));
}
int main(){

    int stone[16] = {10,30,40,20,34,54,87,12,34,97,23,45,76,78,54,23};
    int n = 16 ;
    cout<<frogProblem(stone,n,0);
    return 0;
}