#include<iostream>
#include<vector>
using namespace std;

void mobileKeypad(string &str, int i, string result, vector <string> &li, vector<string> &v){
    if( i == str.size()){
        // cout<<result<<endl;
        li.push_back(result);
        return;
    }

    int digit = str[i] = '0';
    if(digit <= 1){
        mobileKeypad(str, i+1, result, li, v);
        return;
    }

    for(int j = 0; j < v[digit].size(); j++){
        mobileKeypad(str, i + 1, result + v[digit][j], li, v);
    }
    return;
}
int main(){
    vector <string> v (10);
    v = {"", "","abc", "def", "ghi", "jki", "mn0", "pqrs", "tuv", "wxyz"};
    string str = "23";
    vector <string> li;

    mobileKeypad(str, 0, "", li, v);
    for(int i = 0; i<li.size(); i++){
        cout<<li[i]<<" ";
    }

    return 0;
}