#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n +1; i ++)
    {
        for(int k = n; k > i; k --)
        {
            cout << "  ";
        }
        for(int j = 1; j < i * 2; j ++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = n-1; i > 0; i --)
    {
        for(int k = n; k > i; k --)
        {
            cout << "  ";
        }
        for(int j = 1; j < i * 2; j ++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
