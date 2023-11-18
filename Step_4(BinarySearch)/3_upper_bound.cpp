#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> arr, int n, int x){
    int low =0;
    int high = arr.size() -1;
    int ans = n;
    
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] > x){  //everything same as lower bound , just a minor difference in "=" sign, 
            ans = mid;      //it would not be there, for upper bound.
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;

}

int main(){
    vector <int> arr;
    arr.push_back(12);
    arr.push_back(23);
    arr.push_back(34);
    arr.push_back(45);
    arr.push_back(54);
    arr.push_back(67);
    arr.push_back(89);
    arr.push_back(91);
    int n = arr.size();
    int x;
    cin>>x;

    int m = lowerBound(arr, n, x);
    cout<<m;
}
