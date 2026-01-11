# Reminder Application using C++

This project is a simple **Reminder System** built using **C++** and **Object-Oriented Programming (OOP)** concepts.  
It allows users to set a task reminder for a specific hour and checks whether the reminder should be triggered based on the current time entered by the user.

---

## 🎯 Objective

To design a basic reminder application that demonstrates:
- Class and object usage
- Constructor initialization
- Conditional logic
- User input handling
- Real-world time-based logic using C++

---

## 🧠 Concepts Used

- Object-Oriented Programming (OOP)
- Classes and Objects
- Constructors
- Encapsulation
- Conditional statements (`if-else`)
- Input/Output operations

---

## 🧾 Program Description

- The `Reminder` class stores:
  - A task description
  - A scheduled hour (0–23 format)
- The constructor initializes the reminder task and time
- The `check()` function compares the current hour with the scheduled hour
- If both match, the reminder message is displayed
- Otherwise, it informs that no reminder is due

---

## 🧩 Class Structure

### Class: `Reminder`

**Data Members**
- `string task`
- `int hour`

**Member Functions**
- `Reminder(string t, int h)` → Constructor
- `void check(int currentHour)`

---

## ▶️ Sample Input & Output

### Input
