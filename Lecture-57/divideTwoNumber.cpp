#include <iostream>
using namespace std;

int divide(int diviend, int divisor)
{
    int s = 0;
    int e = abs(diviend);
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * abs(divisor) == abs(diviend))
        {
            ans = mid;
            break;
        }
        else if (mid * abs(divisor) > abs(diviend))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    if ((diviend > 0 && divisor > 0) || (diviend < 0 && divisor < 0))
    {
        return ans;
    }
    else {
        return -ans;
    }
}

int main()
{
    int diviend = -3;
    int divisor = -2;

    int ans = divide(diviend, divisor);
    cout << ans << endl;
    return 0;
}