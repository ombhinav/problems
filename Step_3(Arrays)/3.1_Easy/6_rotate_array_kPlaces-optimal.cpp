#include<iostream>
// #include<utility>
// #include<algorithm>


void reversey(int start, int end,int arr[]){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    int d;
    cin>>d;
    d=d%n;

    //or simply can use reverse(arr,arr+d);
    //that works too;

    reversey(0,d-1,arr);
    reversey(d,n-1,arr);
    reversey(0,n-1,arr);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}