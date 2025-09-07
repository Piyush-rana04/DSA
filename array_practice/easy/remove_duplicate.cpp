#include<bits/stdc++.h>
using namespace std;
vector<int> removeduplicate(vector<int>&arr,int size){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            arr.erase(arr.begin()+i);
            i--;
        }
    }return arr;
}
void print(vector<int>arr){
    for(auto it:arr){
        cout<<it;
    }
}
int main(){
    vector<int>arr={1,2,2,3,4,4,5,6,6};
    int size=9;
    removeduplicate(arr,size);
    print(removeduplicate(arr,size));
}