#include<iostream>
using namespace std;

bool checkPalindrome(int num, int *temp){
    // base case
    if(num>= 0 and num<= 9){
        int lastDigitOfTemp = (*temp)%10;
        (*temp)/=10;
        return (num == lastDigitOfTemp);
    }

    bool result = (checkPalindrome(num/10, temp) and (num%10) == ((*temp) % 10));
    (*temp)/=10;
    return result;


}
int main(){
    int num = 1236321;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<checkPalindrome(num, temp);
    return 0;
    
     
    return 0;
}