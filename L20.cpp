#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char value='A'+i+j-2;

            cout<<value<<" ";
            value=value+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}