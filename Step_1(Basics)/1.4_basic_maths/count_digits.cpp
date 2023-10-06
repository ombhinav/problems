#include<iostream>
#include<stack>
using namespace std;



int main(){
    int n;
    cin >> n;
    int count =0;
    int digit =0;
    stack <int> st ;

    for(int i=0;i<n;i++){
        digit = n%10;
        n = n/10;
        st.push(digit);
        count++;
        
    }
//    cout<<count<<endl;
    for(int i=0;i<count;i++){
        cout<<st.top()<<endl;
        st.pop();
    }


return 0;
    
}