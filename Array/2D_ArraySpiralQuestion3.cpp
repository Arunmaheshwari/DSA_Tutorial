#include<iostream>
#include<vector>
using namespace std;

//1
// Pattern- Spial Matrix
// Given an n * m matrix 'a', return all elements of the matrix in sprial order
// void sprialMatrix(vector<vector<int>> &matrix){
//     int top=0;
//     int bottom=matrix.size()-1;
//     int left=0;
//     int right=matrix[0].size()-1;
//     int direction =0;

//     while(left<=right && top<=bottom){
//         if(direction==0){
//             for(int col=0;col<=right;col++){
//                 cout<<matrix[top][col]<<" ";
//             }
//             top++;
//         } else if(direction==1){
//             for(int row=top;row<=bottom;row++){
//                 cout<<matrix[row][right]<<" ";
//             }
//             right--;
//         } else if(direction==2){
//             for(int col=right;col>=left;col--){
//                 cout<<matrix[bottom][col]<<" ";
//             }
//             bottom--;
//         }else{
//             for(int row=bottom;row>=top;row--){
//                 cout<<matrix[row][left]<<" ";
//             }
//             left++;
//         }
//         direction = (direction+1)%4;
//     }
// }
// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> matrix(n, vector<int> (m));

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>matrix[i][j];
//         }
//     }

//     sprialMatrix(matrix);

//     return 0;
// }

//2
//Given a positive integr n, generate an n * n matix filled with elements from 1 to n2 in spiral order

vector<vector<int>> createSpiralMatrix(int n){
    vector<vector<int>> funmatrix(n, vector<int> (n));

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;

    int direction = 0;
    int value = 1;

    while(left<=right && top<=bottom){
        if(direction==0){
            for(int i=left;i<=right;i++){
                funmatrix[top][i]=value++;
            }
            top++;
        } else if(direction==1){
            for(int j=top;j<=bottom;j++){
                funmatrix[j][right]=value++;
            }
            right--;
        } else if(direction==2){
            for(int i=right;i>=left;i--){
                funmatrix[bottom][i]=value++;
            }
            bottom--;
        }else{
            for(int j=bottom;j>=top;j--){
                funmatrix[j][left]=value++;
            }
            left++;
        }
        direction = (direction+1)%4;
    }
    return funmatrix;
}
int main(){
    int n;
    cin>>n;

    vector <vector<int>> matrix(n, vector<int> (n));
    

    matrix= createSpiralMatrix(n);
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    
    return 0;
}