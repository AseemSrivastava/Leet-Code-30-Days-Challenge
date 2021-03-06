class Solution {
public:
	int max_diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        get_depth(root);
        return max_diameter;
        
    }
    int get_depth(TreeNode* root) {
        if (root == NULL) return 0;
        int left_depth = get_depth(root->left);
        int right_depth = get_depth(root->right);
        max_diameter = max(max_diameter,left_depth+right_depth);
        return max(left_depth, right_depth)+1;
    }
};

static auto faster=[](){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    return 0;
}();