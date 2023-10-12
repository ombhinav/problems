#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int arr1[]={1,2,3,3,3,4,5,7,9,10};
    int arr2[]={0,0,0,0,0,0,1,2,3,3,4};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int i=0;
    int j=0;


//for non-optimal you can make a visited array of the size of the smaller array
//and then check through it =, whether that particular element is taken or not!

//this is the optimal solution
//two pointer approach
    vector<int> intersection;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }

        else{
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
        }
    }
    
    for(auto it: intersection){
        cout<<it<<" ";
    }

    return 0;
}