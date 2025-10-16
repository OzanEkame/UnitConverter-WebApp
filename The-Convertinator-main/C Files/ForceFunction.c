#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Conversion For Newton

EMSCRIPTEN_KEEPALIVE
double convertNewton(double Newton, int query) {
    switch(query) {
        case 1: return Newton * 1.0;            // Newton
        case 2: return Newton * 1e+5;           // Dyne
        case 3: return Newton * 0.101971621;    // Kilogram-force
        case 4: return Newton * 0.000224809;    // Kip
        case 5: return Newton * 0.001;          // Kilonewton
        case 6: return Newton * 3.5969431;      // Ounce-force
        case 7: return Newton * 7.23301385;     // Poundal
        case 8: return Newton * 0.224808943;    // Pound-force
        case 9: return Newton * 0.000100361;    // Ton-force
        default: return NAN;                    // Invalid Query
    }
}

// Conversion For Dyne

EMSCRIPTEN_KEEPALIVE
double convertDyne(double Dyne, int query) {

    switch(query) {
        case 1: return Dyne * 1e-5;             // Newton
        case 2: return Dyne * 1;                // Dyne
        case 3: return Dyne * 1.42198e-6;       // Kilogram-force
        case 4: return Dyne * 7.23301e-7;       // Kip
        case 5: return Dyne * 1.0e-3;           // Kilonewton
        case 6: return Dyne * 9.2903e-5;        // Ounce-force
        case 7: return Dyne * 7.0e-5;           // Poundal
        case 8: return Dyne * 2.2481e-5;        // Pound-force
        case 9: return Dyne * 4.53592e-6;       // Ton-force
        default: return NAN;                    // Invalid Query
    }
}

// Conversion For Kilogram-force

EMSCRIPTEN_KEEPALIVE
double convertKilogramForce(double kgf, int query) {
    switch(query) {
        case 1: return kgf * 9.80665;          // Newton
        case 2: return kgf * 9.80665e+5;       // Dyne
        case 3: return kgf * 1.0;              // Kilogram-force
        case 4: return kgf * 0.0044482216;     // Kip
        case 5: return kgf * 0.00980665;       // Kilonewton
        case 6: return kgf * 35.27396;         // Ounce-force
        case 7: return kgf * 72.3301385;       // Poundal
        case 8: return kgf * 2.2046226218;     // Pound-force
        case 9: return kgf * 0.0011023113;     // Ton-force
        default: return NAN;                   // Invalid Query
    }
}


// Conversion For Kip

EMSCRIPTEN_KEEPALIVE
double convertKip(double Kip, int query) {
    switch(query) {
        case 1: return Kip * 4448.2216;        // Newton
        case 2: return Kip * 4.4482216e+7;     // Dyne
        case 3: return Kip * 453.59237;        // Kilogram-force
        case 4: return Kip * 1.0;              // Kip
        case 5: return Kip * 4.4482216;        // Kilonewton
        case 6: return Kip * 71169.16;         // Ounce-force
        case 7: return Kip * 32068.932;        // Poundal
        case 8: return Kip * 1000.0;           // Pound-force
        case 9: return Kip * 0.5;              // Ton-force
        default: return NAN;                   // Invalid Query
    }
}

// Conversion For Kilonewton

EMSCRIPTEN_KEEPALIVE
double convertKilonewton(double kN, int query) {
    switch(query) {
        case 1: return kN * 1000.0;            // Newton
        case 2: return kN * 1e8;               // Dyne
        case 3: return kN * 101.971621;        // Kilogram-force
        case 4: return kN * 0.224809;          // Kip
        case 5: return kN * 1.0;               // Kilonewton
        case 6: return kN * 3596.9431;         // Ounce-force
        case 7: return kN * 7233.01385;        // Poundal
        case 8: return kN * 224.808943;        // Pound-force
        case 9: return kN * 0.100361;          // Ton-force
        default: return NAN;                   // Invalid Query
    }
}

// Conversion For Ounce-force


EMSCRIPTEN_KEEPALIVE
double convertOunceForce(double ounceForce, int query) {
    switch(query) {
        case 1: return ounceForce * 0.2780139;          // Newton
        case 2: return ounceForce * 2780.139;           // Dyne
        case 3: return ounceForce * 0.0276799;          // Kilogram-force
        case 4: return ounceForce * 1.259e-5;           // Kip
        case 5: return ounceForce * 2.780139e-5;        // Kilonewton
        case 6: return ounceForce * 1.0;                // Ounce-force
        case 7: return ounceForce * 2.0312365;          // Poundal
        case 8: return ounceForce * 0.0625;             // Pound-force
        case 9: return ounceForce * 4.464e-5;           // Ton-force
        default: return NAN;                            // Invalid Query
    }
}

// Conversion For Poundal

EMSCRIPTEN_KEEPALIVE
double convertPoundal(double poundal, int query) {
    switch(query) {
        case 1: return poundal * 0.138255;           // Newton
        case 2: return poundal * 1382.55;            // Dyne
        case 3: return poundal * 0.0145939;          // Kilogram-force
        case 4: return poundal * 6.2429e-6;          // Kip
        case 5: return poundal * 1.38255e-5;         // Kilonewton
        case 6: return poundal * 0.492278;           // Ounce-force
        case 7: return poundal * 1.0;                // Poundal
        case 8: return poundal * 0.0276799;          // Pound-force
        case 9: return poundal * 4.464e-6;           // Ton-force
        default: return NAN;                         // Invalid Query
    }
}

// Conversion For Pound-force

EMSCRIPTEN_KEEPALIVE
double convertPoundForce(double poundForce, int query) {
    switch(query) {
        case 1: return poundForce * 4.44822;             // Newton
        case 2: return poundForce * 4.44822e4;           // Dyne
        case 3: return poundForce * 0.453592;            // Kilogram-force
        case 4: return poundForce * 0.000444822;         // Kip
        case 5: return poundForce * 0.00444822;          // Kilonewton
        case 6: return poundForce * 16.0;                // Ounce-force
        case 7: return poundForce * 35.27396;            // Poundal
        case 8: return poundForce * 1.0;                 // Pound-force
        case 9: return poundForce * 4.464e-5;            // Ton-force
        default: return NAN;                             // Invalid Query
    }
}

// Conversion For Ton-force

EMSCRIPTEN_KEEPALIVE
double convertTonForce(double tonForce, int query) {
    switch(query) {
        case 1: return tonForce * 8.89644e3;             // Newton
        case 2: return tonForce * 8.89644e5;             // Dyne
        case 3: return tonForce * 907.18474;             // Kilogram-force
        case 4: return tonForce * 2.0;                   // Kip
        case 5: return tonForce * 0.0894644;             // Kilonewton
        case 6: return tonForce * 32000.0;               // Ounce-force
        case 7: return tonForce * 64478.8;               // Poundal
        case 8: return tonForce * 2248.222;              // Pound-force
        case 9: return tonForce * 1.0;                   // Ton-force
        default: return NAN;                             // Invalid Query
    }
}