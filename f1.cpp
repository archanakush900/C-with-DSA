#include<bits/stdc++.h>
using namespace std;
int fact(n){
    int factorial=1;
    for(i=2;i<=n;i++){
   factorial=factorial*i; 
}}

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fact(i)/(fact(i)*fact(i-j))<<" ";
        }
         cout<<endl;
    }
   return 0;
}
