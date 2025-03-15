# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        ans = []
        if not root:
            return ans

        def dfs(root):
            ans.append(root.val)
            if root.left:
                dfs(root.left)
            if root.right:
                dfs(root.right)
        return ans
