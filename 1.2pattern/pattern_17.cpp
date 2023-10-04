#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        int breakpoint = (2*i+1) / 2;
        char ch = 'A';
        for(int j=0;j<2*i+1;j++){
            if(j<breakpoint){
                cout<<ch;
                ch++;
            }
            else{
                cout<<ch;
                ch--;
            }
        }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;





    }
    return 0;
}