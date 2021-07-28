

#include <iostream>
using namespace std;
int main(){
long int arr[5];
long int small,large,i,s;
s=0;
for (i=0;i<5;i++){
    
    cin>>arr[i];
    
}
for (i=0;i<5;i++){
    
   s=arr[i]+s;
   
    
}

small=arr[0];
large=arr[0];

for (i=1;i<5;i++){
    if (arr[i]>large){
        large=arr[i];
        
    }
    
   
}
for (i=1;i<5;i++){
    if (arr[i]<small){
        small=arr[i];
       
    }
   
}
cout<<(s-large)<<" "<<(s-small);

    return 0;
}