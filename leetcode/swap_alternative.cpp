#include <bits/stdc++.h>
using namespace std;

int SwapAlternate(int n, int a[])
{
    int i = 0;
    while (i + 1 < n)
    {
        swap(a[i], a[i + 1]);
        i += 2;
    }
}

int main()
{
    int n;
    cout << "Size of array" << endl;
    cin >> n;
    int a[50];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Entered Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    SwapAlternate(n, a);

    cout << "Swaped Alternate Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
