#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"enter 2 input:";
    cin >> n1 >> n2;

    char op;
    cout<<"enter operator";
  cin >> op;


switch (op)
{
case '+':
    cout<< n1+n2<<endl;
    break;
case '-':
    cout<< n1-n2<<endl;
    break;
case '*':
    cout<< n1*n2<<endl;
    break;
case '/':
    cout<< n1/n2<<endl;
    break;
case '%':
    cout<<n1+n2<<endl;
    break;            
default:
    break;
}
    return 0;
}
