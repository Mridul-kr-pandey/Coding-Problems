class Solution(object):
    def minimumTotalDistance(self, robot, factory):
        """
        :type robot: List[int]
        :type factory: List[List[int]]
        :rtype: int
        """
        robot.sort()
        factory.sort()
        
        n=len(robot)
        m=len(factory)
        dp=[float("inf")]*(n+1)
        dp[0]=0  
        
        for p,l in factory:
            for k in range(n,0,-1):
                for i in range(1,min(k,l)+1):
                    dp[k]=min(dp[k],dp[k-i]+sum(abs(robot[k-i-1]-p) for i in range(i)))
                    
        return dp[n]