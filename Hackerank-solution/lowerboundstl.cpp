#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, Q;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int>::iterator its;
    cin >> Q;
    for (int j = 0; j < Q; j++)
    {
        int z, k;
        cin >> k;
        its = lower_bound(v.begin(), v.end(), k);
        z = its - v.begin();
        if (v[z] == k)
        {
            cout << "Yes " << z + 1 << endl;
        }
        else
        {
            cout << "No " << z + 1 << endl;
        }
    }
    return 0;
}
