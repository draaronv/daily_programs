#include <iostream>
#include "binary_tree.h"
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};



TreeNode* getTargetCopy(TreeNode* original,TreeNode* cloned, TreeNode * target)
{
if(cloned==NULL || cloned->val==target->val)
{
    return cloned;
}

TreeNode *temp=getTargetCopy(original,cloned->left,target);
if(temp)
{
    return temp;
}
return getTargetCopy(original,cloned->right,target);
}

int main()
{
TreeNode n1(1);
TreeNode n2(2);
TreeNode n3(3);
TreeNode n4(4);
TreeNode n5(5);
TreeNode n6(6);
TreeNode n7(7);
TreeNode n8(8);
TreeNode n9(9);
TreeNode n10(10);
TreeNode cn1(1);
TreeNode cn2(2);
TreeNode cn3(3);
TreeNode cn4(4);
TreeNode cn5(5);
TreeNode cn6(6);
TreeNode cn7(7);
TreeNode cn8(8);
TreeNode cn9(9);
TreeNode cn10(10);

n1.left=&n2;
n1.right=&n3;
n2.left=&n4;
n2.right=&n5;
n3.left=&n6;
n3.right=&n7;
n4.left=&n8;
n4.right=&n9;
n5.left=&n10;

cn1.left=&cn2;
cn1.right=&cn3;
cn2.left=&cn4;
cn2.right=&cn5;
cn3.left=&cn6;
cn3.right=&cn7;
cn4.left=&cn8;
cn4.right=&cn9;
cn5.left=&cn10;

TreeNode *temp;
temp=getTargetCopy(&n1,&cn1,&n5);
cout<<"Result of the cloned: "<<temp<<endl;
cout<<"Actual Target Node: "<<&cn5<<endl;
cout<<"Original Target: "<<&n5<<endl;
return 0;
}
