#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    int ar[n];
for (i=0;i<n;i++){
    cin>>arr[i];
    //cout<<arr[i]<<":";
}
for (i=n-1;i>=0;i--){
    ar[i]=arr[i];
    cout<<ar[i]<<" ";
}
    return 0;
}