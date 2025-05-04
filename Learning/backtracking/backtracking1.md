## 🎬 Welcome to: "Backtracking - The Bollywood Hero of Problem Solving"
Imagine you're in a massive maze 🧩. You're the hero (duh 😎), and you're trying to save the princes, solve a Suduko, or place N on a chessboard without triggering alarms. Every step you take, you're like:
<pre>"Let me try this path... hmm... nope, dead end 😑... ok, let me backtrack and try something else!"</pre>
That's backtracking in a nutshell!

### 🧠 DEFINITION (a.k.a. the brainy bit):
Backtracking is a general algorithmic technique that tries out all possible options and "backtracks" as soon as it realizes the current path is invalid or won't lead to the solution.<br>
👉 It's basically a fancy brute force with a conscience - it doesn't go full "try everything' if it knows it's going nowhere fast.

### 🪜 Steps (The Backtracking Lifestyle):
1. Choose: Pick one possible choice.
2. Explore: Dive deeper assuming this was the correct choice.
3. Un-choose (BACKTRACK): If it fails, undo the choice and try the next option.

### 🍕 Let's See a Fun Example:
You want to order a pizza with 2 toppings out of [🍄, 🧀, 🌶️].<br>
Backtracking goes like this:
- Choose 🍄
    - Add 🧀 → 🍄🧀 ✅
    - Add 🌶️ → 🍄🌶️ ✅
- Undo 🍄, try 🧀
    - Add 🌶️ → 🧀🌶️ ✅
You don't try 🧀🍄again - that's already covered! Backtracking avoids that kind of redundancy like a good ex.

### 🧑‍💻Classic Example - Subsets Generator:
Let's write a simple C++ code to generate all subsets of a string using backtracking:
<pre>
void generateSubsets(string str, string current, int index) {
    if(index == str.length()) {
        cout << "\" << current << "\" << endl;
        return;
    }

    // Choice 1: Include this character
    generateSubsets(str, current + str[index], index + 1);

    // Choice 2: Exclude this character (backtrack!)
    generateSubsets(str, current, index + 1);
}
</pre>