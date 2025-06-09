# Leetcode-951.-Flip-Equivalent-Binary-Trees

# 🔄 Flip Equivalent Binary Trees

## 📘 Problem Statement

Two binary trees are considered **flip equivalent** if they are the same or if they can be made the same by **swapping the left and right children of any number of nodes**.

Write a function that checks if two binary trees are flip equivalent.

---

## 🧠 Approach Explanation

### Step-by-Step:

1. 🧾 **Base Cases**:

   * If both nodes are `NULL`, they are equivalent.
   * If only one is `NULL`, not equivalent.
   * If values differ → not equivalent.

2. 🔁 **Check for Equivalence**:

   * **Without flip**: left with left, right with right.
   * **With flip**: left with right, right with left.

3. ✅ **Return true** if either of the above cases match.

---

## 🧪 Example

```
Tree 1:         1
               / \
              2   3
             / \
            4   5

Tree 2:         1
               / \
              3   2
                  / \
                 5   4

✅ Output: true (they are flip equivalent)
```

---

## ⏱️ Time Complexity

* **O(N)** where `N` is the number of nodes (since we visit each node once)

## 💾 Space Complexity

* **O(H)** where `H` is the height of the tree (due to recursion stack)

---

## 🧑‍💻 Author Info

**👨‍🎓 Ridham Garg**
🚀 B.Tech Computer Engineering, Thapar University, Patiala
📧 *[ridhamgarg000@gmail.com](ridhamgarg000@gmail.com)*

---

## 🌟 Built with ❤️ using recursion and logical tree flipping!
