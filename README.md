# Final Project for "Dasar Pemrograman"

## Group Identity
Group: **3**

| No | Name | Student ID | Study Program |
|----|------|-------------|----------------|
| 1  | Sabina Cheerly Nadapdap | …………… | …………… |
| 2  | Benjamin Cassius iwan | …………… | …………… |
| 3  | Narendra Andhi Putra Pratama | …………… | …………… |

**Lecturer:** 

---

## Project Description

This program is a C-based application developed as the Final Project for the **Basic Programming** course at Institut Teknologi Sepuluh Nopember. The application functions as an **Electrical Calculator Kit**, offering a collection of electrical calculation tools and number conversion utilities.

The main features of the application include:

1. **Electrical Calculations**, such as:
   - Ohm’s Law (voltage, current, resistance)
   - Electrical power calculation
   - Series resistance total calculation
   - Parallel resistance total calculation

2. **Number Conversions**, including:
   - Decimal to binary
   - Decimal to octal
   - Octal to decimal
   - Hexadecimal to decimal

All inputs are validated to prevent errors, ensuring the program runs safely and reliably.

---

## Project Objective

This project is created to fulfill the final task of the **Basic Programming** course, with the following goals:

- Implement basic programming concepts in the C language.
- Develop a modular, menu-based interactive application.
- Apply control structures, functions, input validation, and arithmetic operations.
- Build a practical program useful particularly in the field of electrical engineering.

---

## Program Menu Structure

### Main Menu
1. **Circuits Calculator**
2. **Number Conversion Calculator**
0. **Exit**

### Circuits Calculator Menu
1. Ohm’s Law  
2. Machine 22 (placeholder)  
3. Machine 23 (placeholder)  
4. Machine 24 (placeholder)

### Number Conversion Calculator Menu
1. Decimal to Other Forms
2. Machine 32 (placeholder)
3. Octal to Decimal  
4. Hexadecimal to Decimal

### Decimal to Other Forms Menu
1. Decimal to Binary  
2. Decimal to Octal  
3. Decimal to Hexadecimal (not yet implemented)

---

# Function Documentation

## 1. `clearScreen()`
Clears the terminal screen for a cleaner program interface.  
- On Windows → `cls`  
- On Linux/Mac → `clear`

---

## 2. Electrical Calculation Functions

### a. `ohmsLaw()`
Used to calculate:
- **Voltage** (V = I × R)  
- **Current** (I = V / R)  
- **Resistance** (R = V / I)

Features:
- Full input validation (no negative current or resistance values).  
- Handles special cases such as short circuit (R = 0) and open circuit (I = 0).  
- Displays results clearly with proper formatting.

---

### b. `power()`
Calculates **electrical power (P = V × I)**.  
Inputs include voltage (Volts) and current (Amperes).  
Input validation ensures only valid numeric inputs are processed.

---

### c. `series()`
Calculates **total series resistance** by summing all resistors:  
R_total = R1 + R2 + … + Rn

Features:
- Accepts the number of resistors.  
- Allows entering multiple resistor values.  
- Prevents invalid inputs such as a non-positive number of resistors.

---

### d. `parallel()`
Calculates **total parallel resistance**:

1/R_total = 1/R1 + 1/R2 + … + 1/Rn

Features:
- Processes an array of resistor values.  
- Prevents division by zero through proper input validation.

---

## 3. Number Conversion Functions

### a. `decToBin()`
Converts a decimal number to **binary**:
- Uses a remainder array to store computed bits.  
- Prints bits in reverse order for correct binary representation.  
- Handles zero input properly.

---

### b. `decToOct()`
Converts a decimal number to **octal**:
- Uses repeated division by 8.  
- Handles zero input and invalid values.

---

### c. `octToDec()`
Converts an octal number to decimal:
- Strict validation ensures digits do not exceed 7.  
- Computes values based on digit position and powers of 8.

---

### d. `hexToDec()`
Converts a hexadecimal number to decimal:
- Accepts digits 0–9, A–F, and a–f.  
- Converts characters into their numeric values.  
- Rejects invalid characters outside base-16 rules.

---

## Compilation and Execution

### Compile
```bash
gcc main.c -o electrical_calculator
```

### Run
```bash
./electrical_calculator.exe
```

## Sample Output
```bash

```