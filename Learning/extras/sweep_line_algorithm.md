## 🧹 Sweep Line Algorithm - Explained Like a Red Carpet Event
Imagine you're managing a red carpet event. Celebrities arrive and leave at different times, and you want to answer:
<pre> 🧐 "When was the red carpet most crowded?"</pre>
This is where the Sweep Line Algorithm shines! 🌟

### 🎬 The Setup
You have a list of celebrities and their arrival/departure times:
<pre>
std::vector<std::pair<int, int>> guests = {
    {1,5}, {2,6}, {4,7}
};
</pre>

We convert each guest into two events:
- `(arrival_time, +1)` -> Someone enters 🚶
- `(departure_time, -1)` -> Someone leaves 👋