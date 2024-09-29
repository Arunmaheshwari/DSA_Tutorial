#include<iostream>
using namespace std;

// int main(){
// //1
// // Given tow vectors arr1 and arr2 of size m and n sorted in increasing order. 
// //Merge the two arrays into a single sorted array of size m+n;

//     int arr1[] = {3,5,7,8,9};
//     int arr2[]={1,2,4,5,6,7};
//     int m=5;
//     int n=6;
//     int ansarr[m+n];

//     int i = 0;
//     int j=0;
//     int k=0;
//     while(i<m and j<n){
//      if(arr1[i]<arr2[j]){
//          ansarr[k]=arr1[i];
//          k++;
//          i++;
//      }else{
//          ansarr[k]=arr2[j];
//          j++;
//          k++;
//      }
//     }
//     while(i<m){
//         ansarr[k]=arr1[i];
//         k++;
//         i++;
//     }
//     while(j<n){
//         ansarr[k]=arr2[j];
//         k++;
//         j++;
//     }

//     for(int i=0;i<m+n;i++){
//         cout<<ansarr[i]<<" ";
//     }cout<<endl;
//     return 0;

// }

//2
//Given a vector arr sorted in increasing order of n size and an integer x,
//find if there exists a pair in the array whose sum is exactly x.
int main(){
    int arr[]={-2,-1,0,1,2,3,4,6,7,9,10,18};
    int x=14;
    int n= 13;

    int i=0;
    int j=n-1;
    
    int totalpair = 0;
    cout<<"mahes";
    while(j<j){
    if(arr[i]+arr[j]==x){
        totalpair+=1;
    }
    }

    while(i<j){
        if(arr[i]+arr[j]<x){
            i++;
        }else{
            j--;
        }  
    }
    // if(arr[i]+arr[j]==x){
    //     totalpair+=1;
    // }
     cout<<totalpair<<endl;
     cout<<"arun"<<endl;
    
    return 0;


}