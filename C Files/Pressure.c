#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Conversions For Bar

EMSCRIPTEN_KEEPALIVE
double convertBar(double Bar, int query) {
    
    switch(query) {
        case 1: return Bar;                     // Bar
        case 2: return Bar * 1e+5;              // Pascal
        case 3: return Bar * 14.5038;           // Pound-force per square inch
        case 4: return Bar * 0.986923;          // Standard Atmosphere
        case 5: return Bar * 750.062;           // Torr
        default: return NAN;                    // Invalid Inquery
    }
}

// Conversions For Pascal

EMSCRIPTEN_KEEPALIVE
double convertPascal(double Pascal, int query) {

    switch(query) {
        case 1: return Pascal / 1e+5;           // Bar
        case 2: return Pascal;                  // Pascal
        case 3: return Pascal * 0.000145038;    // Pound-force per square inch
        case 4: return Pascal * 9.8692e-6;      // Standard Atmosphere
        case 5: return Pascal * 0.00750062;     // Torr
        default: return NAN;                    // Invalid Query
    }
}

// Conversions For Pound-force per square inch

EMSCRIPTEN_KEEPALIVE
double convertPoundForce(double PoundForce, int query) {

    switch(query) {
        case 1: return PoundForce * 0.0689476;      // Bar
        case 2: return PoundForce * 6894.76;        // Pascal
        case 3: return PoundForce;                  // Pound-force per square inch
        case 4: return PoundForce / 14.696;         // Standard Atmosphere
        case 5: return PoundForce * 51.7149;        // Torr
        default: return NAN;
    }
}

// Conversions For Standard Atmosphere

EMSCRIPTEN_KEEPALIVE
double convertStdATM(double StdATM, int query) {

    switch(query) {
        case 1: return StdATM * 1.01325;            // Bar
        case 2: return StdATM * 101325;             // Pascal
        case 3: return StdATM * 14.6959;            // Pound-force per square inch
        case 4: return StdATM;                      // Standard Atmosphere
        case 5: return StdATM * 760;                // Torr
        default: return NAN;                        // Invalid Query
    }
}

// Coversions For Torr

EMSCRIPTEN_KEEPALIVE
double convertTorr(double Torr, int query) {

    switch(query) {
        case 1: return Torr * 0.00133322;           // Bar
        case 2: return Torr * 133.322;              // Pascal
        case 3: return Torr / 51.715;               // Pound-force per square inch
        case 4: return Torr / 760;                  // Standard Atmosphere
        case 5: return Torr;                        // Torr
        default: return NAN;                        // Invalid Query
    }
}