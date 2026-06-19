/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    // class Pair{
    //     int take;
    //     int skip;
    //     Pair(int t,int s){
    //         take = t;
    //         skip = s;
    //     }
    // }
    public int[] robbery(TreeNode root){
        if(root==null) return new int[]{0,0};
        int[] l = robbery(root.left);
        int[] r = robbery(root.right);

        int t = root.val + l[0] + r[0];
        int s  = Math.max(l[0],l[1]) + Math.max(r[0],r[1]);

        return new int[]{s,t};
    }
    public int rob(TreeNode root) {
        int[] p = robbery(root);
        return Math.max(p[0],p[1]);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna