#include <iostream>
using namespace std;

// using normal methods
//  int squerRoot(int n)
//  {
//      int ans;
//      for (int i = 0; i < n; i++)
//      {
//          if (i * i <= n)
//          {
//              ans = i;
//          }

//     }
//     return ans;
// }

// using binary search
double squerRoot(int n,int m)
{
    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (m * m == n)
        {
            return m;
        }
        else if (m * m > n)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
    }

    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < m; i++)
    {
        for (double j = finalAns; j * j <= n; j += step)
        {
            finalAns = j;
        }
        step /= 10;
    }

    return finalAns ;
}

int main()
{
    int n = 7712;
    int m = 3;

    double ans = squerRoot(n , m);
    cout << ans << endl;

    return 0;
}