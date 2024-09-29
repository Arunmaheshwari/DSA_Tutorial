#include<iostream>
#include<vector>
using namespace std;

//Pattern: Prefix Sums
//1
//Given an integers array 'a', return the prefix sum/
//running sum in the same array without creating a new array

// void runningSum(vector <int> &v){
//     for(int i=1;i<v.size();i++){
//         v[i] = v[i-1]+v[i];
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;

//     vector <int> v;

//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     runningSum(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;

//     return 0;
// }

//2
//Check if we can partitoin the array into wwo subarrats with equal sum. 
//more formally, check that the prefix sum of a part
// of the array is equal to the suffic sum of rest of the array.
//6 2 8 9 1
//sum=26
//prefix = 6+2=8+8=16
//suffix = 10

// void checkPrefixSuffixSum(vector <int> &v){
//     int totalSum = 0;
//     for(int i=0;i<v.size();i++){
//         totalSum+=v[i];
//     }

//     int prefixSum=0;
    
//     for(int i=0;i<v.size();i++){
//         prefixSum+=v[i];
//         int suffixSum = totalSum-prefixSum;

//         if(suffixSum==prefixSum){
//             cout<<"Border exits";
//             return;
//         }
//     }
//     cout<<"Border does not exits";
//     return;
    
     
// }
// int main(){
//     int n;
//     cin>>n;

//     vector <int> v;

//     for(int i=0; i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
        
//     }

//     cout<<checkPrefixSuffixSum<<endl;
//    return 0;
// }

//3
//Given an array of integers of size n. Answer q queries where
//you need to print the sum of values in a given range of indices from l to r (both included).
// Note: The values of l and r in queries follow 1-based indexing

int main(){
    int n;
    cin>>n;

    vector <int> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    // Calculate prefix sum array
    for(int i=1;i<=n;i++){
        v[i]=v[i]+v[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        ans = v[r]-v[l-1];
        cout<<ans<<endl;

    
    }
    return 0;
}
