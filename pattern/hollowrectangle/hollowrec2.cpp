#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "rows,col" << endl;
    cin >> rows >> col;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == col)
            {
                cout << "# ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}