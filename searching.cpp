#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<=n;i++){
    if(arr[i]==key){
        return i;}
    }
    return -1;//time complexity o(n)
}
int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin >> arr[i];
        int key;
        cin >> key;
        cout<< linearsearch(arr,n,key)<<endl;
    }
}