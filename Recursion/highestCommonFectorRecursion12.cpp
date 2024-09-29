#include<iostream>
using namespace std;

int gCD(int a, int b){

    if(b>a) return gCD(b,a);

    if(b==0) return a;

    return gCD(b, a%b);
}
int main(){

    int a;
    int b;
    cin>>a>>b; 
    cout<<gCD(a,b);
    return 0;
}