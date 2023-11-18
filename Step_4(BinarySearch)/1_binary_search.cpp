#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int target){

    if(low>high){
        return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid]== target){
        return mid;
    }
    else if(target > mid){
        binarySearch(arr, mid+1, high, target);
    }

    return binarySearch(arr, low, mid-1,target);

}

int search(vector <int> &arr, int target){
    return binarySearch(arr, 0, arr.size(),target);
}

int main(){


    vector<int> arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(18);
    arr.push_back(45);
    arr.push_back(63);
    arr.push_back(80);
    int target;
    cin>>target;
    int m = search(arr,target);
    cout<<m;
   


    

    return 0;
}
