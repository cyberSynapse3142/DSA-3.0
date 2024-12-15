#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input n: " << endl;
    cin >> n;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < (n - r - 1); c++)
        {
            //Space
            cout << " ";
        }
        for (int c = 0; c < (r + 1); c++)
        {
            //Stars
            cout << "* ";
        }
        cout << endl;
    }
}
