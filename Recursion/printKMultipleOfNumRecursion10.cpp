#include<iostream>
using namespace std;
void kMultiple(int num, int k){
    
    if(k<=0) return;

    kMultiple(num, k-1);
    cout<<num*k<<" ";
}
int main(){
    int num = 5;
    int k = 10;
    kMultiple(num, k);
    return 0;
}