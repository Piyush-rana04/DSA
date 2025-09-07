#include<bits/stdc++.h>
using namespace std;
void smax(int (&arr)[5]){
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int j=0;j<5;j++){
        if(arr[j]!=max && arr[j]>smax){
            smax=arr[j];
        }
    }
        
    cout<<smax;
}
int main(){
    int arr[5]={-9,-5,-3,-8,-1};
    smax(arr);
}