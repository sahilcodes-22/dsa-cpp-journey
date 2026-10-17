# Space Complexity

Auxiliary space (the space taken to solve the problem) + input space (the space taken to store the input).

Denoted using Big-O notation (`O`).

**Example 1:**
```cpp
int a = 5;
int b = 2;
int c = a + b;
```

- `a` and `b` = Input space
- `c` = Auxiliary space

So → `O(3)` → `O(1)`

**Example 2:**
```cpp
int a[N];
```

So → `O(N)`

**Avoid:**

```cpp
int a = 5;
int b = 2;
b = a + b;
```

Never modify the input/data unless explicitly instructed to do so.
