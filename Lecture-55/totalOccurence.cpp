#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 3, 3, 3, 3, 4, 4, 6, 7, 9};
    int target = 4;

    auto lower = lower_bound(v.begin(), v.end(), target);
    int firstOccurence =  lower - v.begin() ;

    auto upper = upper_bound(v.begin(), v.end(), target);
    int lastOccurence (upper - v.begin()) ;

    int totalOccurence = lastOccurence - firstOccurence ;

    cout << totalOccurence << endl;

    return 0;
}