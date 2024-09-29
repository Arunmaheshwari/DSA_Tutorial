#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==1){
        return 1;
    }

    int ans = n*factorial(n-1);
    return ans;
    // there is another way of this question is
    // if(n==1) return 1;
    // return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;

    int result = factorial(n);
    
    cout<<result<<endl;

    return 0;
}