#include <iostream>
using namespace std;
    
int main()
{
    int arr[] = {1,2,3,3,2,2,5,6,7,1};
    int size = sizeof(arr)/sizeof(int);

for (int i = 0; i < size; i++)
{
    for (int j = i+1; j < size; j++)
    {
        if (arr[i] == arr[j] )
        {
            arr[j] = -1;
        }
        
    }
    
}

    
    for (auto i : arr)
    {
        if( i > 0)
        cout << i << " ";
    }
    
    return 0;
}