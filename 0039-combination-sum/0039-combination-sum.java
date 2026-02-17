class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> path = new ArrayList<>();
        soln(candidates,target,0,path,ans);
        return ans;
}
        static void soln(int[] arr, int target,int i ,List<Integer> path,List<List<Integer>> ans){
            if(target==0){
                ans.add(new ArrayList<>(path));
                return ;
            }
            for(int j=i;j<arr.length;j++){
                if(arr[j]>target) continue;
                path.add(arr[j]);
                soln(arr,target-arr[j],j,path,ans);
                 path.remove(path.size() - 1); 
            }
        }
}