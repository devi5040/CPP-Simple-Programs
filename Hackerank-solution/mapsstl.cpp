#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> mp;
    int n, Y, l;
    cin >> n;
    string X;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        if (l == 1)
        {
            cin >> X >> Y;
            if (mp.find(X) != mp.end())
            {
                Y += mp[X];
                mp.erase(X);
                mp.insert(make_pair(X, Y));
            }
            else
            {
                mp.insert(make_pair(X, Y));
            }
        }
        else if (l == 2)
        {
            cin >> X;
            mp.erase(X);
        }
        else if (l == 3)
        {
            cin >> X;
            if (mp.find(X) != mp.end())
            {
                cout << mp[X] << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}
