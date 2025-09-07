#include<bits/stdc++.h>
using namespace std;
void max(int (&arr)[5]){
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }cout<<max;
}
int main(){
    int arr[5]={-9,-5,-3,-8,-1};
    max(arr);
}