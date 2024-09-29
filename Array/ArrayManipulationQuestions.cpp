#include<iostream>
#include<vector>
using namespace std;

// Question pattern: Array Manipulation

//int main(){
//1
// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique

    // int arr[]={2,3,1,3,2,4,4,7,1};
    // int size=sizeof(arr)/sizeof(arr[0]);
    
    

    // for(int i=0;i<size;i++){
    //     for(int j=i+1;j<size;j++){
    //         if(arr[i]==arr[j]){
    //             arr[i]=arr[j]=-1;
    //         }
    //     }
    // }
    // for(int i=0;i<size;i++){
    //     if(arr[i]>0){
    //         cout<<arr[i]<<endl;
    //     }
    // }
//}
//2
// Find the second largest element in the given Array
// In this question there are few subquestion
// Like- 1. Assuming all element are unique   2,3,5,7,6,1
// 2. Assuming largest element come multiple time  2,3,5,7,6,1,7
// 3. In the last we trying to do reduce complexity 

// int largestElementIndex(int array[], int size){
//     int max = INT16_MIN;
//     int index = -1;
//     for(int i = 0;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//             index = i;
//         }
//     }
//     return index;

// }

// int main(){
//     int array[]={2,3,5,7,6,1,7};
//     int size = sizeof(array)/sizeof(array[0]);
//     int indexoflargest= largestElementIndex(array, 6);
//     //cout<<"Largest element of array: "<<array[indexoflargest]<<endl;
//     int largestele=array[indexoflargest];
//     for(int i=0; i<size; i++){
//         if(array[i]==largestele){
//             array[i] = -1;
//         }
//     }
//     array[indexoflargest]=-1;
//     int indexofsecondlargest = largestElementIndex(array,6);
//     cout<<"Index of second largest element: "<<indexofsecondlargest<<endl;
//     cout<<"Largest second element: "<<array[indexofsecondlargest]<<endl;
// }

// For last case

// int secondLargestElement(int array[], int size){
//     int max = INT16_MIN;
//     int secondMax = INT16_MIN;

//     for(int i =0;i<size;i++){
//         if(array[i]>max){
//             max = array[i];
//         }
//         if(array[i]>secondMax  && array[i]!=max){
//             secondMax= array[i];
//         }
//     }
    
//     return secondMax;

// }
// int main(){
//     int array[]={2,3,5,7,6,45,45,14,21,1,7};
//     int size = sizeof(array)/sizeof(array[0]);
//     cout<<secondLargestElement(array, size)<<endl;

//     return 0;

// }

//3
// Rotate the given array 'a' by k steps, where k is non-negative.
// Note: k can be greater than n as well where n is the size of array 'a'.
// case 1 simple solution
// case 2 Without making extra array

// int main(){
//     int a[]= {1,2,3,4,5};
//     int k=14;
//     int n = sizeof(a)/sizeof(a[0]);

//     // k can be greater than n
//     k=k%n;
    
//     int ansarray[n];
//     int j=0;

//     // Inserting last k element in ans array
//     for(int i=n-k;i<n;i++){
//         ansarray[j++]=a[i];

//     }

//     // Inserting n-k elements in ans array
//     // for(int i=0; i<=k;i++){
//     //     ansarray[j++]=a[i];
//     // }
//     for(int i=0;i<n;i++){
//         cout<<ansarray[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }
// For case 2

// int main(){
//     vector <int> a;
//     a.push_back(1);
//     a.push_back(2);
//     a.push_back(3);
//     a.push_back(4);
//     a.push_back(5);

//     int k=2;
//     k = k%a.size();

//     reverse(a.begin(),a.end());
//     reverse(a.begin(),a.begin()+k);
//     reverse(a.begin()+k,a.end());

//     for(int ele:a){
//         cout<<ele<<" ";
//     }cout<<endl;


//     return 0;

// }
// I got stuck due to revrse function is not working in my system, i don't know why
// But every code is right

//4
// Given Q queries, check if the given number is present in the array or not.
// Note- Value of all the elements in the aray is less than 10 to the power 5

int main(){
    int n;
    cin>>n;

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    const int N = 1e5 + 10;
    vector <int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"Enter Queries: ";
    int q;
    cin>>q;

    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
}