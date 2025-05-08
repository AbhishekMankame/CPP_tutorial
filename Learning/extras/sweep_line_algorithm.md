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

### 🧹The Sweep
We sort all these events by time and walk through them in order, updating the guest count:

<pre>
std::vector<std::pair<int, int>> events;

for(auto g : guests) {
    events.push_back({g.first, +1});
    events.push_back({g.second, -1});
}

std::sort(events.begin(), events.end());

int maxGuests = 0, currentGuests = 0;

for(auto e : events) {
    currentGuests += e.second;
    maxGuests = std::max(maxGuests, currentGuests);
}
</pre>