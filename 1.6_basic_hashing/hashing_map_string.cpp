#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    //pre-compute
    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<mpp[c]<<endl;
    }


    return 0;
}