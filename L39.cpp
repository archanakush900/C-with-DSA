#include<bits/stdc++.h>
using namespace std;

int pivot(int arr[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0])
    {
        s=mid+1;}
    else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
       
    } 
 return s;

}

int main(){
    int arr[8]={4,6,7,8,3,2,2,9};
    cout<<"pivot value:"<<pivot(arr,1)<<endl;
}