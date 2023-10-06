//Given an integer N.Calculate the sum of series 13 + 23 + 33 + 43 + … till N-th term.
//{ Driver Code Starts
// Initial template for C++
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  long long a =0;
    long long sumOfSeries(long long N) {
        // code here
        if(N<1){
            return 0;
        }
        return(N*N*N+sumOfSeries(N-1));
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends