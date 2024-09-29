#include<iostream>
using namespace std;

// void process(int *arr, int n){
//     for(int i=0;i<n;i++){
//         cout<<*(arr+i)<<endl;
//     }
//     *(arr+3) = 33;
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     int n  = 4;
//     int *ptr = &arr[0];

//     cout<<ptr<<" "<<arr<<endl;
//     cout<<*ptr<<" "<<*arr<<endl;
//     cout<<*(arr+0)<<" "<<*(arr+1)<<" "<<*(arr+2)<<endl;

//     process(arr,n);


//     for(int i=0;i<n;i++){
//         cout<<*(arr+i)<<endl;
//     }

    

//     return 0;
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *ptr = (arr+2);
//     cout<<*ptr<<endl;
//     *ptr++;
//     cout<<*ptr<<endl;
// }

int main(){
    int arr[4]={2,3,5,4};

    int (*p)[4] = &arr;

    cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<endl;
}