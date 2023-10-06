#include<iostream>
#include<utility>
using namespace std;

void bubble_sort(int arr[],int n){
    int didSwap = 0;

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap =1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
}

//Time complexity --> n^2 (For worst and avg)
//But when its in decending and acending order --> (Can be optimised for O(n);

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

