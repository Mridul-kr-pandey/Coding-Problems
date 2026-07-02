class Solution {
    public int maxResult(int[] nums, int k) {
        Deque<Integer> dq = new ArrayDeque<>();
        dq.offerLast(0);
        for (int i = 1; i < nums.length; i++) {
            while (!dq.isEmpty() && dq.peekFirst() < i - k) {
                dq.pollFirst();
            }
            nums[i] += nums[dq.peekFirst()];
            while (!dq.isEmpty() && nums[dq.peekLast()] <= nums[i]) {
                dq.pollLast();
            }
            dq.offerLast(i);
        }
        return nums[nums.length - 1];
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna