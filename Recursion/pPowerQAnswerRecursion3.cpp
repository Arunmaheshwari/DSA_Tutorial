#include<iostream>
using namespace std;
int powerResult(int p, int q){

    //reursive mathod
 
    //base case
    // if(q==0) return 1;
    // return p*powerResult(p,q-1) ;


    // More Efficient way of recursive method

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




// Itrative mathod

    // int ans = 1;
    // for(int i=1;i<=q;i++){
    //     ans = ans*p;
    // }
    // return ans;
}
int main(){
    int p,q;
    cin>>p>>q;

    int result = powerResult(p,q);

    cout<<result<<endl;

    return 0;   
}