#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    //pre-compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1; //increasing value fo that specific hash value in the hash array.
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl; //printing the frequency from the hash table
    }
}