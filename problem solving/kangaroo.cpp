#include <iostream>
using namespace std;

int main()
{
    int x1, x2, v1, v2, i,a,b,g;
    cin >> x1;
    cin >> v1;
    cin >> x2;
    cin >> v2;
    a=x1;
    b=x2;
    g=0;
    for (i = 0; i < 100000; i++)
    {
        a=a+v1;
        b=b+v2;
        if (a==b){
            g++;
            break;
        }
        
    }
    if (g==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}