//not working as mentioned in the question but got the answer
#include <iostream>
using namespace std;
void funct(int n)
{
    int a, i, l;
    
    for (i = 0; i < n; i++)
    {
        //if (arr[i] < a)
        {
            l = n;//arr[i];
        }
        cout<<l;
    }
    return funct(n);
}
int main(){

    int i,arr[4],l;
    for (i=0;i<4;i++){
     cin>>arr[i];   
    }
    l=arr[0];
    for (i=0;i<4;i++){
        if (l<arr[i]){
            l=arr[i];
        }
    }
cout<<l;
    return 0;
}