#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=1;i<size;i++){
        if(arr[i]==key){
        return 1;
    }
    }
    return 0;
}



int main(){
int arr[10]={1,67,4,9,3,5,2,45,78,89};

    int key;
    cin >>key;
    bool found= search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;}
        else
        {
            cout<<"key is not absent"<<endl;
        }
}