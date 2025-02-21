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
    unordered_map<int,int>m;
    void contree(TreeNode* node,int x,char ch){
        if(ch=='l'){
            node->val = 2*x+1;
            m[node->val] = 1;
        }else{
            node->val = 2*x+2;
            m[node->val] = 1;
        }
        if(node->left!=NULL) contree(node->left,node->val,'l');
        if(node->right!=NULL) contree(node->right,node->val,'r');
    }
    FindElements(TreeNode* root) {
        if(root!=NULL) root->val=0;
        m[root->val] = 1;
        if(root->left!=NULL) contree(root->left,root->val,'l');
        if(root->right!=NULL) contree(root->right,root->val,'r');
    }
    
    bool find(int target) {
        cout<<endl;
        if(m[target]==1) return 1;
        return 0;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */