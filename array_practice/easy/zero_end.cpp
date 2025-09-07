#include<bits/stdc++.h>
using namespace std;
vector<int> zero(vector<int>&arr,int size){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            arr.erase(arr.begin()+i);
            arr.push_back(0);
        }
        
    }
    return arr;
}

void print(vector<int>arr){
    for(auto it:arr){
        cout<<it;
    }
}
int main(){
    vector<int>arr={0,1,2,3,0,4,5,0,6};
    int size=9;
    zero(arr,size);
    print(zero(arr,size));
}