#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cin >> n;
     int array[n];
     for(int i=0;i<=n;i++)
     {
        cin >> array[i];
     }
     int Maxno=INT_MIN;
     int Minno=INT_MAX;
     for(int i=0;i<=n;i++){
        Maxno=max(Maxno,array[i]);
        Minno=min(Minno,array[i]);

     }
}