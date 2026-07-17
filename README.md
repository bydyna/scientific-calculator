# Scientific Calculator (C++)
The Scientific Calculator is a simple C++ console application that performs **basic arithmetic** and **scientific calculations**. The user selects an operation from the menu, enters the required values, and the program calculates and displays the result using separate functions for each operation.

# Technologies Used
- C++
- Visual Studio Code
- C++ Standard Library (iostream, cmath)

# Concepts Used
- Functions - Created separate functions for addition, subtraction, multiplication, division, square root, power, sine, and cosine.
- Return - Each function uses the return statement to send the calculated result back to the main() function.
- Scope - Variables used for user input exist only within their respective case blocks, while function parameters are only accessible inside their corresponding functions.
- Switch Statement - Used to execute the selected mathematical operation based on the user's menu choice.
- Input Validation - Prevented division by zero and square roots of negative numbers by displaying error messages.
- Math Library (cmath) - Used built-in functions such as sqrt(), pow(), sin(), and cos() to perform scientific calculations.

# The Process
- Displayed a menu containing available mathematical operations.
- Asked the user to choose an operation.
- Accepted the required input values.
- Used a switch statement to determine which function to call.
- Performed the selected calculation.
- Returned the result to the main() function.
- Displayed the answer to the user.
- Displayed an error message for invalid menu choices or invalid mathematical operations.

# Challenges Faced
- Handling division by zero without causing the program to crash.
- Preventing invalid square root calculations for negative numbers.
- Converting angles from degrees to radians before using the sin() and cos() functions.
- Organizing the program into separate functions while avoiding repetitive code.

# How It Could Be Improved
- Allow users to perform multiple calculations without restarting the program.
- Add more scientific functions such as tangent, logarithms, factorial, and natural logarithms.
- Improve input validation for non-numeric input.
- Replace the repeated input code with reusable helper functions.

# How to Run the Project
- Step 1: Open the project in Visual Studio Code or any C++ IDE.
- Step 2: Compile the program using a C++ compiler.
- Step 3: Run the program.
- Step 4: Select the mathematical operation you want to perform.
- Step 5: Enter the required value(s).
- Step 6: View the calculated result.

# Sample Output
![image alt](https://github.com/bydyna/scientific-calculator/blob/dff61640395943ae4c09701d1fc1808557c1d96c/Screenshot%202026-07-17%20224650.png)
![image_alt](https://github.com/bydyna/scientific-calculator/blob/dff61640395943ae4c09701d1fc1808557c1d96c/Screenshot%202026-07-17%20224723.png)
![image_alt](https://github.com/bydyna/scientific-calculator/blob/dff61640395943ae4c09701d1fc1808557c1d96c/Screenshot%202026-07-17%20224757.png)
