#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void arrSwap(int arr[],int size){
for(int i=0;i<=size;i=i+2)
{
    if(i+1<size){
        swap(arr[i],arr[i+1]);

    }
}
}




int main(){

   int arr[8]={5,6,7,8,9,0,6,9};
    arrSwap(arr,8);
    printArray(arr,8);
    
}