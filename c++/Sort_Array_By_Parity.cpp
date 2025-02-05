/*
LeetCode
905:Sort Array By Parity

Description:
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
Return any array that satisfies this condition.
Example 1:
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:
Input: nums = [0]
Output: [0]

Constraints:
1 <= nums.length <= 5000
0 <= nums[i] <= 5000

*/

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Solution Code:

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums;
        }
        int i=0;
        int n=nums.size();
        int j=n-1;
        while(i<j)
        {
            while(nums[i]%2==0 && i<j)
            {
                if(nums[i]%2==1)
                {
                    break;
                }
                i++;
            }
            while(nums[j]%2==1 && i<j)
            {
                if(nums[i]%2==0)
                {
                    break;
                }
                j--;
            }
            if(i<j)
            {
                swap(nums[i],nums[j]);
            }
            else{
                return nums;
            }
        }
        return nums;
    }
};
/*
Time Complexity:0(N^2)
Space Complexity:0(1)
*/
