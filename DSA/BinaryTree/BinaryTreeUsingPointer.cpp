#include <bits/stdc++.h>
using namespace std;
class node {
public:
  int data;
  node *left;
  node *right;

  node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
};

void preorder(node *root) {
  if (root == NULL)
    return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(node *root) {
  if (root == NULL)
    return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void postorder(node *root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

node *binarysearch(node *root, int key) {
  if (root == NULL)
    return NULL;

  if (root->data == key)
    return root;

  if (root->data > key)
    return binarysearch(root->left, key);

  return binarysearch(root->right, key);
}

int main() {
  node *root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);

  preorder(root);
  cout << endl;
  inorder(root);
  cout << endl;
  postorder(root);
  cout << endl;

  if (binarysearch(root, 2) == NULL)
    cout << "Doesnt exist" << endl;
  else
    cout << "Exist" << endl;

  return 0;
}