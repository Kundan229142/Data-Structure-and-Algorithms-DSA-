#include <iostream>
#include <vector>
using namespace std;

int firstOccurance(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v { 1, 2, 2, 2, 3, 4, 4, 4, 4, 5, 6 };
    int target = 8;
    int result = firstOccurance(v, target);
    cout << result << endl;
    return 0;
}