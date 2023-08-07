# Pointers

Pointers are an essential and powerful concept in C programming and other low-level languages. They provide a way to directly access and manipulate memory addresses, allowing for more efficient memory management and better control over data structures.

### Benefits

---

- **Dynamic Memory Allocation** Pointers enable dynamic memory allocation, which means you can allocate memory at runtime based on your program's needs. Functions like **malloc, calloc, and realloc** return a pointer to the allocated memory, allowing you to manage memory efficiently.

- **Efficient Passing of Large Data** When you pass large data structures (e.g., arrays or structs) to functions, using pointers as function arguments is more efficient than passing the entire data. It **avoids** unnecessary **copying** of data and saves memory.

- **Direct Memory Access** Pointers allow direct access to memory addresses. You can read and modify data stored in memory without the need for an **intermediate** variable.

- **Data Structures** Pointers are fundamental for implementing **complex** data structures like **linked lists, trees, graphs, and dynamic arrays**. These data structures rely on memory addresses to establish relationships between elements.

- **Returning Multiple Values from Functions** Functions in C can only return a single value. However, by using **pointers**, you can return multiple values through function arguments.

- **Function Pointers** C supports function pointers, allowing you to **create** arrays of functions, pass functions as arguments to other functions, and **dynamically** choose which function to call during runtime.

- **Accessing Hardware and Low-Level Operations** When interfacing with hardware, pointers are often used to access specific memory-mapped registers and manipulate hardware settings directly.

- **Strings** Strings in C are represented as arrays of characters. Pointers are commonly used to **manipulate** and work with strings.

- **Arrays and Dynamic Data Structures** Arrays are internally implemented using pointers. Understanding pointers is crucial for effectively working with **arrays** and other dynamic data structures.

### Address randomization

---

To disable run

```
sudo sysctl -w kernel.randomize_va_space=0\
```

To enable run

```
sudo sysctl -w kernel.randomize_va_space=0\
```

### Concept of null in C

---

#### NULL Pointer

In C programming, a **NULL** pointer is a special pointer value that points to no memory location or an invalid memory location. It is often used to indicate that a pointer does not currently point to a valid object or memory location.

The NULL pointer is defined as a **constant** with a value of 0 in C. However, the actual representation of NULL might vary depending on the system or compiler, but it is guaranteed to be a value that cannot represent a **valid** memory address.

```
int *ptr1 = 0;
int *ptr2 = ((int *)0);
int *ptr3 = '\0';
```

- ***Never Dereference a null pointer***

### Pointer Arithmetic

---

Pointer arithmetic in C allows you to perform arithmetic operations on pointers, which can be used to navigate through arrays and data structures efficiently. In C, pointers store memory addresses, and when you perform arithmetic operations on them, you can move the pointer to point to different locations in memory.

```
int arr[] = {10, 20, 30, 40, 50};
int *ptr = arr; // ptr points to the first element of the array arr

ptr = ptr + 2; // moves ptr two elements forward, now ptr points to the third element (30)
```

```
int arr[] = {10, 20, 30, 40, 50};
int *ptr = &arr[4]; // ptr points to the last element of the array arr

ptr--; // moves ptr to the second-to-last element (40)
```

### Const pointer

---

- Pointer to non- constant data           **(can modify pointer and data)**
- Pointer to const data                   **(can modify pointer not data)**
- Constant Pointer to non-constant data   **(can modify data not pointer)**
- Constant pointer to constant data       **(can't modify pointer & data)**

check [Example 01](constpointer.c)

## Links

- [Pointers in C](https://iq.opengenus.org/pointers-in-c/)
- [Pointers in C++](https://www.mycplus.com/tutorials/cplusplus-programming-tutorials/pointers-2/)
- [Pointers Basics](https://lockpin010.medium.com/pointers-in-depth-592a0b85acbc)
- [Pointers in depth](https://www.cs.fsu.edu/~myers/c++/notes/pointers1.html#:~:text=What%20is%20a%20Pointer%3F,to%20as%20Pass%20By%20Address.)
