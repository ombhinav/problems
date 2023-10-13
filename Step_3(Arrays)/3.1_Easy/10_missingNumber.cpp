#include<iostream>
using namespace std;

void missingNum(int arr[],int n){ //brute force vali technique this is.
    int i;
    for(i=1;i<=n;i++){
        int flag =0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag =1;
                break;
            }
        }
            
        if(flag==0){
        cout<<i;
        }
    }
}

void missingNUm_hashing(int arr[], int n){ //better-solution, using hashing.
    int hash[n+1];
    for(int i=0;i<n-1;i++){
        hash[arr[i]] =1;

    }

    for(int i=1;i<=n;i++){
        if(hash[i]!=1){
            cout<<i;
        }
    }
}

void missingNum_sumMethod(int arr[],int n){
    int sum=0,sum2=0;

    sum = (n*(n+1))/2;

    for(int i=0;i<n-1;i++){
        sum2 = sum2 + arr[i];
    }

    cout<<sum-sum2;
}

void missingNum_xorMethod(int arr[], int n ){
    int xor1;
    for(int i=1;i<=n;i++){
        xor1 = xor1^i;
    }

    int xor2;
    for(int i=0;i<n-1;i++){
        xor2 = xor2^arr[i];
    }

    cout<<(xor1^xor2);

    //this is correct, but here we have 2 for loops, we need to trim it down to one.

    //cout<<xor1^xor2;
}

void missingNum_xorMethod_oneloop(int arr[],int n){
    int xor1,xor2;
    for(int i=0;i<n-1;i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
        xor1 = xor1^n;
    }

    cout<<(xor1^xor2);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int n =9;

    //missingNum(arr,n); //brute force
    //missingNUm_hashing(arr,n); //better sol
    //missingNum_sumMethod(arr,n); //optimal 1
    //missingNum_xorMethod(arr,n); //optimal 2, but having 2 for loops
    missingNum_xorMethod_oneloop(arr,n); //optimal 2, best method.

    return 0;
}