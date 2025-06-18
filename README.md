# vSIM CALC - CLI Calculator in C (Simple)

A lightweight, user-friendly calculator written in C, designed for basic arithmetic operations (`+`, `-`, `*`, `/`). This console-based program features a decorative ASCII user interface and handles errors like division by zero and unrecognized operators.

##  Features

- Simple and clean ASCII-based UI
- Supports `+`, `-`, `*`, `/` operations
- Detects and handles division by zero
- Error message for invalid operators
- Option to perform multiple calculations in one session
- Friendly instructions for usage
- Branded footer for personalization

##  Sample Interface

```
  	+-+- -+-+- -+-+
	<<<vSIM CALC>>>
	+-+- -+-+- -+-+
  +----- INSTRUCTIONS -----+
  |                        |
  | Use operators:         |
  | +  -  * / only         |
  |                        |
  | Format:                |
  | 10 + 2 <Enter>         |
  |                        |
  | Note: Division by      |
  | zero not allowed       |
  | * To continue enter y/Y|
  | * To stop enter n      |
  +------------------------+

  >> Enter calculation: 
```

##  How to Compile & Run

1. **Save the code in a file** (e.g., `calculator.c`)
2. **Compile** using `gcc`:
   ```bash
   gcc calculator.c -o calc
   ```
3. **Run the program**:
   ```bash
   ./calc
   ```

##  Logic Behind

The calculator uses three main functions:

- `useri()` - Displays the UI and instructions.
- `calc(float one, char sign, float two)` - Processes the arithmetic based on the operator.
- `disp(...)` - Displays the result or error messages.

##  Error Handling

- **Division by Zero**: Shows a friendly error.
- **Invalid Operator**: Returns an error message if an unknown character is entered.

##  Example Usage

```
>> Enter calculation: 10 / 2

  +--- RESULT ---------+
  | Answer:            |
  | 10 / 2 = 5.0       |
  +--------------------+

  Another calculation? (y/n): y
```

##  Developed By

**Md Parvej Husen Talukder**  
Mostly known as ***Parvej Husen Talukder*** ***(Poet)***
Website: [www.parvejhusentalukder.com](http://www.parvejhusentalukder.com)

##  License

This project is licensed under the **Creative Commons Attribution 4.0 International (CC BY 4.0)** license.  
You are free to use, share, and adapt the material for any purpose, even commercially, **but you must give appropriate credit** to the original author.

### Full License Details:
[https://creativecommons.org/licenses/by/4.0/](https://creativecommons.org/licenses/by/4.0/)

### Attribution:
Author: **Md Parvej Husen Talukder**  
Website: [www.parvejhusentalukder.com](http://www.parvejhusentalukder.com)
