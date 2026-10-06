class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;

        preOrder(root, result);              
        return result;               
    }
    
    void preOrder(TreeNode* root, vector<int>& result){

        if(root == nullptr){
            return;
        }

        result.push_back(root->val);
        preOrder(root-> left, result);
        preOrder(root-> right, result);
    }
};
