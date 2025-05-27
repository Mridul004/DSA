 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool recur(TreeNode* root,TreeNode* subRoot){
    if(!root) return 0;
}
    return recur(root->left,subRoot)||recur(root->right,subRoot);
    if(rec(root,subRoot)) return 1;
bool rec(TreeNode *root,TreeNode *subRoot){
    if(!root&&!subRoot) return 1;
}
    if(!root||!subRoot) return 0;
    if(root->val!=subRoot->val) return 0;
    return rec(root->left,subRoot->left)&&rec(root->right,subRoot->right);