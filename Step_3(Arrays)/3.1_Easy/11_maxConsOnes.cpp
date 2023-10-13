#include<iostream>
using namespace std;

int main(){
    int n = 16;
    int arr[] = {1,1,0,0,1,1,1,0,0,1,1,1,1,1,1,1};
    int maxi=0; //which will take the count for the max ones
    int cnt=0;

    for(int i =0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi = max(maxi,cnt);
        }

    
        else{
            cnt = 0;
        }

    }
        cout<<maxi;



}