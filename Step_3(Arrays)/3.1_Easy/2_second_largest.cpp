#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int slargest = -1;
    for(int i=0;i<n;i++){

        
        if(arr[i]>slargest && arr[i] != max){
           slargest = arr[i];
        }
    }
   
    cout<<max<<" "<<slargest<<endl;

    //not the optimal solution tho!

}