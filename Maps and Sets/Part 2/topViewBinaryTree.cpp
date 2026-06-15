#include <iostream>
#include <queue>
#include <map>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construct(int arr[], int n) {
    if (n == 0 || arr[0] == INT16_MIN) return NULL;

    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    
    int i = 1;
    int j = 2;

    while (!q.empty() && i < n) {
        Node* temp = q.front();
        q.pop();

        Node* l = NULL;
        Node* r = NULL;

        if (i < n && arr[i] != INT16_MIN) {
            l = new Node(arr[i]);
            temp->left = l;
            q.push(l);
        }

        if (j < n && arr[j] != INT16_MIN) {
            r = new Node(arr[j]);
            temp->right = r;
            q.push(r);
        }

        i += 2;
        j += 2;
    }
    return root;
}

void topView(Node* root) {
    if (root == NULL) return;

    map<int, int> topNodeMap;
    queue<pair<Node*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        Node* curr = p.first;
        int hd = p.second;

        if (topNodeMap.find(hd) == topNodeMap.end()) {
            topNodeMap[hd] = curr->val;
        }

        if (curr->left != NULL) {
            q.push({curr->left, hd - 1});
        }

        if (curr->right != NULL) {
            q.push({curr->right, hd + 1});
        }
    }

    for (auto it : topNodeMap) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, INT16_MIN, INT16_MIN, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* root = construct(arr, n);

    cout << "Top View of the constructed Binary Tree is: " << endl;
    topView(root);

    return 0;
}