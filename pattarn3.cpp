#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "enter number:-";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count;
        }
        cout << endl;
        count++;
    }
    return 0;
}