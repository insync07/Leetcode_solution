class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        // Create a temporary merged vector to avoid modifying nums1 directly if not intended
        // or if nums1's capacity is insufficient.
        std::vector<int> mergedNums(m + n);

        int i = m - 1;
        int j = n - 1;
        int idx = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] >= nums2[j]) {
                mergedNums[idx] = nums1[i];
                i--;
            } else {
                mergedNums[idx] = nums2[j];
                j--;
            }
            idx--;
        }

        while (i >= 0) {
            mergedNums[idx] = nums1[i];
            i--;
            idx--;
        }

        while (j >= 0) {
            mergedNums[idx] = nums2[j];
            j--;
            idx--;
        }

        int y = mergedNums.size();
        int mid = y / 2;

        if (y % 2 != 0) {
            return mergedNums[mid];
        } else {
            return (mergedNums[mid - 1] + mergedNums[mid]) / 2.0;
        }
    }
};
