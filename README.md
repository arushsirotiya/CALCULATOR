# CALCULATOR
CALCULATOR

# Description
This is a simple command-line calculator program written in C. It provides various mathematical operations that users can perform by selecting options from a menu.

# Features
- **Square**: Calculates the square of a number
- **Factorial**: Computes the factorial of a number
- **Odd/Even Check**: Determines if a number is odd or even
- **Basic Arithmetic**:
  - Addition of two numbers
  - Subtraction of two numbers
  - Multiplication of two numbers
  - Division (quotient)
  - Remainder calculation
- **Exponentiation**: Calculates a^b (a raised to the power of b)
- **Exit**: Option to quit the program

# How to Use
1. Compile the program using a C compiler (e.g., gcc):
   ```
   gcc calculator.c -o calculator -lm
   ```
   (Note: The `-lm` flag links the math library)

2. Run the executable:
   ```
   ./calculator
   ```

3. Follow the on-screen instructions:
   - Select an operation by entering the corresponding number
   - Input the required number(s) when prompted
   - View the result

# Requirements
- A C compiler (GCC recommended)
- Standard C library
- Math library (included with most C implementations)

# Notes
- The program handles integer inputs for factorial and odd/even operations
- For other operations, it accepts floating-point numbers
- The program will exit after performing one operation (it doesn't loop)

# Example Usage
```
CALCULATOR 
------------------------------------------------------------------------- 
 1. Square 
 2. Factorial 
 3. Find Odd or Even 
 4. Sum Of Two Numbers 
 5. Difference Of Two Numbers 
 6. Product Of Two Numbers 
 7. Quotient 
 8. Remainder 
 9. a^b 
 10. Exit 
 Enter your Choice: 4

 Enter The First Number: 5.5

 Enter The Second Number: 3.2
The Sum Of The Two Numbers is 8.700000
```
