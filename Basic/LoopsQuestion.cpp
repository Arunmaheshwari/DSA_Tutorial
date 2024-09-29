#include<iostream>
using namespace std;

int main(){
//1
   // Count the number of digits for a given number n
//    int n;
//    cin>>n;

//    int digits = 0;

//    while(n>0){

//     digits++;
//     n=n/10;

//    }

// cout<<digits<<endl;

//2
   //Find the sum of digits in a given number n

   // int n;
   // cin>>n;

   // int sum = 0;

   // while(n>0){
   //    int lastdigits = n%10;
   //    sum = sum+lastdigits;
   //    n = n/10;
   // }
   // cout<<sum<<endl;

//3
  // Reverse the digits of a number

//   int n;
//   cin>>n;

//   int reverse = 0;

//   while(n>0){
//    int lastdigits = n%10;
//    reverse = reverse*10+lastdigits;
//    n = n/10;
//   }

// cout<<reverse<<endl;

//4
   // Find the sum of the following series
   // s = 1-2+3-4...n

   int n;
   cin>>n;

   int result = 0;

   for(int i = 1; i<=n;i++){
      if(i%2==0){
         result-=i;
      }else{
         result+=i;
      }
   }

    cout<<result<<endl;

    return 0;
}