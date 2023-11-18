#include<bits/stdc++.h>
using namespace std;
int main(){
    int basic[4]={2,4,5,5};
    array<int, 6> a={3,4,5,6,7,8};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;}
        cout<<"element at 2"<<a.at(2)<<endl;
        cout<<"array is empty or not"<<a.empty()<<endl;

cout<<"first of value in array"<<a.front()<<endl;

cout<<"end of value in aaray "<<a.back()<<endl;

    
    
}