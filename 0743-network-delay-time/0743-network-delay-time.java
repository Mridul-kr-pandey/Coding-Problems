class Solution {
    public int networkDelayTime(int[][] times, int n, int k) {
        Map<Integer,List<int[]>> graph = new HashMap<>();
        for(int[] edge:times){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            graph.computeIfAbsent(u,x->new ArrayList<>()).add(new int[]{v,w});
        }
        int[] dist=new int[n+1];
        Arrays.fill(dist,Integer.MAX_VALUE);
        dist[k]=0;
        PriorityQueue<int[]> pq =new PriorityQueue<>((a,b)->a[0]-b[0]);
        pq.offer(new int[]{0,k});

        while(!pq.isEmpty()){
            int[] curr=pq.poll();
            int currentDist=curr[0];
            int node=curr[1];
            if(currentDist>dist[node])
                continue;
            for(int[] neighbor :
                graph.getOrDefault(node,new ArrayList<>())){
                int nextNode=neighbor[0];
                int weight=neighbor[1];
                if(currentDist+weight<dist[nextNode]){
                    dist[nextNode]=currentDist+weight;
                    pq.offer(
                        new int[]{dist[nextNode],nextNode}
                    );
                }
            }
        }
        int maxTime = 0;
        for(int i=1;i<=n;i++){
            if(dist[i] == Integer.MAX_VALUE)
                return -1;
            maxTime = Math.max(maxTime,dist[i]);  
        }     
        return maxTime;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna