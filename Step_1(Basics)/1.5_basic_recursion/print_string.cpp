//Print GFG n times without the loop.
//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int cnt=0;
    void printGfg(int N) {
        // Code here
        if(cnt==N){return;}
        cout<<"GFG"<<" ";
        cnt++;
        printGfg(N);
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends