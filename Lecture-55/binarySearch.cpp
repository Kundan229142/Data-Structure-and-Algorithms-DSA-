#include <iostream>
using namespace std;

int findElement(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target = 7;

    int ans = findElement(arr, size, target);

    if (ans == -1)
    {
        cout << "Element Not Found !!";
    }
    else
    {
        cout << "Element Found on index " << ans << endl;
    }
    return 0;
}