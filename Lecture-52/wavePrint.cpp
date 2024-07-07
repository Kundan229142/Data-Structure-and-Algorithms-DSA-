#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int R = 4;
    int C = 3;

    int v[R][C] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    for (int i = 0; i < C; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < R; j++)
            {
                cout << v[j][i] << " ";
            }
        }
        else
        {
            for (int k = R-1; k >= 0; k--)
            {
                cout << v[k][i] << " ";
            }
        }
        
    }

    return 0;
}