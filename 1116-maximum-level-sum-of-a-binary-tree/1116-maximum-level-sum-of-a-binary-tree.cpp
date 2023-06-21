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
public:
    int maxLevelSum(TreeNode* root)
    {
        std :: queue<TreeNode*> a;
        int l = INT_MIN;
        int i = 0;
        int j = 0;
        a.push(root);
        while(!a.empty())
        {
            j++;
            int t = 0;
            int q = a.size();
            while(q > 0)
            {
                TreeNode* Node = a.front();
                a.pop();
                t += Node->val;
                if(Node->left != NULL)
                {
                    a.push(Node->left);
                }
                if(Node->right != NULL)
                {
                    a.push(Node->right);
                }
                --q;
            }
            if(l < t)
            {
                l = t;
                i = j;
            }
        }
        return i;
    }
};