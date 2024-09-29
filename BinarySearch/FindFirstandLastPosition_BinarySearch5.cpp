#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &input, int target){
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
int upperBound(vector<int> &input, int target){
    int first = 0;
    int last = input.size()-1;
    int ans = -1;
    while(first<=last){
        int mid = (first+last)/2;

        if(input[mid]>target){
            ans = mid;
            last = mid-1;
        }else{
            first = mid+1;
        }
    }
    return ans;
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
    int target;
    cin>>target;
    std:: vector<int> result;
    int lb = lowerBound(input, target);
    if(input[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int ub = upperBound(input, target);
        result.push_back(lb);
        result.push_back(ub-1);
    }

    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}