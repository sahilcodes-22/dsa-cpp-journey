# Time Complexity

The rate at which the time taken increases with respect to the input size.

Denoted using Big-O notation → `O(Time Taken)`.

**Example:**
```cpp
for (int i = 1; i <= 5; i++) {
    cout << "Sahil";
}
```

Rules:
1. TC is computed in terms of the worst-case scenario.
2. Avoid constants.
3. Ignore lower-order terms.

So, the `for` loop runs 5 times, with 3 operations per iteration (increment, check, and print) = 15 operations.

Therefore, `O(15)` → `O(1)` for this fixed loop. If the loop runs `n` times, its time complexity is `O(n)`.

## Cases

1. Best case
2. Average case
3. Worst case

**Example:**
```cpp
if (marks < 25)
    cout << "grade D";
else if (marks < 45)
    cout << "grade D";
else if (marks < 65)
    cout << "grade D";
else
    cout << "grade A";
```

- Best case: The first condition is satisfied.
- Worst case: The last `else` block is reached.

Always consider the worst case when analyzing worst-case time complexity.

**Example:**

If `O(4N^3 + 3N^2 + 8)` and `N = 10^3`, the highest-order term dominates as `N` grows.

Here, the constants 4, 3, and 8 and the lower-order term `3N^2` are ignored.

Therefore, the time complexity is `O(N^3)`.

## Asymptotic Notations

- **Big-O notation (`O`)** – Upper bound
- **Theta notation (`Θ`)** – Tight bound
- **Omega notation (`Ω`)** – Lower bound

## Time Limit (LeetCode / Competitive Programming)

A rough estimate of the number of operations allowed based on the time limit:

- **1 second** ≈ \(10^8\) operations
- **2 seconds** ≈ \(2 \times 10^8\) operations
- **5 seconds** ≈ \(5 \times 10^8\) operations
