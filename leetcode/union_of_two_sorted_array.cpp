#include <bits/stdc++.h>
using namespace std;

void PrintArray(int n, int c[])
{
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}

int Union(int n, int a[], int b[], int c[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n || j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
        else
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
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

    int b[50];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    cout << "Sorted Array" << endl;
    PrintArray(n, a);
    PrintArray(n, b);

    int c[50];
    Union(n, a, b, c);

    PrintArray(2 * n, c);
}
