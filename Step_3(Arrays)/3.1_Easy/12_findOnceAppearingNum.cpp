//all the numbers are appering twice except for one num
//find that num
#include<iostream>
using namespace std;

int main(){
    int n=11;
    int arr[]={1,1,2,2,3,4,4,5,5,6,6};

    int xor1=0;
    for(int i=0;i<n;i++){
        xor1 = xor1^arr[i];
    }

    cout<<xor1;
}