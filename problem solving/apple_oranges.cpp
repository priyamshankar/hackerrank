#include <iostream>
using namespace std;
int main()
{
    int a, b, s, t, i, x, y,k,l;
    cin >> s;
    cin >> t;
    cin >> a;
    cin >> b;
    int p, q;
    cin >> p;
    cin >> q;
    int m[p];
    int n[q];

    for (i = 0; i < p; i++)
    {
        cin >> m[i];
    }
    for (i = 0; i < q; i++)
    {
        cin >> n[i];
    }
    for (i = 0; i < p; i++)
    {
        if ((m + a) > (s+1) && (m + a) < (t+1))
        {
            x++;
        }
        for (i = 0; i < q; i++)
        {
            if ((n + b) > s && (n + b) < t)
            {
                y++;
            }
        }
    }
    cout << x << endl;
    cout << y;

    return 0;
}