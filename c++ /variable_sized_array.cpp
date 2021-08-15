#include<iostream>
using namespace std;
int arrays(int a,int x){
    
    int arr[x];
    int i;
    for (i=0;i<x;i++){
        cin>>arr[i];
        cout<<endl<<arr[i];
    }
return arr[x];
}


int main(){

    int a,c;
    cin>>a;
    cout <<"enter the no. of arrays";
    cin >>c;
    cout<<endl;
    arrays(a,c);
    return 0;
}