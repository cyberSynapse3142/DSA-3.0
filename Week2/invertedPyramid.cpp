#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input n: " << endl;
    cin >> n;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout << " ";
        }
        for (int c = 0; c < (n - r); c++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
}
