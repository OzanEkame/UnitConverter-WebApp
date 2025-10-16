#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Celsius conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromCelsius(double value, int query) {
    switch (query) {
        case 1: return value;                            // Celsius to Celsius
        case 2: return (value * 9.0/5.0) + 32;          // Celsius to Fahrenheit
        case 3: return value + 273.15;                   // Celsius to Kelvin
        default: return NAN;
    }
}

// Fahrenheit conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromFahrenheit(double value, int query) {
    switch (query) {
        case 1: return (value - 32) * 5.0/9.0;          // Fahrenheit to Celsius
        case 2: return value;                            // Fahrenheit to Fahrenheit
        case 3: return ((value - 32) * 5.0/9.0) + 273.15;  // Fahrenheit to Kelvin
        default: return NAN;
    }
}

// Kelvin conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromKelvin(double value, int query) {
    switch (query) {
        case 1: return value - 273.15;                   // Kelvin to Celsius
        case 2: return ((value - 273.15) * 9.0/5.0) + 32;  // Kelvin to Fahrenheit
        case 3: return value;                            // Kelvin to Kelvin
        default: return NAN;
    }
}