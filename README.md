# PY_C_CPP_Beginner_to_Advanced_MiniChallenge
<hr>

## Description
This is a small folder that contains 100 programs that I've challenge myself to make for practicing the 3 languages I will use in my internship.

## Table of Contents
- [Programs](#programs)
- [Installation](#installation)
  - [Prerequisites](#prerequisites)
  - [Steps](#steps)
- [Contributing](#contributing)
- [License](#license)

<br><br><hr>
# Programs

## **Python (1-35)**

### **Basic Level (1-10)**

1. Write a program that prints "Hello, world". ☑️
2. Add two numbers entered by the user. ☑️
3. Determine if a number is even or odd. ☑️
4. Write a function that takes a list and returns its reverse. ☑️
5. Create a function that counts the vowels in a string. ☑️
6. Use a `try-except` block to handle division by zero. ☑️
7. Generate the first 10 numbers in the Fibonacci series. ☑️
8. Implement a word counter for a sentence. ☑️
9. Implement a recursive function to calculate the factorial. ☑️
10. Read a text file and count the number of lines. ☑️

### **Intermediate Level (11-25)**

1. Write a function that reverses the elements of a list without using built-in methods.
2. Create a function that removes duplicates from a list.
3. Implement a `Person` class with basic attributes and methods.
4. Create an authentication system with username and password (no database).
5. Use `map` and `filter` to transform a list of numbers.
6. Generate a dictionary with word frequencies in a text.
7. Implement a decorator to measure the execution time of a function.
8. Create unit tests for a function using `unittest`.
9. Simulate a queue using `collections.deque`.
10. Use `argparse` to create a command-line script that adds two numbers.
11. Implement a function that performs web scraping with `requests` and `BeautifulSoup`.
12. Write tests with `pytest` for a temperature conversion function.
13. Simulate a REST API using `Flask` and test it with `requests`.
14. Implement a simple cache using `functools.lru_cache`.
15. Create a script that monitors changes in a text file.

### **Advanced Level (26-35)**

1. Implement a logging system with `logging`.
2. Write a unit test for a class that handles CSV files.
3. Create a script that checks if a URL is active using `requests`.
4. Develop a secure password generator.
5. Implement a mini HTTP server with `http.server`.
6. Design a plugin system using `importlib`.
7. Implement a task queue with `asyncio`.
8. Connect Python to an SQLite database and perform queries.
9. Use `multiprocessing` to perform parallel computations.
10. Implement a log analyzer that filters critical errors.

---

## **C (36-70)**

### **Basic Level (36-45)**

1. Write a program that prints "Hello, world". ☑️
2. Add two numbers entered by the user. ☑️
3. Write a program that determines if a number is prime. ☑️
4. Create an array of 10 numbers and print their values. ☑️
5. Write a function that calculates the factorial of a number. ☑️
6. Implement a `struct` to handle student data (name, age, GPA). ☑️
7. Create a program that counts how many times a character appears in a string. ☑️
8. Implement a function that converts Celsius to Fahrenheit.
9. Write a program that determines if a string is a palindrome.
10. Use `fgets()` to read a line from a file.

### **Intermediate Level (46-60)**

1. Implement a function that sorts an array using the bubble sort algorithm.
2. Write a program that uses pointers to swap two values.
3. Implement a recursive function to calculate the Fibonacci series.
4. Create a function that reverses a string using pointers.
5. Write a program that counts lines in a text file.
6. Use `malloc()` and `free()` to manage dynamic memory.
7. Implement a simple linked list.
8. Create a program that performs matrix operations (addition, multiplication).
9. Write a program that reads and processes a CSV file.
10. Create a program that generates random numbers with `rand()`.
11. Implement an error handler using `errno`.
12. Write a program that implements a stack using a `struct`.
13. Implement a small log parser in C.
14. Create a program that connects to an SQLite database in C.
15. Write a program that measures the execution time of a function.

### **Advanced Level (61-70)**

1. Implement a doubly linked list.
2. Create a logging system using files.
3. Write a program that uses `pthread` to create threads.
4. Implement a client-server system with sockets in C.
5. Develop a basic unit testing system for C.
6. Implement a process monitoring system in Linux using `procfs`.
7. Use `fork()` to create child processes and synchronize them.
8. Implement an RSA key generator in C.
9. Create a basic HTTP server in C.
10. Perform memory testing with Valgrind and optimize your code.

---

## **C++ (71-100)**

### **Basic Level (71-80)**

1. Write a program that prints "Hello, world".
2. Create a `Person` class with private attributes and `get/set` methods.
3. Implement a function that reverses a string.
4. Use `vector<int>` to store and display 10 numbers.
5. Write a function that sorts a `vector<int>` using `sort()`.
6. Create a function that determines if a number is prime.
7. Implement a recursive function to calculate the factorial.
8. Create a `Student` class with a constructor that takes name and age.
9. Use `map<string, int>` to count word frequencies in a text.
10. Implement operator overloading for `+` in a class.

### **Intermediate Level (81-90)**

1. Use `unique_ptr` to manage dynamic memory.
2. Implement an exception handling system with `try-catch`.
3. Write a program that reads and writes a JSON file using `nlohmann/json`.
4. Implement an interface (abstract class) with pure virtual methods.
5. Use `std::thread` to execute two tasks in parallel.
6. Write a function that uses `lambda` to filter a `vector<int>`.
7. Implement a `Logger` class using the Singleton pattern.
8. Design an object factory using the Factory Pattern.
9. Create an Observer Pattern for game events.
10. Implement an in-memory cache using `unordered_map`.

### **Advanced Level (91-100)**

1. Implement a thread pool (`ThreadPool`).
2. Use `std::async` and `std::future` for concurrent tasks.
3. Implement a base class for unit testing in C++.
4. Create a REST API in C++ using `Boost.Asio`.
5. Design a web server log analyzer.
6. Use `protobuf` to serialize and deserialize data.
7. Implement a client-server system with WebSockets in C++.
8. Create a unit testing system with Google Test.
9. Design a simple microkernel in C++.
10. Implement a basic compiler using `LLVM`.

<br><br><hr>
# Installation

### Prerequisites

- Python installed (Recommended version -> v3.12)
- C complier
- C++ compiler

### Steps
1. **Clone the repository:**
   ```bash
   git clone https://github.com/Jastreas/PY_C_CPP_Beginner_to_Advanced_MiniChallenge.git
   ```
2. **Open the folder where the programs are contained**

    **Example:**

    cd PY_C_CPP_Beginner_to_Advanced_MiniChallenge/Python/Beginner
    
    cd PY_C_CPP_Beginner_to_Advanced_MiniChallenge/CPP/Beginner
3. **Compile C or C++ code:**

    **Example:**

    c++ p1.cpp -o p1
4. **Run the program:**

    **C++ Example:**

    ./p1.exe (this works on windows)

    **Python Example:**

    py p1.py
<br><br><hr>
# Contributing

Feel free to contribute as you want, adding code, optimizing functions or correcting code, everything is valid!

**Steps to contribute:**
1. Fork the repository.
2. Create a new branch.
3. Make your changes and commit them.
4. Push to your branch.
5. Open a pull request.

### License
This project is open-source and available under the [MIT License](LICENSE).
