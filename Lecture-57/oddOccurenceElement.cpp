#include <iostream>
#include <vector>
using namespace std;

// using linear search => TC O(n);
//  int oddOccurence(vector<int> arr)
//  {

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             i++;
//         }
//         else
//         {
//             return arr[i];
//         }
//     }
// }

// using binary search => TC O(log n);

int oddOccurence(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // case -> 1 Single element
        if (start == end)
        {
            return start;
        }

        // case -> 2 mid is Even / Odd
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 9, 5, 5, 4, 4};

    int ans = oddOccurence(arr);
    cout << "The element is " << arr[ans] << " is index " << ans;
    return 0;
}