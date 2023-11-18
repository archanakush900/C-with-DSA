#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin  >> a;
    

    if(a>= 'A'  && a<='Z'){
        cout<<"this is a uppercase"<<endl;

    }
    else if(a>='a'&& a<='z'){
        cout<<"this is lowercase"<<endl;

    }
    else if(a>='0'&& a<='9'){
        cout<<"this is a numeric"<<endl;

    }
}