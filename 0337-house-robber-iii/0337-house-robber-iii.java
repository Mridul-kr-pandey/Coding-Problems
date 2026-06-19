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
    class Pair{
        int take;
        int skip;
        Pair(int t,int s){
            take=t;
            skip=s;
        }
    }
    public Pair robbery(TreeNode root){
        if(root==null) return new Pair(0,0);
        Pair l=robbery(root.left);
        Pair r=robbery(root.right);

        int t=root.val+l.skip+r.skip;
        int s=Math.max(l.skip,l.take)+Math.max(r.skip,r.take);

        return new Pair(t,s);
    }
    public int rob(TreeNode root) {
        Pair p=robbery(root);
        return Math.max(p.take,p.skip);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna