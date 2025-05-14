## 🧠What is Object-Oriented Programming (OOP)?
OOP is a way to structure your code like the real world:
- You model real-world entities (objects) in code.
- These entities have properties (data) and behavoirs (functions).
- The blueprint for these entities is called a class.

### 🧱 1. What is a Class?
A class is like a blueprint for an object.<br>
It defines what an object will have and what it can do.<br>
Example: Think of a Car
- Every car has properties: `brand`, `color`, `speed`
- Every car can do things: `accelerate()`, `brake()`
<br>
In C++:
<pre>
#include <iostream>
using namespace std;

class Car {
public:
    // Data members (properties)
    string brand;
    string color;
    int speed;

    // Member function (behavior)
    void startEngine() {
        cout << "Engine started for " << brand << endl;
    }
};
</pre>

### 🚗 2. What is an Object?
An object is a real instance of the class - like a real car created from the blueprint.
<pre>
int main(){
    Car car1;   // Created object
    car1.brand = "Toyota";  // Access members
    car1.color = "Red";
    car1.speed = 0;

    car1.startEngine(); // Call method
    return 0;
}
</pre>
Output:
<pre>
Engine started for Toyota</pre>

### 🛠️ Key Concepts:
| Term | Meaning |
| ---- | ------- |
| Class | Blueprint/template |
| Object | Instance of a class |
| Data Members | Variables inside a class |
| Member Functions | Functions inside a class |
| Access Specifiers | Control access (`public`, `private`, `protected`) |
