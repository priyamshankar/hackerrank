#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int arr[n];
    long int large, i, s;
    for (i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    s = 0;

    large = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (large == arr[i])
        {
            s++;
        }
    }
    cout << s;
    return 0;
}