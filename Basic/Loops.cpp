#include<iostream>
using namespace std;

int main(){


    // While Loop

    //Sum of n no.

    // int n;
    // cin>>n;

    // int sum = 0;

    // int i = 1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum<<endl;



    // For Loop

    //sum of n no
    // int n;
    // cin>>n;

    // int sum =0;
    // for(int i = 1; i<=n; i++){
    //     sum+=i;

    // }
    // cout<<sum<<endl;


    // print the first multiple of 5 and 7

    // int i =5;

    // while(true){
        
    //     if(i%7 ==0){
    //         cout<<i<<endl;
    //         break;
    //     }
    //     i+=5;
    // }


    // print the first multiple of 5 and 7

    // for(int i = 5; ; i+=5){
    //     if(i%7==0){
    //         cout<<i<<endl;
    //         break;
        
    //     }
    // }


    // Do while Loop

    // int n;
    // cin>>n;

    // int sum = 0;

    // do{
    //     int num;
    //     cin>>num;
    //     sum+=num;
    //     n--;

    // }while(n>0);





    // print all the values between 1 and 50 except for the multiple of 3.

    for(int i =1; i<50; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;


    }






    return 0;

    




}