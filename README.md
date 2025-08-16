# Functions in C++  

Name: Pal Jain  
Class: ENTC A3  
PRN: 24070123067  
Title: Programs on Pointers in C++  

## Aim:

To study and implement various types of functions in C++.  
 

## Theory:  

A **function** in C++ is a fundamental programming construct that allows you to group a sequence of instructions under a single name. By doing so, the same logical operation can be performed multiple times in a program simply by calling the function, greatly reducing code repetition and improving organization. Functions serve several key purposes: they encapsulate logic, improve readability, enable code reuse, and facilitate debugging and maintenance.  

In C++, functions can accept inputs through parameters and may return results. Functions are used for computations, data manipulation, decision-making, and even for operating on arrays and other data types. There are several ways to pass parameters to functions, namely:  
- **Call by Value:** where copies of arguments are passed, thus preserving the original data.  
- **Call by Reference:** where aliases or references to actual arguments are passed, allowing direct modifications.  
- **Call by Pointer:** where addresses of data are passed, enabling operations on the original data via memory manipulation.  

Functions can operate on simple variables, complex data structures, or arrays, and make it easy to perform repetitive or sophisticated tasks. By abstracting logic into functions, large projects can be structured as smaller, manageable modules. Proper utilization of functions in C++ also enhances security (by limiting scope), enables parameter validation, and supports efficient resource usage, especially when working with large objects or arrays.  

## Key Features:  

- Modular approach for organized and structured programming.  
- Code reusability, allowing functions to be called multiple times as needed.  
- Support for parameter passing via value, reference, and pointer.  
- Functions used for calculations, condition checks, and data manipulation.  

## 1. Call by Value  

**Explanation:**  
In call by value, copies of the actual parameters are sent to the function as formal parameters. Changes made to parameters within the function do not affect the originals, maintaining data integrity outside the function scope. This is simple and safe but less efficient for large data due to the overhead of copying.  

**Logic:**  
Pass variables to a function, swap them within, and observe that original values in main remain unchanged.  

**Algorithm:**  
1. Start.  
2. Define a function to swap two values using temporary storage.  
3. In main, declare two numbers.  
4. Call the swap function with these numbers.  
5. Display numbers in main (no change will be observed).  
6. Stop.  

## 2. Call by Reference  

**Explanation:**  
In call by reference, actual variables' references (aliases) are passed to the function. Any modification inside the function directly alters the original values. Reference passing is efficient for large data, as it skips unnecessary copying.  

**Logic:**  
Pass references to a function, swap values inside, and the original variables will be updated.  

**Algorithm:**  
1. Start.  
2. Define a function to swap two values using references.  
3. In main, declare two numbers.  
4. Call the swap function using references.  
5. Display the changed values in main.  
6. Stop.  

## 3. Call by Pointer  

**Explanation:**  
Passing pointers means sending memory addresses of variables to the function. Inside the function, dereferencing the pointers allows direct modification of the actual data. This is useful for manipulating arrays, implementing dynamic memory operations, and enabling functions to change multiple values.  

**Logic:**  
Pass variable addresses to a function, swap their values using pointer dereference, and the originals will be updated.  

**Algorithm:**  
1. Start.  
2. Define a function to swap two values using their addresses.  
3. Swap inside the function with pointer dereferencing.  
4. In main, declare two numbers.  
5. Call the function with their addresses.  
6. Display the updated numbers in main.  
7. Stop.  

## 4. Salary Increment with Conditions Using Functions  

**Explanation:**  
This example evaluates salary increment eligibility based on criteria such as project completion, publications, profits, and new initiatives. If the user meets certain conditions, a reference-based function updates their salary—otherwise, a value-based function is called, which does not affect the original variable. This highlights decision-making and the impact of parameter passing techniques.  

**Logic:**  
Input current salary and performance metrics, check which criteria are met, increment salary using reference if eligible, else increment using value.  

**Algorithm:**  
1. Start.  
2. Define two functions: update salary by reference and by value.  
3. Input current salary and required metrics.  
4. Check conditions for eligibility.  
5. If eligible, call the reference function.  
6. If not, call the value function.  
7. Display salary after increment decision.  
8. Stop.  

## 5. Change of Array Using Function  

**Explanation:**  
In this example, every element of an array is modified to begin from a specified starting value, each incremented by one. By passing the array and the variable by reference, direct modification is achieved. This demonstrates how arrays can be efficiently processed using functions.  

**Logic:**  
Pass an array and an integer reference, sequentially update array elements starting from the chosen number.  

**Algorithm:**  
1. Start.  
2. Define a function to modify array elements and increment a counter.  
3. Input starting value and original array.  
4. Display original array.  
5. Call modification function.  
6. Display updated array.  
7. Stop.  

## Conclusion:  

We explored multiple types of functions in C++, including call by value, call by reference, call by pointer, executing condition-based updates through functions, and passing arrays to functions. Each mechanism offers its own advantages in various scenarios, balancing safety, performance, and the ability to modify original data as needed. Correct use of these techniques boosts efficiency, clarity, and reliability in C++ programming.  

***

You can copy and paste the above directly into your GitHub README.
