#include<bits/stdc++.h>
using namespace std;
int temp=0;
int place=2;
vector<int> rotate(vector<int>&arr,int size){
    for(int i=0;i<place;i++){
        temp=arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }return arr;
}

void print(vector<int>arr){
    for(auto it:arr){
        cout<<it;
    }
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    rotate(arr,size);
    print(arr);
}