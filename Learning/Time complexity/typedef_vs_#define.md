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

#### typedef long long int ll;
- Pros:
    - Proper C++ type alias
    - Safer (respects scope, better for debugging)
    - Recognized by tools (syntax highlighting, IDE support)
    - Can be replaced with using ll=long long in modern C++

- Cons:
    - Slightly more to type (but rarely)