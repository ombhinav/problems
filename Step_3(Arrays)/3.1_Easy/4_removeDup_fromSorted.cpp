#include<iostream>
#include<set>
using namespace std;

//brute force - using sets


int main(){
    set<int> st;
    int arr[] = {34,53,64,67,67,89,90,99,99};
    int n = 9;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    //now putting unique elements in the starting of the arrauy
    int index =0;
    for(auto it: st){
        arr[index] = it;
        index++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //returning the index
    cout<<index;
    return index;
}