class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        n=len(intervals)
        intervals.sort()  
        ans=[]
        for i in range(n):
            start=intervals[i][0]
            end=intervals[i][1]
            if len(ans)!=0 and end<=ans[-1][1]:
                continue
            for j in range(i+1,n):
                if intervals[j][0]<=end:
                    end=max(end,intervals[j][1])
                else:
                    break
            ans.append([start,end]) 
        return ans