class Solution {

    int ans = 0;

    public int countSpecialNumbers(int n) {

        boolean[] used = new boolean[10];

        for (int i = 1; i <= 9; i++) {
            if (i > n) break;

            used[i] = true;
            ans++;

            dfs(i, n, used);

            used[i] = false;
        }

        return ans;
    }

    private void dfs(long num, int n, boolean[] used) {

        for (int digit = 0; digit <= 9; digit++) {

            if (used[digit]) continue;

            long next = num * 10 + digit;

            if (next > n) continue;

            used[digit] = true;
            ans++;

            dfs(next, n, used);

            used[digit] = false;
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna