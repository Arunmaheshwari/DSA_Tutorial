#include<iostream>
using namespace std;
int powerResult(int p, int q){

    //base case
    if (q==0) return 1;

    if(q%2==0){
        // assumption
        int result = powerResult(p,q/2);
        // self work
        return result * result;
    }else{
        // assumption
        int result = powerResult(p, (q-1)/2);
        // self work
        return  p * result * result;
    }
}
int armStrongNO(int n, int d){
    if(n == 0) return 0;

    return powerResult(n%10,d) + armStrongNO(n/10, d);
}
int main(){
    int n;
    cin>>n;

    int no_of_digits = 0;
    int temp = n;
    while(temp>0){
        temp/=10;
        no_of_digits++;
    }

    int result = armStrongNO(n,no_of_digits);
    if(result == n){
        cout<<"This is armstrong no"<<endl;
    }else{
        cout<<"This is not armstrong no"<<endl;
    }
    return 0;
}