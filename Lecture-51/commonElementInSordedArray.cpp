#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 3, 5, 8, 11};
    int size1 = sizeof(arr1) / sizeof(int);

    int arr2[] = {4, 5, 8, 12, 13};
    int size2 = sizeof(arr2) / sizeof(int);

    int arr3[] = {3, 4, 5, 8, 9};
    int size3 = sizeof(arr3) / sizeof(int);

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2 && k < size3)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    return 0;
}