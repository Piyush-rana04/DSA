#include<bits/stdc++.h>
using namespace std;
vector<int> moveleft(vector<int>&arr,int size){
    int temp=0;
    temp=arr[0];
    for(int i=1;i<arr.size()-1;i++){
        arr[i-1]=arr[i];
        
    }arr[size-1]=temp;
    return arr;
}

void print(vector<int>arr){
    for(auto it:arr){
        cout<<it;
    }
}
int main(){
    vector<int>arr={1,2,2,3,4,4,5,6,6};
    int size=9;
    moveleft(arr,size);
    print(moveleft(arr,size));
}