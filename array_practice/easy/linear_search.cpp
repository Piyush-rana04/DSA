#include<bits/stdc++.h>
using namespace std;
int found=0;
int element=4;
vector<int> linearsearch(vector<int>&arr,int size){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==element){
            cout<<i;
            break;
        }
        
    }
    return arr;
}
int main(){
    vector<int>arr={1,2,3,4,5,4,7,8,9};
    int size=9;
    linearsearch(arr,size);
}