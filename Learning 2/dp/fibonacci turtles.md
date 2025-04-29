## The Tale of Bob and the Fibonacci Turtles
### 🌱  The Problem
Bob has a turtle farm. He notices something strange:
- In Month 1, he has 1 baby turtle.
- In Month 2, still 1 turtle.
- From Month 3 onwards, the number of turtles is the sum of turtles in the last two months.<br>
Bob: "Huh... Month 3 has 2, Month 4 has 3, Month 5 has 5... Are my turtles doing math??"<br>
This gives us the famous:
<pre> Fib(n) = Fib(n-1) + Fib(n-2) </pre>

### 💀 The Brute Force Bob
Bob (before coffee):
<pre>"I'll kust use recursion for this! Easy!" </pre>
He writes:
<pre>
int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}</pre>

BUT... when he tires to calculate `fib(50)`, his PC explodes 💥<br>
Why? Because it recalculates the same valies a bazillion times!<br>
Bob (after seeing a million `fib(3)` calls):
<pre>"I'm not doing this again. I'm too lazy for this nonsense."</pre>