#include <iostream>
using namespace std;

class stuname
{
    int rn;
    int no;
    string fna;
    string sna;

public:
    void entert()
    {
        cin >> rn;
        cin >> fna;
        cin >> sna;
        cin >> no;
    }
    void case1()
    {
        cout << rn << endl;
        cout << sna << ", " << fna << endl;
        cout << no << endl;
    }
    void case2()
    {
        cout <<endl<< rn << "," << fna << "," << sna << "," << no;
    }
};
int main()
{
    stuname call;
    call.entert();
    call.case1();
    call.case2();
    return 0;
}
