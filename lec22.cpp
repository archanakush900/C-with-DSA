#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
       if(a[s]!=a[e]){
        return 0;
       }
       else{
        s++;
        e--;
       }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[])
{
   int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){

char name[20];
cout<< "Enter your name"<<endl;
cin >> name;
cout<<"My name is ";
cout<<name<<endl;
//name[2]  = '\0';
int len=getlength(name);
cout<<"length"<<" "<<len<<endl;
cout << checkPalindrome(name ,len)<<endl;

reverse(name , len);
cout<< "Enter your name"<<endl;
cout<<name<<endl;




    return 0;

}