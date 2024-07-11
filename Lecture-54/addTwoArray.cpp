#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sumOfTwoArray(int arr[], int brr[], int arrSize, int brrSize)
{
    vector<int> ans;
    int carry = 0;
    while (arrSize >= 0 && brrSize >= 0)
    {
        int sum = arr[arrSize] + brr[brrSize] + carry;
        int digit = sum % 10;
        int carry = sum / 10;
        ans.push_back(digit);
        arrSize--;
        brrSize--;
    }
    while (arrSize >= 0)
    {
        int sum = arr[arrSize] + 0 + carry;
        int digit = sum % 10;
        int carry = sum / 10;
        ans.push_back(digit);
        arrSize--;
    }
    while ( brrSize >= 0)
    {
        int sum = 0 + brr[brrSize] + carry;
        int digit = sum % 10;
        int carry = sum / 10;
        ans.push_back(digit);
        brrSize--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {3, 4, 1, 2};
    int arrSize = sizeof(arr) / sizeof(int)-1;
    int brrSize = sizeof(brr) / sizeof(int)-1;

    vector<int> ans = sumOfTwoArray(arr, brr, arrSize, brrSize);
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}