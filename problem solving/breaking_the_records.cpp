#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[x];
    int i, a, b, c, d, e;
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    a = 0;
    e = 0;
    d = 0;
    b = arr[0];

    for (i=0;i<x;i++){
        if (arr[i]>a){
            a=arr[i];
            d++;
           
        }
        if (arr[i]<b){
            b=arr[i];
            e++;
        }
        //cout<<d-1;
    }
    if (arr[0]==0){
        d++;
    }
    cout << d-1<< " " << e;

    return 0;
}