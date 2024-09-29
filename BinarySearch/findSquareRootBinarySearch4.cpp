#include <iostream>
#include <vector>
using namespace std;

int squareRoot(int x){
    int first = 1;
    int last = x;
    int ans = 1;

    while(first<=last){
        int mid = first + (last - first)/2;

        if(mid*mid<= x){
            ans = mid;
            first = mid+1;
        }
        else{
            last = mid -1;
        }
    }
    return ans;
}
int main()
{
    cout<<squareRoot(76)<<endl;

    return 0;
}
// time complexity = 0(logn)
// space comlexity = 0(1)
// These problem is known as Binary Search on Ans