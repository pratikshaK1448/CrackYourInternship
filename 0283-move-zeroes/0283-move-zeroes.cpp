class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;  // Pointer to place the next non-zero element
        
        // Move all non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        
        // Fill the remaining positions with zeroes
        for (int i = j; i < n; i++) {
            nums[i] = 0;
        }
    }
};