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
class FindElements {
public:
unordered_map<int,int> mp;
void recur(TreeNode* root){
    if(root->left){
        root->left->val=root->val*2+1;
        mp[root->left->val]=1;
        recur(root->left);
    }
    if(root->right){
        root->right->val=root->val*2+2;
        mp[root->right->val]=1;
        recur(root->right);
    }
}
    FindElements(TreeNode* root) {
        root->val=0;
        mp[0]=1;
        recur(root);
    }
    
    bool find(int target) {
        return mp[target];
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */