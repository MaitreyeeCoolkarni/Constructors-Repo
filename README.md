# Constructors-Repo

## AIM -
To learn about constructors and destructors

# Theory: Constructors and Destructors in C++

---

## 1. Constructors
### Definition
- A **constructor** is a special member function of a class that is automatically invoked when an object is created.  
- It is mainly used to initialize data members of a class.  
- The constructor has the same name as the class and has no return type.  

### Characteristics
- Called automatically when an object is created.  
- Same name as the class.  
- No return type.  
- Can be **overloaded** (multiple constructors in the same class).  

### Types of Constructors
1. **Default Constructor** → Takes no parameters and assigns default values.  
2. **Parameterized Constructor** → Takes arguments to assign specific values.  
3. **Copy Constructor** → Creates a new object as a copy of an existing object.  

---

## 2. Destructors
### Definition
- A **destructor** is a special member function of a class that is automatically invoked when an object is destroyed.  
- It is mainly used to release resources such as memory, files, or connections.  
- The destructor has the same name as the class but is preceded by a tilde (`~`).  

### Characteristics
- Called automatically when an object is destroyed or goes out of scope.  
- Same name as the class with a `~` prefix.  
- No return type.  
- Cannot take arguments.  
- Cannot be overloaded (only one destructor per class).  

---

## 3. Key Differences Between Constructor and Destructor

| Feature              | Constructor                                    | Destructor                           |
|----------------------|-----------------------------------------------|---------------------------------------|
| **Purpose**          | Initializes object data members                | Cleans up and releases resources      |
| **Invocation**       | Automatically when object is created           | Automatically when object is destroyed|
| **Name**             | Same as class name                             | Same as class name with `~` prefix    |
| **Overloading**      | Can be overloaded (default, parameterized, copy)| Cannot be overloaded                  |
| **Parameters**       | Can take parameters                            | Cannot take parameters                |
| **Return type**      | No return type                                 | No return type                        |

---

## 4. Summary
- **Constructors** → Used for initializing objects.  
- **Destructors** → Used for cleaning up objects.  
- Together, they manage the **lifecycle of an object** in C++.  

# Algorithms of C++ Programs

---

## Program 1
### Algorithm
1. Start  
2. Define a class **Student** with data member `x`.  
3. Create a **default constructor** to input roll number from the user.  
4. Define `display()` function to print roll number.  
5. In `main()`, create an object `S1` → constructor executes.  
6. Call `S1.display()` to print roll number.  
7. End  

---

## Program 2
### Algorithm
1. Start  
2. Define a class **Student** with members: `name`, `age`, `year`, `divi`.  
3. Define a **parameterized constructor** to initialize the values.  
4. Define a **copy constructor** to copy values from one object to another.  
5. Define `display()` function to print student details.  
6. In `main()`, create `s1` using parameterized constructor.  
7. Display `s1`.  
8. Create `s2` using copy constructor with `s1`.  
9. Display `s2`.  
10. End  

---

## Program 3
### Algorithm
1. Start  
2. Define a class **Date** with member `d1`.  
3. Create a **constructor** to input today’s date from the user.  
4. Define `Display()` to print the date.  
5. In `main()`, create object `today` → constructor executes.  
6. Call `today.Display()`.  
7. End  

---

## Program 4
### Algorithm
1. Start  
2. Define a class **construct** with members `a` and `b`.  
3. Create a **parameterized constructor** to initialize `a` and `b`.  
4. Define `putdata()` to display values of `a` and `b`.  
5. In `main()`, create object `c1(20, 20)` → constructor executes.  
6. Call `c1.putdata()`.  
7. End  

---

## Program 5
### Algorithm
1. Start  
2. Define a class **Date** with members `d`, `m`, `y`.  
3. Define a **destructor** that prints a message when called.  
4. In `main()`, create objects `d1, d2, d3, d4`.  
5. Run a loop four times, creating temporary object `d1` in each iteration.  
6. Each temporary object is destroyed when loop iteration ends → destructor executes.  
7. After program ends, all other objects are destroyed.  
8. End  

---

## Program 6
### Algorithm
1. Start  
2. Define a class **destruct** with a constructor and destructor.  
3. Constructor: increments `count` and displays number of objects created.  
4. Destructor: decrements `count` and displays number of objects destroyed.  
5. In `main()`, create objects `aa, bb, cc`.  
6. Enter a block scope and create object `dd`.  
7. When block ends, `dd` is destroyed → destructor executes.  
8. At program end, remaining objects (`aa, bb, cc`) are destroyed.  
9. End  


## Conclusion  

Constructors and destructors are fundamental concepts in object-oriented programming that ensure proper object lifecycle management.  
Constructors provide controlled and efficient initialization of objects, enhancing readability and reliability in code.  
Destructors, on the other hand, ensure that resources are released properly, preventing memory leaks and ensuring program stability.  
Together, they establish a structured mechanism for object creation and cleanup, making programs more robust, efficient, and easier to maintain.  

