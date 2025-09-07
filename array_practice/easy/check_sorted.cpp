#include<bits/stdc++.h>
using namespace std;
bool check(int (&arr)[5]){
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }return true;
}
int main(){
    int arr[5]={1,8,3,4,5};
    cout<<check(arr);
}