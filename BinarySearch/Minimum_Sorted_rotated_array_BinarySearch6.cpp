#include <iostream>
#include <vector>
using namespace std;

int minimumElement(vector<int> &input){
    if(input.size() ==1) return input[0];
    int first = 0;
    int last = input.size()-1;
    if(input[first]<input[last]) return first;

    while(first<=last){
        int mid = (first+last)/2;

        if(input[mid]>input[mid+1]) return mid+1;
        if(input[mid]<input[mid-1]) return mid;
        if(input[mid]> input[first]){
            first = mid+1;
        }else{
            last = mid-1;
        }
    }return -1;
}
int main()
{

    int n;
    cin>>n;
    std::vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<minimumElement(input);
    return 0;
}