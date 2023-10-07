#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void merge(vector <int> &arr,int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right <= high){
        if(arr[left]<= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i =low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector <int> &arr,int low,int high){
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    // int n; // give 9;
    // cin>>n;
    // vector<int> arr={12,13,46,12,57,53,11,9,35}; //can't initialize like this.
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(46);
    arr.push_back(12);
    arr.push_back(57);
    arr.push_back(53);
    arr.push_back(11);
    arr.push_back(9);
    arr.push_back(35);

    int n =9;

    mergeSort(arr,0,n-1);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high) {
//     vector<int> temp; // temporary array
//     int left = low;      // starting index of left half of arr
//     int right = mid + 1;   // starting index of right half of arr

//     //storing elements in the temporary array in a sorted manner//

//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // if elements on the left half are still left //

//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     //  if elements on the right half are still left //
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // transfering all elements from temporary to arr //
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high) {
//     if (low >= high) return;
//     int mid = (low + high) / 2 ;
//     mergeSort(arr, low, mid);  // left half
//     mergeSort(arr, mid + 1, high); // right half
//     merge(arr, low, mid, high);  // merging sorted halves
// }

// int main() {

//     // vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
//     // int n = 7;

//      vector<int> arr;
//     arr.push_back(12);
//     arr.push_back(13);
//     arr.push_back(46);
//     arr.push_back(12);
//     arr.push_back(57);
//     arr.push_back(53);
//     arr.push_back(11);
//     arr.push_back(9);
//     arr.push_back(35);
//     int n = 9;

//     cout << "Before Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     mergeSort(arr, 0, n - 1);
//     cout << "After Sorting Array: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " "  ;
//     }
//     cout << endl;
//     return 0 ;
// }