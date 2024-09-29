#include<iostream>
using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;

//     int arr1[n][m];
//     cout<<"It is a array of "<<n<<" * "<<m<<endl;
//     cout<<"Enter the element of 2-D array"<<endl;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr1[i][j];
//         }  
//     }
//     cout<<"Here is a result of your input"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr1[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }

//Sample Questions
//1 Write a prigram to display multiplication of two matrices entered by the user.
// int main(){

//     int r1,c1;
//     cin>>r1>>c1;
//     int A[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>A[i][j];
//         }
//     }
//     cout<<"Matrix A:"<<endl; 
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cout<<A[i][j]<<" ";
//         }cout<<endl;
//     }

//     int r2,c2;
//     cin>>r2>>c2;
//     int B[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>B[i][j];
//         } 
//     }
//     cout<<"Matrix B:"<<endl;
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cout<<A[i][j]<<" ";
//         }cout<<endl;
//     }
//     if(c1!=r2){
//         cout<<"Matrix multiplication is not possible for this input"<<endl;
//     }

//     int C[r1][c2];

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<r2;j++){
//             int value;
//             for(int k=0;j<r2;k++){
//                 value+=A[i][k]*B[k][j];
//             }
//             C[i][j]=value;
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<r2;j++){
//             cout<<C[i][j]<<" ";
//         }cout<<endl;
//     }
//     cout<<"code is not working"<<endl;
    
//     return 0;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;

//     int array[n][m];

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>array[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<array[i][j]<<" ";
//         }cout<<endl;
//     }

//     int transpose[m][n];

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             transpose[i][j]=array[j][i];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<transpose[i][j]<<" ";
//         }cout<<endl;
//     }
// }