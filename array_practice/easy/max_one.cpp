#include<bits/stdc++.h>
using namespace std;
int counter=0;
int newcounter=0;
vector<int> maxone(vector<int>&arr,int size){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            newcounter+=1;
            counter=max(counter,newcounter);
        }
        else{
            newcounter=0;
        }
    }cout<<counter;
    return arr;
}
int main(){
    vector<int>arr={0,1,0,1,1,0,1,1,1,0,1,1,1,1,0,1,1,1};
    int size=18;
    maxone(arr,size);
}