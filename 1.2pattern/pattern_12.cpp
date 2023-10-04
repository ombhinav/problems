#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =1;
    int rev_count = n;

    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
            cout<<count;
            count++ ;
        }

        for(int j= 0 ;j<(2*(n-i));j++){
            cout<<" ";
        }

        rev_count = n;

        for(int j=0;j<i;j++){
            cout<<rev_count-n+i;
            rev_count--;
        }


    
        cout<<endl;
        count = 1;
    }

}