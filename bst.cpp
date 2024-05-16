#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};


class BST {
private:
    Node* root;

    Node* insertRecursive(Node* currentNode, int value) {
        if (currentNode == nullptr) {
            return new Node(value);
        }

        if (value < currentNode->data) {
            currentNode->left = insertRecursive(currentNode->left, value);
        } else {
            currentNode->right = insertRecursive(currentNode->right, value);
        }

        return currentNode;
    }

    bool searchRecursive(Node* currentNode, int value) {
        if (currentNode == nullptr) {
            return false;
        }

        if (value == currentNode->data) {
            return true;
        } else if (value < currentNode->data) {
            return searchRecursive(currentNode->left, value);
        } else {
            return searchRecursive(currentNode->right, value);
        }
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    bool search(int value) {
        return searchRecursive(root, value);
    }
};

int main() {
    BST bst;

    bst.insert(8);
    bst.insert(3);
    bst.insert(10);
    bst.insert(1);
    bst.insert(6);
    bst.insert(14);
    bst.insert(4);
    bst.insert(7);
    bst.insert(9);
    bst.insert(11);
    // This will be ignored as it is a duplicate
    bst.insert(13);
    bst.insert(15);

    cout << "Searching for 6: " << (bst.search(6) ? "Found" : "Not found") << endl;
    cout << "Searching for 12: " << (bst.search(12) ? "Found" : "Not found") << endl;

    return 0;
}
