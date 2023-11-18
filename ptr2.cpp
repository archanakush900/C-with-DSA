#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int i=26;
    int *p=&i;
    cout<<*p<<endl;
    cout<<p<<endl;
    
   int *q=0;
    q=&i;
    
    cout<<*q<<endl;
    cout<<q<<endl;*/

   /* int num=5;
    int a=num;
    a++;
    int *p=&num;
    cout<<num<<endl;
    (*p)++;
    cout<<num<<endl;
    int *q=p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q;*/
    int i=5;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<t<<endl;
    
    t=t+1;
    cout<<t<<endl;
    
}