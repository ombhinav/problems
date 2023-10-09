#include<iostream>
using namespace std;
int main(){
    int arr[]={23,45,65,62,89,93};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){

        }
        else{
            cout<<"not sorted";
            return 0;
        }
    }
    cout<<"sorted";
    return 0;
}