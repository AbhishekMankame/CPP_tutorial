## define ll long long int vs typedef long long int ll;
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

### So which one to use?
#### In Competitive Programming (CP):
- Use #define ll long long - it's common, fast to type, and acceptable.
#### In Interviews/Production code/Good practice:
- Use typedef ll long long; or using ll = long long;
- It's safer, cleaner, and more C++ idiomatic

### Protip:
- If you are using C++ 11 or later, prefer
    - using ll=long long;
    - It's the modern, cleanest way to do type aliasing.