## 🧠 Meet Bob, the Lazy but Smart Guy
Imagine you're Bob, a super lazy dude who hates doing the same thing twice. But you're smart. If you ever have to solve a problem, and you know you'll see it again, you write down the answer on a sticky note and slap it on the fridge.<br>
Now, whenever you face the same problem, instead of solving it again, you just read the stick note.<br>
That's dynamic programming.

### 🍕The Pizza Delivery Problem (A Fun Analogy)
You're a pizza delivery guy, and you get paid for each successful delivery. But there's a twist:
- You can deliver to one house per day.
- You can't deliver two days in a row (you need rest-duh).
- Each house pays differently per day.

You want to maximize your total money over a week.<br>
If you brute-force it, you try all combinations:
- Deliver on Mon, skip Tue, deliver Wed...
- Skip Mon, deliver Tue...

But Bob (out hero) is like:
<pre> "Wait a minute! I already figured out the best way to earn money from Wednesday onwards last time! Why should I do that again? Let me reuse that answer." </pre>
So he writes the best choices for each day on the fridge - and never recalculates anything he already figured out.<br>
That's DP:
<pre>"Don't solve the same subproblem twice. Store it. Reuse it."</pre>

### 🧊 DP Flavors: Ice Cream
1. Top-Down (with Memoization)<br>
Like Bob starting from the whole week and breaking it down:
 -  "What's the best from today onward?"
 -  If I've seen this situation before, I grab the stick note.

 2. Bottom-Up (Tabulation)<br>
 Bob starts from the end of the week and builds up the solution:
 -  "What's the best for Sunday? Easy!"
 -  Then Saturday, using the answer for Sunday.
 -  And so on...

 Both are good. Bob doesn't care - he just doesn't want to repeat himself.