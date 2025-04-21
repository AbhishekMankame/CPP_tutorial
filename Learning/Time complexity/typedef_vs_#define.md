## define ll long long int vs typedef long long int ll
Let's first talk about #define ll long long int
- Pros:
    - Quick to write
    - Popular in CP due to speed of coding
    - Works like a simple text replacement

- Cons:
    - No type checking (just a preprocessor macro)
    - Can lead to weird bugs if misused
    - Not scoped - affects the whole file globally