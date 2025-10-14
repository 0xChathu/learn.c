# C Programming Mastery Guide — learn.c

#### This is a complete, coherent, and practical roadmap to mastering C programming. It outlines exactly what to learn, what to do, and how to verify mastery before transitioning to Python. Each section builds your ability to think like a systems programmer.

## 1. Tooling & Environment — build your arsenal first
🛠️ Learn:
- How compilation works: preprocessing → compilation → linking → execution
- gcc/clang flags (-Wall, -Wextra, -Werror, -g)
- Build automation with Makefiles
- Debugging with gdb
- Memory checking with Valgrind
- Version control with Git

💻 Do:
- Install gcc/clang, make, gdb, valgrind, git
- Write hello.c, compile manually and via Makefile
- Create intentional segfaults and debug with gdb
- Verify memory safety with valgrind

✅ Checkpoint:
- Explain compilation process
- Debug a segfault with gdb
- Run valgrind and show zero leaks
- Write a Makefile that builds and cleans your project.
  
# 2. C Foundations — syntax, logic, and flow control
📚 Learn:
- Data types, variables, constants, operators
- Control structures: if, switch, loops
- Functions, return types, scope, stack frames
- Input/output: printf, scanf, fgets

💻 Do:
- Calculator with switch
- Factorial and Fibonacci (iterative & recursive)
- Grading system
- Temperature converter

✅ Checkpoint:
- Write a small program confidently using loops/functions
- Predict output of nested loops
- Explain = vs == clearly
  
# 3. Pointers & Arrays — the real programming begins
🧠 Learn:
- Pointer syntax, dereferencing, referencing
- Pointer arithmetic, arrays decay to pointers
- Strings (null-terminated char arrays)
- Double pointers

💻 Do:
- Implement strlen, strcpy, strcmp manually
- Reverse string in place using pointers
- Reverse array using pointer arithmetic
- Build dynamic array with malloc/free

✅ Checkpoint:
- Trace pointer operations
- Implement pointer-only string reversal
- Explain *(arr+i) == arr[i]
  
# 4. Memory Management — control the heap, control reality
💾 Learn:
- Stack vs heap
- malloc, calloc, realloc, free
- Ownership and lifetime
- Memory leaks & segfaults

💻 Do:
- Allocate/free arrays dynamically
- Dynamic string builder
- Track allocations with valgrind
- Build linked list with malloc/structs

✅ Checkpoint:
- Predict memory allocation/deallocation
- Detect/fix memory errors with valgrind
- Build dynamic array that resizes properly
  
# 5. Structs, Modular Design, and APIs
🧩 Learn:
- Structs, typedef, nested structs
- Function pointers for callbacks
- Header (.h) & source (.c) separation
- extern and static

💻 Do:
- Define struct Student, print array of students
- Build struct Vector with add/remove
- Separate code into header/source files
- Implement callback-based sorting

✅ Checkpoint:
- Design reusable modules
- Use typedef and static/external linkage correctly
- Implement and test a struct-based module
  
# 6. Algorithms & Data Structures
⚙️ Learn:
- Sorting: bubble, insertion, quicksort, mergesort
- Searching: linear & binary search
- Recursion vs iteration
- Stack, queue, linked list, tree, hash table
- Complexity analysis (Big O)

💻 Do:
- Implement sorting algorithms
- Implement stack & queue
- Implement binary search tree
- Implement hash map with chaining

✅ Checkpoint:
- Implement all from memory
- Analyze runtime complexity
- Trace recursive functions correctly
  
# 7. File I/O and CLI Interaction
📁 Learn:
- fopen, fread, fwrite, fseek, fclose
- Text vs binary mode
- Error handling (errno, strerror)
- Command-line arguments (argc, argv)

💻 Do:
- Build file word counter
- Implement CSV parser
- Build cp-like file copier
- CLI filter program

✅ Checkpoint:
- Open/read/write files safely
- Handle invalid input and errors
- Parse CSV correctly
  
# 8. Debugging, Testing & Tooling Proficiency
🔍 Learn:
- Debug with gdb
- Memory checking with valgrind
- Unit testing in C
- Makefiles

💻 Do:
- Debug broken code intentionally
- Automate builds/tests with Makefile
- Introduce logging macros

✅ Checkpoint:
- Detect and fix bugs using reasoning
- Validate memory safety
- Write testable modular code
  
# 9. Systems Programming (Optional Elite)
🔌 Learn:
- Threads with pthread, mutexes
- fork(), execvp(), wait()
- TCP/UDP sockets

💻 Do:
- Multithreaded producer-consumer
- TCP echo server & client
- Mini shell using fork/exec

✅ Checkpoint:
- Understand OS-level concurrency
- Implement threaded/networked programs
- Trace process/thread behavior
  
#10. Capstone Projects
🏁 Choose 1–2:
- Tiny Shell
- Mini Database
- HTTP Server
- Custom Memory Allocator

Each must:
- Compile with Makefile
- Leak-free under valgrind
- Handle errors gracefully
- Include README

✅ Checkpoint:
- Build, document, and defend design choices
- Program is fully modular, safe, and testable
- Demonstrates mastery of all previous topics
  
# Final Readiness — Move to Python
🚀 You’re ready if:
- You can implement & debug full data structures
- Fix memory issues with gdb & valgrind
- Explain stack vs heap clearly
- Reason about algorithm complexity
- Create, test, document modular projects

Python will feel effortless, but you’ll understand the underlying machine.
