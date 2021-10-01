#include<iostream>
using namespace std;
int main(){
string a,b;

cin>>a;
cin>>b;
cout<<a.size()<<" ";
cout<<b.size()<<endl;
cout<<a+b<<endl;
char* c11;
c11=&a[0];                                                                                          
char* c12;
c12=&b[0];
char ct;
ct = *c11;
// cout<<*ct<<endl;
*c11=*c12;
*c12=ct;
cout<<a<<" "<<b;
    return 0;
}