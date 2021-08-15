#include<iostream>
using namespace std;
int add(int *a, int *b){
    cout<<*a+*b;
    return 0;
}
int sub(int *x, int *y){
    cout<<*y-*x;
    return 0;
}
int main(){
    int q,w;
    cin>>q;
    cin>>w;

    add(&q,&w);
    cout<<endl;
    if ((w-q)>0){
    sub(&q,&w);}
    else {
        cout<<q-w;
    }

    return 0;
}