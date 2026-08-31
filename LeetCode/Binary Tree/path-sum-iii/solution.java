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
    Map<Long,Integer> map=new HashMap<>();
    public int pathSum(TreeNode root, int targetSum) {
        map.put(0L,1);
        return dfs(root,targetSum,0L);
    }
    int dfs(TreeNode root,int tar,long sum){
        if(root==null) return 0;
        sum+=root.val;
        int count=0;
        if(map.containsKey(sum-tar)){
            count+=map.get(sum-tar);
        }

        map.put(sum,map.getOrDefault(sum,0)+1);
        count+=dfs(root.left,tar,sum);
        count+=dfs(root.right,tar,sum);

        int temp=map.get(sum);
        map.put(sum,temp-1);
        sum-=root.val;
        return count;
    }
}