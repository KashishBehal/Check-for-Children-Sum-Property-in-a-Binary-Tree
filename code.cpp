class Solution{
    public:
    bool solve(Node * root){
        int sum=0;
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        if(root->left !=NULL){
            sum=sum+root->left->data;
        }
        if(root->right!=NULL){
            sum=sum+root->right->data;
        }
        if(sum==root->data  && solve(root->left) && solve(root->right)){
            return 1;
        }
        return 0;
    }
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
    return solve(root);
    }
};
