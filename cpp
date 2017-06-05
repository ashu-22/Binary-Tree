//Definition of a binary tree node
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x)
{
val = x;
left = null;
right = null;
};
public class Solution
{
public:
string tree2str(TreeNode *t)
return dfs(t);
}
string dfs(TreeNode *t)
{
if(t == NULL)
return "";
string ans = to_String(t->val);
if(t->left != NULL)
ans += "("+dfs(t->left)+")";
}
if(t->left == NULL && t->right != NULL)
{
ans += "()";
}
if(t->right != NULL)
ans += "("+dfs(t->right)+")";
}
return ans;
}
};


