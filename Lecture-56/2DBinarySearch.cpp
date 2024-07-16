#include <iostream>
using namespace std;

bool BinarySearch(int arr[][3], int row, int column, int target)
{
    int start = 0;
    int end = row * column - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        int m = mid / column;
        int n = mid % column;

        if (arr[m][n] == target)
        {
            return true;
        }
        else if (arr[m][n] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}
int main()
{
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
        
        };

    int row = 4;
    int column = 3;
    int target = 8;

    bool ans = BinarySearch(arr, row, column, target);
    if (ans)
    {
        cout << "Element Found !!";
    }
    else
    {
        cout << "Element Not Found !!";
    }

    return 0;
}