#include <iostream>
#include <vector>
using namespace std;

int findPeekElement(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (v[m] < v[m + 1])
        {
            s = m+ 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> v { 0, 10, 5, 4 };
    int ans = findPeekElement(v);
    cout << ans << endl;
    return 0;
}