#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
    
int main()
{
    vector <int> v{1,2,3,4,5,6,7,8,9};
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int target = 8;

int a = binary_search(arr,arr+n, target);
int b = binary_search(v.begin(), v.end(), target);
     if (b)
     {
        cout << "Element Founded !!";
     }
     else{
        cout << "Element Not Founded !!";
     }
    
    return 0;
}