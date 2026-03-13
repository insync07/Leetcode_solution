
class Solution {
public:
    int primary(const std::vector<int>& nums) {
        int n = nums.size();
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                return i; // Return the index of the pivot
            }
        }
        return -1; // Return -1 if no pivot is found
    }

    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int k = primary(nums);
        
        if (k == -1) {
            // If no pivot is found, reverse the entire array
            std::reverse(nums.begin(), nums.end());
            return;
        }

        // Find the successor to pivot
        for (int j = n - 1; j >= k; j--) {
            if (nums[k - 1] < nums[j]) {
                std::swap(nums[k - 1], nums[j]); // Swap the pivot with the successor
                break;
            }
        }

        // Reverse the suffix starting from index k
        std::reverse(nums.begin() + k, nums.end());
    }
};
