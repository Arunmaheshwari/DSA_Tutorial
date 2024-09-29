#include<iostream>
using namespace std;

int sumWithAlternateSign(int n){

    if(n==0){
         return 0;
    }

    

    return sumWithAlternateSign(n-1) + ((n%2==0) ? (-n) : n);
    
}
int main(){
    int n = 5;
    cout<<sumWithAlternateSign(n);
    return 0;
}