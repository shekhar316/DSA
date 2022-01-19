class Solution {
public:
    void sumCal(TreeNode* root, int* sum){
        if(root == NULL){
            return;
        }
        if(root -> left != NULL && root -> left -> left == NULL && root -> left -> right == NULL){
            *sum += root -> left -> val; 
        }
        sumCal(root -> left, sum);
        sumCal(root -> right, sum);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        sumCal(root, &sum);
        return sum;
    }
};