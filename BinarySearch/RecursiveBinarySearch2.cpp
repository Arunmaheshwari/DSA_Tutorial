#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector <int> &input, int target, int first, int last){

    
    int mid = (first+last)/2;

    //base case
    if(first>last) return -1;
    if(input[mid]==target) return mid;


    // assumption and self work

    if(input[mid]<target){
        return recursiveBinarySearch(input, target, mid+1, last);
    }else{
        return recursiveBinarySearch(input, target, first, mid-1);
    }
}

int main()
{

    vector<int> input{1, 3, 5, 6, 8, 9, 12, 32, 54, 67, 89, 90, 112, 132};
    int target = 2;
    int first = 0;
    int last = input.size()-1;

    cout << recursiveBinarySearch(input, target, first, last) << endl;
    return 0;
}

// time complexity = 0(logn)
// space comlexity = 0(logn)