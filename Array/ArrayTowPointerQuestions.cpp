#include<iostream>
#include<vector>
using namespace std;

//Pattern: Two Pointers
//1
// Sort an Array consisting of only 0s and 1s

// void sortZerosAndOne(vector<int> &v){
//     // It is Simple approch

//     // int zeros_count =0;
//     // for(int ele: v){
//     //     if(ele==0){
//     //         zeros_count++;
//     //     }
//     // }
//     // for(int i=0;i<v.size();i++){
//     //     if(i<zeros_count){
//     //         v[i]=0;
//     //     }else{
//     //         v[i]=1;
//     //     }
//     // }


//     // It is Tow pointer approch

//     int left_ptr = 0;
//     int right_ptr = v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==0 && v[right_ptr]==1){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }
//         if(v[left_ptr]==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }
//     }

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
//     sortZerosAndOne(v);
//     cout<<"Sorted Array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<endl;
//     }cout<<endl;
   

    
//     return 0;
// }

//2
// Given an array of integers 'a', move all the even integers at the beginning
// of the array followed by all the odd integers.
// The relative order of odd or even integers does not matter. Return any array that satisfies the condition.
// void sortByParity(vector <int> &v){
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//             swap(v[left_ptr],v[right_ptr]);
//             left_ptr++;
//             right_ptr--;
//         }
//         if(v[left_ptr]%2==0){
//             left_ptr++;
//         }
//         if(v[right_ptr]%2==1){
//             right_ptr--;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     vector <int> v;
//     for(int i=0; i<n; i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
   

//     sortByParity(v);

//     cout<<"Sorted Odd Even"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<endl;
//     }
// }

//3
// Given an integer array 'a' sorted in non-decreasing order,
// return an array of the squares of each number sorted in non-decreasing order.

void sortedSquareArray(vector <int> &v){
    vector <int> ans;

    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }else{
            ans.push_back(abs(v[left_ptr]*v[left_ptr]));
            left_ptr++;
        }
    }
    
    // reverse(ans.begin(), ans.end());             reverse function is not working for any reason
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
} 
int main(){
    int n;
    cin>>n;

    vector <int> v;

    for(int i=0; i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    sortedSquareArray(v);
    return 0;
}