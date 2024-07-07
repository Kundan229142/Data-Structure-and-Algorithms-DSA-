#include <iostream>
#include <vector>
using namespace std;

int spiralPrint(vector<vector<int>> arr)
{
    vector<vector<int>> ans;

    int m = arr.size();
    int n = arr[0].size();
    int totalElement = m * n;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m - 1;
    int endingCol = n - 1;

    int count = 0;
    while (count < totalElement)
    {
        for (int i = startingCol; i <= endingCol; i++)
        {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        for (int i = startingRow; i <= endingRow; i++)
        {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        for (int i = endingCol; i >= startingCol; i--)
        {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        for (int i = endingRow; i >= startingRow; i--)
        {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3, 4, 5},
        {14, 15, 16, 17, 6},
        {13, 20, 19, 18, 7},
        {12, 11, 10, 9, 8},
    };
    spiralPrint(arr);
    return 0;
}