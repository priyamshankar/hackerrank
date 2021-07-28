#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i, a, b, c, j;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (i = 0; i < n; i++)
    // {
    //     if (arr[i] < 38)
    //     {
    //         for (j = i; j < (n - i);j++)
    //         {
    //             arr[j + 1] = arr[j];
    //         }
    //     }
    //     cout<<arr[i]<<endl;
    // }

    for (i = 0; i < n; i++)
    {
        if (101 > arr[i]&& arr[i]>-1 )
        {
            c = (arr[i] + 2);
            a = (arr[i] + 1);
            b = (((arr[i] / 5) * 5) + 5);
            if (arr[i] < 38)
            {
                cout << arr[i] << endl;
            }
            else if ((a - b) == 0)
            {
                cout << (arr[i] + 1)<<endl;
            }
            else if ((c - b) == 0)
            {
                cout << (arr[i] + 2) << endl;
            }

            else
            {
                cout << arr[i] << endl;
            }
        }
    }

    return 0;
}