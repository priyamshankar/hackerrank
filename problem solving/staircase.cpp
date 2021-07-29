#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i,j,k;
    for (i=n;i>0;i--){
        for (j=(i-1);j>0;j--){
            cout<<" ";
            
        }
        for (k=0;k<((n+1)-i);k++){
                cout<<"#";
            }
        
        cout<<endl;
    }
    
    return 0;
}