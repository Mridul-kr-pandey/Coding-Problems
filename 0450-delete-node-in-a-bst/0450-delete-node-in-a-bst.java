/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int data;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int data) { this.data = data; }
 *     TreeNode(int data, TreeNode left, TreeNode right) {
 *         this.data = data;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode deleteNode(TreeNode root, int x) {
         if(root==null) return null;
    return check(root,x);
    }
    int minVal(TreeNode root){
        while(root.left!=null){
            root = root.left;
        }
        return root.val;
    }
     public TreeNode check(TreeNode root,int x){
        if(root==null) return root;
        
        if(root.val<x){
            root.right = check(root.right,x);
        }
        else if(root.val>x){
            root.left = check(root.left,x);
        }
        else{
            if(root.left==null&&root.right==null){
                return null;
            }
            else if(root.right==null&&root.left!=null){
                return root.left;      
            }
            else if(root.left==null&&root.right!=null){
                return root.right; 
            }
            else {
                int min = minVal(root.right);
                root.val = min;
               root.right =  deleteNode(root.right,min);
            }
        }
        return root ;
    }
}