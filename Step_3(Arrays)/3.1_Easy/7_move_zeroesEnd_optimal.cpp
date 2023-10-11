#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,0,0,0,2,1,5,0};
    int n = 10;

    //brute force technique would be applied by taking another temp array 
    //where the non zero elements would be fixed;

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}