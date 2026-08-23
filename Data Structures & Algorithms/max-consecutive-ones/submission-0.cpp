class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int curr=0; int maximum = 0;
        for(int i=0; i<n; i++){
            curr = nums[i] ? curr + 1 : 0;
            maximum = max(curr, maximum);
        }
        return maximum;
    }
};