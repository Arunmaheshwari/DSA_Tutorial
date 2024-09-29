#include<iostream>
using namespace std;

int sumOfItsDigits(int n){
    //base case
    if(n>=1 && n<=9) return n;

    // self work and assumption
    return sumOfItsDigits(n / 10) + (n%10);
}
int main(){
    int n;
    cin>>n;
    int result = sumOfItsDigits(n);
    cout<<result<<endl; 
    return 0;
}