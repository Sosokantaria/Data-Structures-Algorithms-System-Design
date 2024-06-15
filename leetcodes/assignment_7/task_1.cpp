// 414. Third Maximum Number
// Given an integer numsay nums, return the third distinct maximum number in this numsay. If the third maximum does not exist, return the maximum number.

// Example 1:

// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.
// Example 2:

// Input: nums = [1,2]
// Output: 2
// Explanation:
// The first distinct maximum is 2.
// The second distinct maximum is 1.
// The third distinct maximum does not exist, so the maximum (2) is returned instead.
// Example 3:

// Input: nums = [2,2,3,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2 (both 2's are counted together since they have the same value).
// The third distinct maximum is 1.

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int findThirdMax(vector<int> &nums)
{
    int n = nums.size();
    long long firstMax = pow(2, 32) * -1;
    long long secondMax = pow(2, 32) * -1;
    long long thirdMax = pow(2, 32) * -1;

    for (int j = 0; j < n; j++)
    {
        if (nums[j] > firstMax)
        {
            firstMax = nums[j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (nums[j] > secondMax && nums[j] != firstMax)
        {
            secondMax = nums[j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (nums[j] > thirdMax && nums[j] != firstMax && nums[j] != secondMax)
        {
            thirdMax = nums[j];
        }
    }
    if (thirdMax == pow(2, 32) * -1)
    {
        return firstMax;
    }
    else
    {
        return thirdMax;
    }
}

int main()
{
    vector<int> nums = {2, 2, 3, 1};
    cout << findThirdMax(nums) << endl;
    return 0;
}