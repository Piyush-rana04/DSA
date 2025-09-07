#include<bits/stdc++.h>
using namespace std;
vector<int> missingnum(vector<int>&arr,int size){
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i){
            cout<<i;
            break;
        }
        
    }
    return arr;
}
int main(){
    vector<int>arr={0,1,2,3,4,4,7,8,9};
    int size=9;
    missingnum(arr,size);
}