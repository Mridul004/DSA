 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
bool recur(TreeNode* root,long mn,long mx){
    if(!root) return 1;
}
    if(!(root->val>mn&&root->val<mx)) return 0;
    return recur(root->left,mn,root->val)&&recur(root->right,root->val,mx);
        return recur(root,LLONG_MIN,LLONG_MAX);
    }
};