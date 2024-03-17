---
title: A flow in the code
---
## Introduction

This doc describes the {{SUBJECT}} flow in our system. We will follow its implementation across the various locations so you can understand how the different parts create the full picture.

## Following the flow

&nbsp;

<SwmSnippet path="bst.cpp" line="5">

---

```
Node class represents a node in the BST
```

```
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
```

---

</SwmSnippet>

{{Keep adding snippets from the next steps of the flow}}

## Things to note

{{Who uses this flow and when?}}

<SwmSnippet path="/bst.cpp" line="51">

---

This is just for testing

```c++
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
```

---

</SwmSnippet>

<SwmMeta version="3.0.0" repo-id="Z2l0aHViJTNBJTNBc3dpbW0tdGVzdCUzQSUzQW1kLW11YmluLWhhc2Fu" repo-name="swimm-test"><sup>Powered by [Swimm](https://app.swimm.io/)</sup></SwmMeta>
