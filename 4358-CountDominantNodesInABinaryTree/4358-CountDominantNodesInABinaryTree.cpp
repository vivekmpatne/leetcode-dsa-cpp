// Last updated: 7/19/2026, 9:37:22 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int dominant_count = 0;
    int dfs(TreeNode* node){
        if( !node ) return 0;
        int left_max = dfs(node->left);
        int right_max = dfs(node->right);
        int curr_max = max({node->val, left_max, right_max });

        if(node -> val == curr_max){
            dominant_count++;
        }
        return curr_max;
    }
public:
    int countDominantNodes(TreeNode* root) {
        TreeNode* value  = root;
        dominant_count = 0;
        dfs(value);
        return dominant_count;
    }
};