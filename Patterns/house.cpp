#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    cout << "A SIMPLE HOUSE DESIGN" << endl;
    // Sleep(10000);
    int i, j, n = 12;
    int x = (n * 2) + 8;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n * 3; j++)
        {
            cout << " ";
            if (i == 0 && j <= (n * 2) + 8 && j > n / 3 || i + j == n / 3 || x == j && i < n / 2 && j <= (n * 3) || i >= n / 3 && j == 0 || i == n / 3 || i == n && j > 0 && j < n * 3 || j == (n * 3) && i >= n / 3 || j == n / 2 && i > (n / 3) && i < 10 || j == (n / 2) - 4 && i > (n / 3) && i > n / 3 && i < 10 || j == (n / 2) - 2 && i > (n / 3) && i > (n / 3) && i < 10 || i == 9 && j >= (n / 2) - 4 && j <= 6 || i == 5 && j >= (n / 4) && j < n / 2 || i == 7 && j >= 2 && j <= n / 2 || j == 12 && i > n / 3 || j == 15 && i > n / 3 || i == (n / 3) + 1 && j >= 12 && j <= 15)
            {
                Sleep(100);
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        x++;
    }
    return 0;
}