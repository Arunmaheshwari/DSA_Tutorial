#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &input, int target)
{
    int first = 0;
    int last = input.size() - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;

        if (input[mid] == target)
            return mid;

        else if (input[mid] < target)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> input{1, 3, 5, 6, 8, 9, 12, 32, 54, 67, 89, 90, 112, 132};
    int target = 67;

    cout << binarySearch(input, target) << endl;
    return 0;
}
// time complexity = 0(logn)
// space comlexity = 0(1)