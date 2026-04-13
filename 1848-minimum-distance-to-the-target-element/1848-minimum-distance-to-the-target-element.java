public class MinimumDistanceToTarget {

    public static int getMinDistance(int[] nums, int target, int start) {
        int minDist = Integer.MAX_VALUE;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target) {
                int distance = Math.abs(i - start);
                minDist = Math.min(minDist, distance);
            }
        }

        return minDist;
    }

    public static void main(String[] args) {
        // Example 1
        int[] nums1 = {1, 2, 3, 4, 5};
        int target1 = 5;
        int start1 = 3;
        System.out.println(getMinDistance(nums1, target1, start1)); // Output: 1

        // Example 2
        int[] nums2 = {1};
        int target2 = 1;
        int start2 = 0;
        System.out.println(getMinDistance(nums2, target2, start2)); // Output: 0

        // Example 3
        int[] nums3 = {1,1,1,1,1,1,1,1,1,1};
        int target3 = 1;
        int start3 = 0;
        System.out.println(getMinDistance(nums3, target3, start3)); // Output: 0
    }
}
