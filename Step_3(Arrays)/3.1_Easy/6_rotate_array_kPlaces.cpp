#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n =9;
    int d;
    cin>>d;
    d = d%n;

    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    

    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }

    for(int i=n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}