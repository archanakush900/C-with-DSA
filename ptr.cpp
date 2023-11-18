#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=100;
    int *p=&num;

    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<"size of integer"<<" "<<sizeof(num)<<endl;
    cout<<"size of pointer"<<" "<<sizeof(p)<<endl;
    char ch='A';
    
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<"size of charcecter"<<" "<< sizeof(ch)<<endl;
    return 0;
}