class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_length = -1;
        int n = nums.size();
        int i=0,j=0;
        while(i < n)
        {
            j = 0;
            while(i < n && nums[i] == 1)
            {
                j++;
                i++;
            }
            max_length = max(max_length,j);
            while(i< n && nums[i] == 0)
            {
                i++;
            }
        }
        return max_length;
    }
};