#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a=0;
    int b=1;
    cout<<" "<<b<<endl;
    for(int i=1;i<=n;i++){
        int NextNumber=a+b;
        cout<<NextNumber<<endl;

    
    a=b;
    b=NextNumber;}
}