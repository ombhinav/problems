#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int low, int high){
    int pivot = arr[low];
    int i= low;
    int j = high;
    
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;

}

void quick_sort(vector<int> &arr,int low, int high){


    if(low<high){

    int pIndex = partition(arr,low,high);
    quick_sort(arr,low,pIndex-1);
    quick_sort(arr,pIndex+1,high);
    }
}


int main(){
    vector <int> arr;
    arr.push_back(23);
    arr.push_back(41);
    arr.push_back(10);
    arr.push_back(7);
    arr.push_back(92);
    arr.push_back(59);
    arr.push_back(18);
    arr.push_back(72);

    quick_sort(arr,0,arr.size()-1);

    for(auto it : arr){
        cout<<it<<" ";
    }

}