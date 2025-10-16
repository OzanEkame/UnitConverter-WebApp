#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Conversions For Square Kilometer

EMSCRIPTEN_KEEPALIVE
double convertSquareKilo(double SquareKilo, int query) {
    switch(query) {
        case 1: return SquareKilo;                     // Square Kilometer
        case 2: return SquareKilo * 1e+6;              // Squaremeter
        case 3: return SquareKilo * 0.386102;          // Squaremile
        case 4: return SquareKilo * 1.19599e+6;        // Squareyard
        case 5: return SquareKilo * 1.076391e+7;       // Squarefoot
        case 6: return SquareKilo * 1.55e+9;           // Squareinch
        case 7: return SquareKilo * 100;               // Hectare
        case 8: return SquareKilo * 247.105;           // Acre
        default: return NAN;                           // Invalid query
    }
}

//Conversions For Square Meter

EMSCRIPTEN_KEEPALIVE
double convertSquareMeter(double SquareMeter, int query) {
    switch(query) {
        case 1: return SquareMeter * 1e-6;            // Squarekilometer
        case 2: return SquareMeter;                   // SquareMeter
        case 3: return SquareMeter * 3.861e-7;        // Squaremile
        case 4: return SquareMeter * 1.19599;         // Squareyard
        case 5: return SquareMeter * 10.76391;        // Squarefoot
        case 6: return SquareMeter * 1550.003;        // Squareinch
        case 7: return SquareMeter * 0.0001;          // Hectare
        case 8: return SquareMeter * 0.000247105;     // Acre
        default: return NAN;                          // Invalid query
    }
}

// Conversions For Square Mile

EMSCRIPTEN_KEEPALIVE
double convertSquareMile(double SquareMile, int query) {
    switch(query) {
        case 1: return SquareMile * 2.58999e+6;       // Squaremeter
        case 2: return SquareMile * 2.58999;          // Squarekilometer
        case 3: return SquareMile;                    // SquareMile
        case 4: return SquareMile * 3.0976e+6;        // Squareyard
        case 5: return SquareMile * 2.78784e+7;       // Squarefoot
        case 6: return SquareMile * 4.01449e+9;       // Squareinch
        case 7: return SquareMile * 258.99881;        // Hectare
        case 8: return SquareMile * 640;              // Acre
        default: return NAN;                          // Invalid query
    }
}

// Conversions For Yard

EMSCRIPTEN_KEEPALIVE
double convertSquareYard(double SquareYard, int query) {
    switch(query) {
        case 1: return SquareYard * 0.836127;          // Squaremeter
        case 2: return SquareYard * 8.3613e-7;         // Squarekilometer
        case 3: return SquareYard * 3.2296e-7;         // Squaremile
        case 4: return SquareYard;                     // Square Yard
        case 5: return SquareYard * 9;                 // Squarefoot
        case 6: return SquareYard * 1296;              // Squareinch
        case 7: return SquareYard * 8.36127e-5;        // Hectare
        case 8: return SquareYard * 0.00020661157;     // Acre
        default: return NAN;                           // Invalid query
    }
}

// Conversions For Square Foot

EMSCRIPTEN_KEEPALIVE
double convertSquareFoot(double SquareFoot, int query) {
    switch(query) {
        case 1: return SquareFoot * 0.092903;          // Squaremeter
        case 2: return SquareFoot * 9.2903e-8;         // Squarekilometer
        case 3: return SquareFoot * 3.587e-8;          // Squaremile
        case 4: return SquareFoot * 0.111111;          // Squareyard
        case 5: return SquareFoot;                     // Square Foot
        case 6: return SquareFoot * 144;               // Squareinch
        case 7: return SquareFoot * 9.2903e-6;         // Hectare
        case 8: return SquareFoot * 2.2957e-5;         // Acre
        default: return NAN;                           // Invalid query
    }
}

// Conversions For Square Inch

EMSCRIPTEN_KEEPALIVE
double convertSquareInch(double SquareInch, int query) {
    switch(query) {
        case 1: return SquareInch * 0.00064516;        // Squaremeter
        case 2: return SquareInch * 6.4516e-10;        // Squarekilometer
        case 3: return SquareInch * 2.49098e-10;       // Squaremile
        case 4: return SquareInch * 0.000771605;       // Squareyard
        case 5: return SquareInch * 0.00694444;        // Squarefoot
        case 6: return SquareInch;                     // SquareInch
        case 7: return SquareInch * 6.4516e-8;         // Hectare
        case 8: return SquareInch * 1.5942e-7;         // Acre
        default: return NAN;                           // Invalid query
    }
}

// Conversions For Hectare

EMSCRIPTEN_KEEPALIVE
double convertHectare(double Hectare, int query) {
    switch(query) {
        case 1: return Hectare * 10000;                // Squaremeter
        case 2: return Hectare * 0.01;                 // Squarekilometer
        case 3: return Hectare * 0.00386102;           // Squaremile
        case 4: return Hectare * 11959.9;              // Squareyard
        case 5: return Hectare * 107639.104;           // Squarefoot
        case 6: return Hectare * 1.55e+7;              // Squareinch
        case 7: return Hectare;                        // Hectare
        case 8: return Hectare * 2.47105;              // Acre
        default: return NAN;                           // Invalid query
    }
}

// Conversions For Acre

EMSCRIPTEN_KEEPALIVE
double convertAcre(double Acre, int query) {
    switch(query) {
        case 1: return Acre * 4046.86;                // Squaremeter
        case 2: return Acre * 0.00404686;             // Squarekilometer
        case 3: return Acre * 0.0015625;              // Squaremile
        case 4: return Acre * 4840;                   // Squareyard
        case 5: return Acre * 43560;                  // Squarefoot
        case 6: return Acre * 6272640;                // Squareinch
        case 7: return Acre * 0.404686;               // Hectare
        case 8: return Acre;                          // Acre
        default: return NAN;                          // Invalid query
    }
}