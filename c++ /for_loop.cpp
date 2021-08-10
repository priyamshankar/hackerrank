#include <iostream>
using namespace std;
int main()
{
    int i, n, m, a;
    cin >> n;
    cin >> m;

    for (i = 0; i < n + 1; i++)
    {
        if (n == 1)
        {
            cout << "one" << endl;
            break;
        }
        else if (n == 2)
        {
            cout << "two" << endl;
            break;
        }
        else if (n == 3)
        {
            cout << "three" << endl;
            break;
        }
        else if (n == 4)
        {
            cout << "four" << endl;
            break;
        }
        else if (n == 5)
        {
            cout << "five" << endl;
            break;
        }
        else if (n == 6)
        {
            cout << "six" << endl;
            break;
        }
        else if (n == 7)
        {
            cout << "seven" << endl;
            break;
        }
        else if (n == 8)

        {
            cout << "eight" << endl;
            break;
        }
        else if (n == 9)
        {
            cout << "nine" << endl;
            break;
        }
        //  else if(n >9)
        //         {
        //             cout << "Greater than 9";
        //             break;
        //         }
    }

    a = n;
    n++;
    if (m > 9)
    {
        for (i = n; i < 10; n++)
        {
            if (n == 1)
            {
                cout << "one" << endl;
            }
            else if (n == 2)
            {
                cout << "two" << endl;
            }
            else if (n == 3)
            {
                cout << "three" << endl;
            }
            else if (n == 4)
            {
                cout << "four" << endl;
            }
            else if (n == 5)
            {
                cout << "five" << endl;
            }
            else if (n == 6)
            {
                cout << "six" << endl;
            }
            else if (n == 7)
            {
                cout << "seven" << endl;
            }
            else if (n == 8)

            {
                cout << "eight" << endl;
            }
            else if (n == 9)
            {
                cout << "nine" << endl;
            }
            //  else if(n >9)
            //         {
            //             cout << "Greater than 9";
            //             break;
            //         }
            i++;
        }
    }

    //  if (a % 2 == 0)
    // {
    //     cout << "even"<<endl;
    // }
    // else
    // {
    //     cout << "odd"<<endl;
    // }

    for (i = 0; i < m + 1; i++)
    {
        if (m == 1)
        {
            cout << "one" << endl;
            break;
        }
        else if (m == 2)
        {
            cout << "two" << endl;
            break;
        }
        else if (m == 3)
        {
            cout << "three" << endl;
            break;
        }
        else if (m == 4)
        {
            cout << "four" << endl;
            break;
        }
        else if (m == 5)
        {
            cout << "five" << endl;
            break;
        }
        else if (m == 6)
        {
            cout << "six" << endl;
            break;
        }
        else if (m == 7)
        {
            cout << "seven" << endl;
            break;
        }
        else if (m == 8)

        {
            cout << "eight" << endl;
            break;
        }
        else if (m == 9)
        {
            cout << "nine" << endl;
            break;
        }
        //  else if(m >9)
        //         {
        //             cout << "Greater than 9";
        //             break;
        //         }
    }
    for (i = 10; i < m + 1; i++)
    {
        if (i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}