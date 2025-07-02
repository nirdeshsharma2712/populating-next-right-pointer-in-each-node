# 📊 LeetCode Problem: populating next right pointer in each node

## 🧩 Problem Statement

You are given a **perfect binary** tree where all leaves are on the same level, and every parent has two children. The binary tree has the **following definition:**
> - struct Node {
> - int val;
> - Node *left;
> - Node *right;
> - Node *next;
> - }

Populate each **next pointer** to point to its **next right node**. If there is no next right node, the next pointer should be set to `NULL`.

Initially, all next pointers are set to `NULL`.

## 🧠 Approach

We perform a level order tarversal:
- Recursively add each element (in **level order traversal**) to vector.
- Then **tarvers** the vector - 
- **vec1[i][j]->next = vec1[i][j+1];**


## ✅ Example Walkthrough

### Example 1

<img src = "https://assets.leetcode.com/uploads/2019/02/14/116_sample.png">

##### Input: root = [1,2,3,4,5,6,7]
##### Output: [1,#,2,3,#,4,5,6,7,#]




## 🛠️ Constraints

- The number of nodes in the tree is in the  `range [0 , 2^12].`  
- `-1000 <= Node.val <= 1000`
