#include<iostream>
#include<vector>

using namespace std;

//1 
// Rows with maximum number of 1's problem

// Given a boolean 2D array, where each row is sorted. find the row with the maximum number of 1s.
// Input: row = 3, col=4
// matrix[]={{0 1 1 1}
//           {0 0 0 1}
//           {0 0 1 1}}
// int maximumOnesRow(vector<vector<int>> &v){
//     int maxOnes=INT16_MIN;
//     int maxOnesRow = -1;
//     int column = v[0].size();

//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int numbersOfOnes=column-j;
//                 if(numbersOfOnes>maxOnes){
//                     maxOnes=numbersOfOnes;
//                     maxOnesRow = i;
//                 }
//                 break;
//             }
//         }

//     }
//     return maxOnesRow;

// }
// Another way
// int lastOne(vector<vector<int>> &v){
//     int leftMostOnes = -1;
//     int maxOneRow = -1;
//     int j=v[0].size()-1;

//     //finding leftmost one in 0th row
//     while(j>=0 && v[0][j]==1){
//         leftMostOnes = j;
//         maxOneRow = 0;
//         j--;
//     }

//     // check in rest of the rows if we can find a one left to the left

//     for(int i=1;i<v.size();i++){
      

//         while(j>=0 && v[i][j]==1){
//             leftMostOnes = j;
//             j--;
//             maxOneRow = i;
//         }
//     }
//     return maxOneRow;

// }
// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> vec(n, vector<int> (m));

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>vec[i][j];
//         }
//     }
//     // int res=maximumOnesRow(vec);
//     int res = lastOne(vec);
//     cout<<res<<endl;
//     return 0;

// }

//2
// Rotation of matrix
// Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space

void rotateArray(vector <vector<int>> & vec){
    int n=vec.size();
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    //reverse row
    for(int i=0;i<n;i++){
        reverse_iterator(vec[i].begin(),vec[i].end());
    }
    return;
}
int main(){
    int n;
    cin>>n;

    vector<vector<int>> vec(n, vector<int> (n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }
    rotateArray(vec);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}