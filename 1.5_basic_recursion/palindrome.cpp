#include<string>
#include<iostream>
#include<utility>
using namespace std;


bool reverse(int i, string &s){
    if(i>=s.length()/2){
        return true;
    }
    if(s[i] != s[s.length()-i-1]){
        return false;
    }
    // swap(s[i],s[s.length()-i-1]);
    return reverse(i+1,s);


}
int main(){
    string s = "malayalam";
    cout<<reverse(0, s);
    
}