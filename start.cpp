#include <iostream>
using namespace std;

int main()
{
    // downward right angle pattern

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = i;

        while (j<=n)
        {
            cout<<j;
            j++;
        }
        cout << endl;
        i++;
    }
}