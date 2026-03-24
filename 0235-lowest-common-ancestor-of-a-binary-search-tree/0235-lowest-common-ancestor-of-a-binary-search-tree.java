/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        List<TreeNode> pathP = getPath(root, p);
        List<TreeNode> pathQ = getPath(root, q);
        int minLength = Math.min(pathP.size(), pathQ.size());
        TreeNode lca = null;
        for (int i = 0; i < minLength; i++) {
            if (pathP.get(i).val == pathQ.get(i).val) {
                lca = pathP.get(i);
            } else {
                break;
            }
        }
        return lca;
    }
    private List<TreeNode> getPath(TreeNode root, TreeNode node) {
        TreeNode cur = root;
        List<TreeNode> path = new ArrayList<>();
        while (cur != null) {
            path.add(cur);
            if (node.val < cur.val) {
                cur = cur.left;
            } else if (node.val > cur.val) {
                cur = cur.right;
            } else {
                return path;
            }
        }
        return path;
    }
}