#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"size->"<<v.capacity()<<endl;
    v.push_back(45);
    cout<<"size->"<<v.capacity()<<endl;
    v.push_back(16);
    cout<<"size->"<<v.capacity()<<endl;

}