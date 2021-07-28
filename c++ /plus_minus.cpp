#include <iostream>
using namespace std;
int main(){
    
    int n,i;
    float a,b,c;
    double t,y,u;
    cin >>n;
    a=0;
    b=0;
    c=0;
    int ar[n];
    for (i=0;i<n;i++){
        cin>>ar[i];
    }
    for (i=0;i<n;i++){
        if (ar[i]>0){
            a++;
        }
        else if (ar[i]<0){
            b++;
        }
        else{
            c++;
        }
    }
    t=(a/n);
    y=(b/n);
    u=(c/n);
    cout<<t<<endl<<y<<endl<<u;
    
    
    return 0;
}