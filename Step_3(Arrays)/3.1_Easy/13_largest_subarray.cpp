#include<iostream>
#include<map>
using namespace std;

void brute(int arr[], int n, int k){
    int len =0;
        for(int i=0;i<n;i++){
            long long s =0;
            for(int j=i;j<n;j++){
                s += arr[j];

                if(s == k){
                   
                    len = max(len,j-i+1);
                }
            }
        }
    cout<<len;
}

void better(int arr[],int n,int k){
    map<long long, int>preSumMap;
    int maxlen =0;
    long long sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        int rem = sum -k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxlen = max(maxlen,len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){

        preSumMap[sum] = i;
        }
    }
    cout<<maxlen;
}

int main(){

        int arr[]={2,3,5,1,9};
        int n=5;
        int k = 10;
        brute(arr,n,k);
        better(arr,n,k);        
        
}

//wrong answers