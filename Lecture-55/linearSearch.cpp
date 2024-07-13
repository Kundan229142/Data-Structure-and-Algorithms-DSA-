#include <iostream>
using namespace std;

int findElement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target = 8;

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