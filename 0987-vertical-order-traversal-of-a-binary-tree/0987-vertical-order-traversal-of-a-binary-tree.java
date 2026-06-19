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
public class Pair{
        int col;
        int row;
        int val;
        Pair(int val,int row,int col){
            this.val=val;
            this.row=row;
            this.col=col;
        }
    }

class Solution {
    PriorityQueue<Pair>pq;
    public void assign(TreeNode h,int r,int c){
        if(h==null) return;
        pq.add(new Pair(h.val,r,c));
        assign(h.left,r+1,c-1);
        assign(h.right,r+1,c+1);
        return;
    }
    public List<List<Integer>> verticalTraversal(TreeNode root) {
        pq=new PriorityQueue<Pair>(
            (a,b)->{
                if(a.col!=b.col) return a.col-b.col;
                if(a.row!=b.row) return a.row-b.row;
                return a.val-b.val;
            }
        );
        assign(root,0,0);
        List<List<Integer>>ans=new ArrayList<>();
        Pair temp=pq.poll();
        if(pq.isEmpty()){
            List<Integer>t=new ArrayList<>();
            t.add(temp.val);
            ans.add(t);
                return ans;
        }
        while(!pq.isEmpty()){
            List<Integer>l=new ArrayList<>();
            int val=temp.col;
            while(temp!=null && temp.col==val){
                l.add(temp.val);
                temp=pq.poll();
            }
            ans.add(l);
            if(pq.isEmpty() && temp!=null && temp.col!=val){
                List<Integer>t=new ArrayList<>();
                t.add(temp.val);
                ans.add(t);
            }
        }
        return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna