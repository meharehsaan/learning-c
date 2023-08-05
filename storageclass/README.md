# Review of Datatpes

In C programming, storage classes determine the lifetime, scope, and visibility of variable.

### Automatic (auto)

---

- **Variables** declared inside a function **without** any **storage** **class** specifier are considered **automatic** by **default**.
  
- They have automatic storage duration, meaning they are **created** when the function is **called** and **destroyed** when the function **returns**.
  
- The variable's value is not **preserved** between function calls.

```
void someFunction() {
    auto int x = 10; // 'auto' keyword is optional, variables without storage class specifier are considered 'auto' by default.
}
```

### Static

---

Static
    |- Within a function (retain its value after invocation again and again)
    |- Outside a function
                    |- With static keyword (internal linkage (Not accessible outside that .c file))
                    |- Without static keyword (external linkage (Accessed the entire program in all .c .o files))

- Variables declared with the static keyword have static **storage duration**.
  
- Static variables are **initialized** only once and **retain** (values are preserved across multiple function calls and throughout the program's execution. These variables remember their last assigned value and do not lose it when a function exits) their value between function calls.
  
- They have **file** scope (global variables) if declared **outside** any function, or they have **block** scope (local to a function) if declared **inside** a function.

```
static int globalVariable; // Static variable with file scope, initialized to 0 by 
default.

int globalVariable; // Variable with global scope 

void someFunction() {
    static int count = 0; // Static variable with block scope, initialized to 0 only once.
    count++;
}
```

### Register

---

- The register keyword **suggests** to the **compiler** that a variable should be stored in a **CPU** register for **quicker** access.
  
- The compiler **may or may not honor this suggestion**, as modern compilers are efficient at **deciding** register allocation.
  
- Variables declared with the **register** keyword **cannot** have the **unary & operator** applied to them since they are stored in a **register** and do not have a **memory address**.

```
void someFunction() {
    register int x = 10;
}
```

### Volatile

---

In C programming, the volatile keyword is used as a **type qualifier** for variables. When a variable is declared with the volatile keyword, it informs the compiler that the variable's value can be changed **unexpectedly** by external factors not **explicitly** controlled by the program itself. As a result, the compiler should not perform certain **optimizations** on the variable, such as **caching** its value in a register or **reordering** read and write operations.

The volatile keyword is mainly used for variables that may be changed by **hardware**, **interrupts**, **signal handlers, or other threads** in a multithreaded environment. It is essential when working with **memory-mapped hardware registers**, as it prevents the compiler from assuming that the value of the variable remains **unchanged** between accesses.

```
    volatile int sensorValue = 0;

    while (1) {
        // Read sensor value from a memory-mapped hardware register
        // (Assume the value changes by external hardware)
        sensorValue = /* Read sensor value from hardware */;

        // Perform some operations based on the sensor value
        // (Without the 'volatile' keyword, the compiler may optimize this loop)
        printf("Sensor Value: %d\n", sensorValue);

        // Wait for a short period before reading again
        // (Assume some delay function that doesn't optimize away)
        /* Delay function here */;
    }

```

### Const

---

In C programming, the const keyword is used as a **type qualifier** for variables and function parameters. When a variable is declared with the **const** keyword, it indicates that the value of the variable **cannot** be **modified** after **initialization**. Similarly, when used with function parameters, it means that the function cannot **modify** the values of those parameters.

The const keyword is useful for defining **read-only variables**, which helps prevent accidental changes to **critical** data in your program. It also **aids** the compiler in performing certain optimizations.

```
const int MAX_VALUE = 100;
```


#### Read-Only Pointers

In this case, ptr is a pointer to a **constant** integer. It means that the value pointed to by ptr **cannot** be **modified** using ptr, but the value of **ptr** itself (the memory address it holds) can be changed.

```
int x = 10;
const int* ptr = &x;
```

#### Constant Function Parameters

In this example, the data parameter is marked as const, indicating that the function cannot modify its value.

```
void printData(const int data) {
    // data is a read-only parameter, and you cannot modify it.
    printf("%d\n", data);
}
```
I
### Volatile const

---

When a variable is declared with both volatile and const qualifiers, it indicates that the variable is both read-only (constant) and may be changed externally (volatile).

```
    volatile const int sensorValue = 0;

    // Attempting to modify the variable will result in a compilation error
    // sensorValue = 10; // Error: assignment of read-only variable 'sensorValue'

    // The value can be read without any issues
    int value = sensorValue;
    printf("Sensor Value: %d\n", value);
```

### Extern

---

- Variables declared with the **extern** keyword have **external** **linkage**, meaning their **definition** exists elsewhere in the program.

- They are typically used to declare **global** variables that are defined in other **files** (header files or other source files).
  
- The extern declaration provides a **reference** to the variable without **allocating** **memory** for it.

```
extern int globalVariable; // Declaration of a global variable defined in another file.

int main() {
    // Access and use the 'globalVariable' here...
}
```

Each storage class affects how the variable is stored in memory, its lifetime, and how it can be accessed in different parts of the program. Properly using storage classes can help optimize memory usage and ensure the intended behavior of variables in your C programs.

### implicit declaration of function warning

---

The **implicit declaration of function** warning in C means that you are calling a function in your code without providing a function prototype or declaration before the function call. In C, a function must be declared or defined before it is called, so the compiler knows its return type and parameter list.

When the compiler **encounters** a function call without a prior declaration or prototype, it assumes a **default function signature**, which assumes that the function returns an **integer** and takes an **unspecified** number of arguments. This can lead to **potential issues** and **unexpected behavior** in your program.

Always declare function before definition

```
// Function prototype
int addNumbers(int a, int b);

// Function call
int result = addNumbers(5, 7);
```
