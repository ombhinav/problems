#include<iostream>
using namespace std;


void line(int a){
    for(int i=0;i<a;i++){
        cout<<"*";
    }
}
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        line(a);
        cout<<endl;
    }
    return 0;
}
