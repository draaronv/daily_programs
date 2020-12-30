#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

int rangeSumBST(TreeNode* root, int low, int high)
{
int sum=0;
    if(root!=NULL)
    {
    if(root->val>=low && root->val <=high)
    {
    sum+=root->val;
    }
    sum+=rangeSumBST(root->left,low,high);
    sum+=rangeSumBST(root->right,low,high);
    }
    return sum;
return sum;
}

int main()
{
TreeNode bin6(18,NULL,NULL);
TreeNode bin5(15,NULL,&bin6);
TreeNode bin4(7,NULL,NULL);
TreeNode bin3(3,NULL,NULL);
TreeNode bin2(5,&bin3,&bin4);
TreeNode bin1(10,&bin2,&bin5);
cout<<rangeSumBST(&bin1,7,15)<<endl;

return 0;
}
