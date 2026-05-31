# 🔤 Custom String Class Library Using C++

A custom **String Class Library** developed in **C++** that implements various string manipulation functions without using the built-in `std::string` library.

This project demonstrates the implementation of string operations using **Object-Oriented Programming (OOP)** concepts such as:

- Classes and Objects
- Constructors and Destructors
- Dynamic Memory Allocation
- Friend Functions
- Operator Overloading
- Custom String Manipulation Techniques

The project recreates common string functions from scratch to understand how standard string libraries work internally.

---

# ✨ Features

## 📝 Custom STRING Class

A user-defined string class that dynamically allocates memory and performs various string operations.

```cpp
class STRING
{
    char *s;
};
```

---

# 📚 String Operations Implemented

### String Length

Function:

```cpp
my_strlen()
```

Example:

```text
Input  : hello
Output : 5
```

---

### String Comparison

Function:

```cpp
my_strcmp()
```

Example:

```text
String 1 : hello
String 2 : GOOD NIGHT

Result : Strings are different
```

---

### String Comparison (N Characters)

Function:

```cpp
my_strncmp()
```

Example:

```text
String 1 : hello
String 2 : helix
N        : 3

Result : First 3 characters are equal
```

---

### String Copy

Function:

```cpp
my_strcpy()
```

Example used in project:

```text
Source : GOOD NIGHT

Output : GOOD NIGHT
```

---

### String Copy N Characters

Function:

```cpp
my_strncpy()
```

Example:

```text
Source : GOOD NIGHT
N      : 5

Output : GOOD
```

---

### String Concatenation

Function:

```cpp
my_strcat()
```

Example used in project:

```text
hello + GOOD MORNING
```

Output:

```text
helloGOOD MORNING
```

---

### String Concatenation N Characters

Function:

```cpp
my_strncat()
```

Example:

```text
hello + GOOD MORNING
N = 5
```

Output:

```text
helloGOOD
```

---

### String Reverse

Function:

```cpp
my_strrev()
```

Example:

```text
Input  : GOOD NIGHT

Output : THGIN DOOG
```

---

### Character Search

Function:

```cpp
my_strchr()
```

Example used in project:

```text
String : hello
Search : e
```

Output:

```text
Character Found
```

---

### Reverse Character Search

Function:

```cpp
my_strrchr()
```

Example:

```text
String : hello
Search : e
```

Output:

```text
Character Found
```

---

### Substring Search

Function:

```cpp
my_strstr()
```

Example used in project:

```text
Main String : hello
Substring   : esa
```

Output:

```text
Substring Not Found
```

---

# 🔤 Case Conversion Operations

### Upper Case Conversion

```cpp
my_strupr()
```

Example:

```text
hello
```

Output:

```text
HELLO
```

---

### Lower Case Conversion

```cpp
my_strlwr()
```

Example:

```text
GOOD NIGHT
```

Output:

```text
good night
```

---

### Toggle Case Conversion

```cpp
my_strtoggle()
```

Example:

```text
Good Night
```

Output:

```text
gOOD nIGHT
```

---

# 🔄 Operator Overloading

Implemented Operators:

```cpp
=
+
==
!=
<
<=
>
>=
```

### Assignment Operator

```cpp
STRING s1("hello");
STRING s2;

s2 = s1;
```

Output:

```text
hello
```

---

### Concatenation Operator

```cpp
STRING s1("GOOD ");
STRING s2("MORNING");

STRING s3 = s1 + s2;
```

Output:

```text
GOOD MORNING
```

---

# 🛠️ Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Dynamic Memory Allocation
- Friend Functions
- Operator Overloading
- GNU G++ compiler

---

# 📂 Project Structure

```text
.
├── main.cpp
├── string.cpp
├── header.h
└── README.md
```

---

# ⚙️ Installation & Setup Guide

## 📥 Clone the Repository

```bash
git clone https://github.com/deyyalaudaykiran/Custom-String-Class-Library.git
```

---

## 📂 Navigate to Project Directory

```bash
cd Custom-String-Class-Library
```

---

# 🛠️ Requirements

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install g++
```

### Fedora

```bash
sudo dnf install gcc-c++
```

### Arch Linux

```bash
sudo pacman -S gcc
```

---

# ⚙️ Compile the Project

Compile the project using:

```bash
g++ main.cpp string.cpp -o string_app
```

This command:

- Compiles `main.cpp`
- Compiles `string.cpp`
- Links both files together
- Generates the executable `string_app`

---

# ▶️ Run the Program

```bash
./string_app
```

---

# 💬 Sample Program Execution

```text
Input String : hello

Length of String : 5

Character Search : e
Character Found

Reverse Character Search : e
Character Found

Substring Search : esa
Substring Not Found

Concatenation :
helloGOOD MORNING

String Copy :
GOOD NIGHT

Upper Case :
HELLO

Lower Case :
good night

Reverse String :
THGIN DOOG

Toggle Case :
gOOD nIGHT
```

---

# 🧠 Concepts Demonstrated

✔️ Classes and Objects

✔️ Constructors and Destructors

✔️ Dynamic Memory Allocation

✔️ Friend Functions

✔️ Operator Overloading

✔️ String Manipulation

✔️ Memory Management

✔️ Custom Library Design

✔️ C++ Programming

✔️ Linux Application Development

---

# 🎯 Learning Outcomes

This project helps understand:

- Internal implementation of string functions
- Dynamic memory allocation in C++
- Deep Copy and Copy Constructor concepts
- Operator Overloading
- Custom library development
- Object-Oriented Programming principles

---

# 🚀 Future Enhancements

- Exception Handling
- Move Constructor
- Move Assignment Operator
- UTF-8 Support
- Regular Expression Support
- Template-Based String Class
- STL-Compatible Interface

---

# ⭐ Support

If you found this project useful:

⭐ Star the Repository

🍴 Fork the Repository

🛠️ Contribute Improvements

📢 Share with fellow developers and students

---

## 👨‍💻 Developed Using C++

A custom string library designed to understand string manipulation, memory management, and object-oriented programming concepts through practical implementation.
