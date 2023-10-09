#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,53,64,67,67,89,90,99,99};
    int n = 9;

    //optimal 2-pointer approach

        int i=0;
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
    //return the index;
    cout<<(i+1);
    return i+1;

}