#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end =n-1;

while (start<=end)
{
    /* code */
    swap(arr[start],arr[end]);
    start=start+2;
    end--;
}


}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[6]={3,5,6,7,8,9,};
    int drr[5]={8,9,6,5,4};

    reverse(arr,6);
    reverse(drr,5);
    cout<<endl;


    printArray(arr,6);
    printArray(drr,5);

 
}