#include<iostream>
using namespace std;

void sequence(int n){

    // it will print in decreasing order
    // if(n==1) return 1;
    // cout<<n<<" ";

    // return sequence(n-1);

    // it will print in increasing order
    if(n<1) return;


    sequence(n-1);
    cout<<n<<" ";
}
int main(){
    
    sequence(5);

   
    return 0;

}