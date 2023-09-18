#include <iostream>
using namespace std;
short int flag;
struct NodePtr {
    int key;
    struct NodePtr *left;
    struct NodePtr *right;
    int left_child;
    int right_child;
    int height;
} ;

int max (int a, int b) {
    if (a>b)
        return a;
    return b;
}
class AVL {
    NodePtr *root = NULL;
    int height(NodePtr *root) {
        if (root == NULL)
            return 0;
        return root->height;
    }

    NodePtr *new_node(int key, int left_child, int right_child) {
        NodePtr *tmp_node = new NodePtr();
        tmp_node->key = key;
        tmp_node->left = NULL;
        tmp_node->right = NULL;
        tmp_node->height = 1;
        tmp_node->left_child = left_child;
        tmp_node->right_child = right_child;
        return tmp_node;
    }

    NodePtr *right_rotate(NodePtr *y) {
        NodePtr *x = y->left;
        NodePtr *T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = max(height(y->left), height(y->right)) + 1;
        x->height = max(height(x->left), height(x->right)) + 1;

        if (T2 != NULL) y->left_child = T2->left_child + T2->right_child + 1; else y->left_child = 0;
        x->right_child = y->left_child + y->right_child + 1;

        return x;
    }

    NodePtr *left_rotate(NodePtr *x) {
        NodePtr *y = x->right;
        NodePtr *T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;

        if (T2 != NULL) x->right_child = T2->left_child + T2->right_child + 1; else x->right_child = 0;
        y->left_child = x->left_child + x->right_child + 1;

        return y;
    }

    int get_balance_factor(NodePtr *root) {
        if (root == NULL) return 0;
        return (height(root->left) - height(root->right));
    }

    NodePtr *insert_helper(NodePtr *root, int key) {
        // std bst insertion
        if (root == NULL) return new_node(key, 0, 0);
        if(key < root->key) {
            root->left = insert_helper(root->left, key);
            root->left_child++;
        } else if (key > root->key) {
            root->right = insert_helper(root->right, key);
            root->right_child++;
        } else return root;

        root->height = max(height(root->left), height(root->right)) + 1;

        int balance = get_balance_factor(root);

        if ((balance > 1) && (key < root->left->key)) return right_rotate(root);

        if ((balance < -1) && (key > root->right->key)) return left_rotate(root);

        if ((balance > 1) && (key > root->left->key)) {
            root->left = left_rotate(root->left);
            return right_rotate(root);
        }

        if ((balance < -1) && (key < root->right->key)) {
            root->right = right_rotate(root->right);
            return left_rotate(root);
        }

        return root;
    }

    int find_by_key_helper(NodePtr *root, int key) {
        if (root != NULL) {

            if (key > root->key) return root->left_child + 1 + find_by_key_helper(root->right, key);
            else if (key < root->key) return find_by_key_helper(root->left, key);
            else return root->left_child;
        }
        flag = 1;
        return -1;
    }
    // Node with minimum value
    NodePtr *nodeWithMimumValue(NodePtr *node) {
        NodePtr *current = node;
        while (current->left != NULL)
            current = current->left;
        return current;
    }

    NodePtr *deleteNode(NodePtr *root, int key) {

        if (root == NULL)
            return root;
        if (key < root->key) {
            root->left = deleteNode(root->left, key);
            root->left_child--;
        }
        else if (key > root->key) {
            root->right = deleteNode(root->right, key);
            root->right_child--;
        }
        else {
            if ((root->left == NULL) || (root->right == NULL)) {
                NodePtr *temp = root->left ? root->left : root->right;
                if (temp == NULL) {
                    temp = root;
                    root = NULL;
                }
                else
                {
                    *root = *temp;
                }
                delete temp ;
            } else {
                NodePtr *temp = nodeWithMimumValue(root->right);
                root->key = temp->key;
                root->right = deleteNode(root->right,temp->key);
            }
        }

        if (root == NULL)
        {
            return root;
        }
        root->height = 1 + max(height(root->left),
                               height(root->right));
        int balanceFactor = get_balance_factor(root);
        if (balanceFactor > 1) {
            if (get_balance_factor(root->left) >= 0) {
                return right_rotate(root);
            } else {
                root->left = left_rotate(root->left);
                return right_rotate(root);
            }
        }
        if (balanceFactor < -1) {
            if (get_balance_factor(root->right) <= 0) {
                return left_rotate(root);
            } else {
                root->right = right_rotate(root->right);
                return left_rotate(root);
            }
        }
        return root;
    }
    void in_order(NodePtr *root) {
        if (root != NULL) {
            cout << root->key << root->left_child << root->right_child << endl;
            in_order(root->left);
            in_order(root->right);
        }
    }

public:
    void insert(int key){
        this ->root=this->insert_helper(this->root, key);
    }
    int find_by_key(int num){
        return find_by_key_helper(this->root, num);
    }
    void deleted(int key)
    {
        this->root =this->deleteNode(this->root, key);
    }
    void print ()
    {
        in_order(this->root);
    }
};

int main () {
    AVL tree;
    for (;true;) {
        short int op;
        int num;
        cin >> op >> num;
        if (op == 1) {
            tree.insert(num);
        }
        else if (op == 2) {
            tree.deleted(num);
        }
        else if (op==3){
            flag = 0;
            int rank = tree.find_by_key(num) + 1;
            if (flag) {
                cout << "-1"<< endl;
            }
            else {
                cout << rank << endl;
            }
        }
        else if (op==4)
        {
            flag = 0;
            int rank = tree.find_by_key(num);
            if (flag) {
                cout << "-1"<< endl;
            }
            else {
                cout << rank << endl;
            }
        }
        else if (op==-1)
        {
            break;
        }
    }
    return 0;
}