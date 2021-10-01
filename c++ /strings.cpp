#include <iostream>
using namespace std;
int strn(string ob)
{
    int i;
    // string ps;
    int c;
    c = ob.size();
    for (i = 0; i < c; i++){
        string p;
        p=ob[i];
    if (p==","){
        cout<<endl;
        continue;
    }
    else;
    {
        cout << p;
    }
    }
    return 0;
}
int main()
{

    string st;
    cin>>st;
    strn(st);

    return 0;
}