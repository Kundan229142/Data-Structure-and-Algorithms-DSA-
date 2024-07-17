#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // if (arr[mid] == target)
        // {
        //     return mid;
        // }
        // if (arr[mid] >= 0  && arr[mid - 1] == target)
        // {
        //     return mid - 1;
        // }
        // if (arr[mid] <= size - 1 && arr[mid + 1] == target)
        // {
        //     return mid + 1;
        // }

        // using loops
        for (int i = mid - 1; i <= mid + 1; i++)
        {
            if (arr[i] == target)
            {
                return i;
            }
            
        }
        if (arr[mid] > target)
        {
            end = mid - 2;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = 7;
    int target = 10;

    int ans = binarySearch(arr, size, target);
    cout << ans;
    return 0;
}