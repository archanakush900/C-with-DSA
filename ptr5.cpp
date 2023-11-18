#include<bits/stdc++.h>
using namespace std;
int main(){


/*
int arr[10]={0,4,5,6,7,7};
int *p= arr;
/*cout<<arr<<endl;
cout<<arr[0]<<endl;
cout<<&arr[0]<<endl;
cout<<*arr+1<<endl;
cout<<*(arr+1)<<endl;

cout<<*(arr+2)<<endl;

cout<<*(arr+3)<<endl;*/
//int i=3;
//cout<<i[arr]<<endl;
//cout<<*(3+arr)<<endl;

/*int temp[100]={3,7,5};
cout<<sizeof(temp)<<endl;
cout<<sizeof(*temp)<<endl;
cout<<"1st "<<sizeof(&temp)<<endl;
int *ptr=&temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;*/
/*int a[10]={3,5,6,7,};
cout<<a<<endl;
cout<<a[0]<<endl;
cout<<&a<<endl;
cout<<*a<<endl;

int *p=&a[0];
cout<<*p<<endl;
cout<<p<<endl;
cout<<p[0]<<endl;
cout<<&p<<endl;*/
int arr[10]={3,5,67};
//error
//arr=arr+1;
int *ptr=&arr[0];
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
ptr=ptr+2;
cout<<ptr<<endl;




}