#include<iostream> 
using namespace std;
//1
// Swap two number using pointer

// void swap(int *x, int *y){
//     int temp = *x;
//     *x=*y;
//     *y = temp;
// }

// int main(){

//     int x = 10;
//     int y = 20;
    
//     int *p1 = &x;
//     int *p2 = &y;

//     swap(p1,p2);

//     cout<<x<<" "<<y<<endl;
//     cout<<*p1<<" "<<*p2;

//     return 0;
// }

//2
// Find first and last index of given string

void findFirstAndLastIndex(string s, char ch, int *first, int *last){
    for(int i =0;i<s.size();i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }

    for(int i=s.size()-1;i>=0; i--){
        if(s[i]==ch){
            *last = i;
            break;
        }
    }
}
int main(){
    string s = "aaabac";
    char ch = 'a';

    int first = -1;
    int last = -1;

    int *p1 = &first;
    int *p2 = &last;

    findFirstAndLastIndex(s,ch,p1,p2);

    cout<<*p1<<" "<<*p2<<endl;
    cout<<first<<" "<<last<<endl;


}