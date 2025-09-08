#include<bits/stdc++.h>
using namespace std;
void pairdt(int a, int b){
    pair<int,int>p={a,b};
    cout<<p.first<<","<<p.second;
}
void vectordt(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(5);
    v.emplace_back(6);
    cout << "Vector elements: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    cout<<*(it)<<endl;
    it+=1;
    cout<<*(it)<<endl;
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<"";
    }cout<<endl;
    vector<int>v1(9,10);
    vector<int>v2(v1);
    for (int val : v1) {
        cout << val << " ";
    }cout<<endl;
    for (int val : v2) {
        cout << val << " ";
    }cout<<endl;
    v.erase(v.begin()+1);
    cout << "Vector elements after erase: ";
    for (int val : v) {
        cout << val << " ";
    }cout<<endl;
    v1.erase(v1.begin()+2,v1.begin()+4);
    cout << "Vector elements after erase: ";
    for (int val : v1) {
        cout << val << " ";
    }cout<<endl;
    v1.insert(v1.begin(),(300));
    v1.insert(v1.begin()+1,2,20);
    for (int val : v1) {
        cout << val << " ";
    }cout<<endl;
    v1.pop_back();//removes last element
    v1.swap(v2);//swap 2 vectors
    cout<<v1.empty()<<endl;
    cout<<v.size();


}

int main(){
    vectordt();
}