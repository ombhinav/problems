#include<iostream>
using namespace std;

int main(){

        int arr[]={2,3,5,1,9};
        int n=5;
        int k = 10;
        int len =0;
        for(int i=0;i<n;i++){
            int s =0;
            for(int j=i;j<n;j++){
                s = s + arr[j];

                if(s == k){
                    len = max(len,j-1+1);
                }
            }
        }
    cout<<len;
}

//wrong answers