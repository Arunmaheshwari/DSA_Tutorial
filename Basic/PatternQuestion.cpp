#include<iostream>
using namespace std;

int main(){

//1
    //print
    //****
    //****
    //****
    
    // int n,m;
    // cin>>n>>m;

    // for(int i = 1; i<=n;i++){
    //     for(int j = 1; j<=m; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//2
    //print
    //******
    //*    *
    //*    *
    //******

    // int n,m;
    // cin>>n>>m;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1;j<=m; j++){
    //         if(i==1 || i==n || j==1 || j==m){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }cout<<endl;
    // }

//3

    // print
    // *
    // **
    // ***
    // ****

    // int n;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=i; j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

//4

    // print
    // ****
    // ***
    // **
    // *

    // int n;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=n-i+1; j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

//5
    // print
    //    *
    //   ***
    //  *****
    // *******

    // int n;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";
    //     }
    //     for(int j= 1; j<=(2*i-1);j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

//6

    // print
    // 1 2 3 4 5 6 7
    // 2 3 4 5 6 7 1
    // 3 4 5 6 7 1 2
    // 4 5 6 7 1 2 3
    // 5 6 7 1 2 3 4
    // 6 7 1 2 3 4 5
    // 7 1 2 3 4 5 6

    // int n;
    // cin>>n;

    // for(int i = 1; i<=n; i++){
    //     for (int j = i; j<=n; j++){
    //         cout<<j<<" ";
    //     }
    //     for(int j = 1; j<=(i-1);j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

//7
    // print
    // 123456
    // 123456
    // 123456
    // 123456

    // int n,m;
    // cin>>n>>m;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }

//8
    // print
    // 123456
    // 1    6
    // 1    6
    // 1    6
    // 1    6
    // 123456

    // int n,m;
    // cin>>n>>m;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         if(i==1 || i==n || j==1 || j==m){
    //              cout<<j;

    //         }else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;

    // }

//9

    // print
    // 121212
    // 121212
    // 121212
    // 121212

    // int n,m;
    // cin>>n>>m;

    // for(int i = 1;i<=n; i++){
    //     for(int j = 1; j<=m; j++){
    //         if((i+j)%2==0){
    //             cout<<"1";
    //         }else{
    //             cout<<"2";
    //         }
    //     }cout<<endl;
    // }

//10 
    // print
    // 1
    // 12
    // 123
    // 1234

    // int n;
    // cin>>n;

    // for(int i = 1; i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

//11

    // print
    //    1
    //   121
    //  12321
    // 1234321

    int n;
    cin>>n;

    for(int i = 1; i<=n; i++){
        for(int j= 1; j<=(n-i);j++){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        for(int j=(i-1); j>=1; j--){
            cout<<j;
        }
        cout<<endl;

    }



    return 0;
}