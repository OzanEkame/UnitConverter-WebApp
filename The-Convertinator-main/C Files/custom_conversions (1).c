#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAX_LENGTH 256

// Function to perform the arithmetic operations

// to do, skip space, digits or operators, or x
double evaluate(char* expr, double x_value) {
    int i = 0;
    double result = 0;
    double currentNumber = 0;
    char currentOp = '+';

    while (expr[i] != '\0') { //null terminator at the end
        if (expr[i] == 'x') {
            currentNumber = x_value;  //take in the value of x
            i++;  
        } else if (isdigit(expr[i]) || expr[i] == '.') {
            // Collect the number
            char numBuffer[MAX_LENGTH];
            int numIndex = 0;

            // Handle possible decimal points
            while (isdigit(expr[i]) || expr[i] == '.') {
                numBuffer[numIndex++] = expr[i++];
            }
            numBuffer[numIndex] = '\0';

            currentNumber = atof(numBuffer); // converting a string to a double
        }

        // Apply the previous operator to the current number
        if (currentOp == '+') {
            result += currentNumber;
        } else if (currentOp == '-') {
            result -= currentNumber;
        } else if (currentOp == '*') {
            result *= currentNumber;
        } else if (currentOp == '/') {
            if (currentNumber == 0) {
                return NAN;  // Return 0 in case of error
            }
            result /= currentNumber;
        }

        // Check if it's an operator
        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
            currentOp = expr[i++];
        } else {
            i++;
        }
    }

    return result;
}

