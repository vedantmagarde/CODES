# 📝 Postfix to Prefix Conversion (GeeksforGeeks)

🔗 [Problem Link](https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Stack

### 🚀 Performance
- **Runtime:** Successfully Evaluated
- **Memory:** N/A

---

### 📜 Problem Description

You are given a string  **s**  that represents the  **postfix** form of a valid mathematical expression. Convert it to its  **prefix** form.

**Examples :**

```
Input: s = "ab+"
Output: "+ab"
Explanation: In prefix form, operator comes before operands.
Postfix to Infix: ab+ becomes a + b 
Infix to Prefix: a + b becomes +ab 
```

```
Input: s = "ab+c*"
Output: "*+abc"
Explanation:
Postfix to Infix: ab+ becomes (a + b), then with c gives (a + b)*c
Infix to Prefix: (a + b) becomes +ab, then with c gives *+abc
```

```
Input: s = "ABC/-AK/L-*"
Output: "*-A/BC-/AKL"
Explanation: 
Postfix to infix: ABC/-AK/L-* becomes (A - (B / C)) * ((A / K) - L)
Convert left part to Prefix: (A - (B / C)) becomes -A/BC
Convert right part to Prefix: ((A / K) - L) becomes -/AKL
Combine both with * to get *-A/BC-/AKL
```

**Constraints:**

3 ≤ s.size() ≤ 1.6*104