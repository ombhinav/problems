#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=6;
    int m=7;
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,3,4,5,6,7,8};

    int i=0;
    int j=0;

    vector<int> unionArr;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        
        else{
            if(unionArr.size()==0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j<m){
        if(unionArr.size()==0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    while(i<n){
        if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
        }
        i++;
    }

    for(auto it: unionArr){
        cout<<it<<" ";
    }
    
}