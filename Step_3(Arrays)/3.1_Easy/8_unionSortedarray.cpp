#include<iostream>
#include<set>


using namespace std;
int main(){
    int n=6;
    int m=7;
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,3,4,5,6,7,8};



    set<int> st;

    for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++){
        st.insert(arr1[i]);
    }

    for(int i=0;i<(sizeof(arr2)/sizeof(arr2[0]));i++){
        st.insert(arr2[i]);
    }

    for(auto it: st){
        cout<<it<<" ";
    }
    
}