// week15-5.cpp 學習計畫(隱藏) Binary Tree 第二題
// 與上周的第一題不同,因為有兩個小腳腳
class Solution {
public:
    int minDepth(TreeNode* root){
        if(root == nullptr)return INT_MAX:
        if(root->left==nullptr && root->right==nullptr)return 1;
        int ans1 = helper(root -> left);
        int ans2 = helper(root -> right);
        return min(ans1, ans2)+1;
    }
    int minDepth(TreeNode* root){
        int ans = helper(root);
        if(ans==INT_MAX) return 0;
        return ans;
    }
};