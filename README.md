## 📘 Advance Programming in C – Area Calculation Program

This project was created as a **Semester 2 Case Study for the subject CA407: Advance Programming in C**.
It demonstrates multiple advanced C programming concepts by creating a menu-driven program that calculates the area of different shapes using pointers, dynamic memory, and user-defined functions.

---

## 📘 Project Overview

The program allows the user to calculate the area of:
- Circle
- Square
- Rectangle
- Triangle

It uses:
- Pointer parameters
- Call-by-reference method
- Void pointer
- Dynamic memory allocation using calloc
- Macro definition (#define PI 3.14)
- User-defined functions
- Constructor & destructor functions with __attribute__
- A menu-driven interface to select shapes

This project helped strengthen my understanding of modular programming and memory handling in C.

--- 

## 📂 Project Structure

```
area-calculator/
├── src/
│   └── area_calculator.c
├── docs/
│   └── APC case study project.docx
│   └── output.png
└── README.md
```
---

## 🛠️ Features Implemented
✔ Pointer-Based Calculations: All shape dimensions are passed using pointers.

✔ Call-by-Reference: Values are accessed and modified through memory addresses.

✔ Dynamic Memory Allocation: Used calloc() for temporary data handling.

✔ Preprocessor Directives: #define PI 3.14 used for circular area calculation.

✔ Constructor & Destructor: Constructor displays a welcome message at program start,   Destructor displays exit message at the end

✔ Modular Design: Separate function (add()) handles all shape calculations.

✔ Clean Menu-Driven Interface: User-friendly structure with shape selection options.

---

## ▶️ How to Run

### **Using GCC (Linux/Mac/Windows with MinGW)**
```bash
cd src
gcc area_calculator.c -o area
./area
```
### **Using CodeBlocks / Dev-C++ / VS Code**

1. Open the project folder
2. Compile area_calculator.c
3. Run the generated executable

---

## 🧪 Sample Input

```
Press 1 to find area of circle
Press 2 to find area of square
Press 3 to find area of rectangle
Press 4 to find area of triangle
Press 5 to exit
Enter your choice:
```

## ✅ Output

```
Enter radius of circle: 5
Area of circle is: 78
```

---

## 🎓 Academic Context

This was created for:

**Course:** CA407 – Advance Programming in C 
**Objective:** Implement advanced concepts in C programming through a practical case-study project
**Skills Demonstrated:** Pointers, call-by-reference, dynamic memory, modular design, GCC attributes 

---

## 📄 License

This project is provided for academic and learning use.