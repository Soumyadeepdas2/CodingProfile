class Solution {
  public:
    void inorder(Node* root, vector<int>& v) {
        if (!root) return;

        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }

    vector<int> findCommon(Node* r1, Node* r2) {
        vector<int> a, b, ans;

        inorder(r1, a);
        inorder(r2, b);

        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};