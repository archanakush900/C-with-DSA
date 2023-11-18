#include<bits/stdc++.h>
using namespace std;
void print(int *p){
cout<<p<<endl;
cout<<*p;

}
void update(int *p){
p=p+1;
}
int main() {
    int value=5;
    int *p=&value;
    //print(p);
    update(p);
}