# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isEvenOddTree(self, root):
        even = True
        q = deque([root])
        while q:
            q_size = len(q)
            prev = float('-inf') if even else float('inf') 
            for i in range(q_size):
                node = q.popleft()
                if even and(node.val % 2 == 0 or node.val <= prev): 
                    return False
                elif not even and(node.val % 2 != 0 or node.val >= prev):
                    return False
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                prev = node.val
            even = False if even else True
            
        return True