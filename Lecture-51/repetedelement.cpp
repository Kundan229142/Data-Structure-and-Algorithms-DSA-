#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,5};
    int size = sizeof(arr) / sizeof(int) - 1;
    int sum = 0;
    
    for (int i = 0; i <= size; i++)
    {
        sum += arr[i];
    }
    int repetedElement = (size * (size + 1)) / 2;

    cout << sum - repetedElement<< endl;

    return 0;
}