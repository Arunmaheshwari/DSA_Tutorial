#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &input, int target){
    int first = 0;
    int last = input.size()-1;
    int ans = -1;
    while(first<=last){
        int mid = (first+last)/2;

        if(input[mid]==target){
            ans = mid;
            last = mid-1;
        } else if(input[mid]>target){
            last = mid-1;
        }else{
            first = mid+1;
        }
    }
    return ans;
}

int main()
{

    vector<int> input{2,5,5,5,6,6,8,9,9,9};
    int target = 5;

    cout << firstOccurrence(input, target) << endl;
    return 0;
}
// time complexity = 0(logn)
// space comlexity = 0(1)