#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

#define PI 3.14159265358979323846

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.


// Degrees conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromDegrees(double value, int query) {
    switch (query) {
        case 1: return value;                            // Degrees to Degrees
        case 2: return value * (PI / 180.0);             // Degrees to Radians
        case 3: return value * 3600;                     // Degrees to Arcsecond
        case 4: return value * 1.111111;                 // Degrees to Gradian
        case 5: return value * 17.777777778;             // Degrees to Milliradian
        case 6: return value * 60;                       // Degrees to Minute of arc
        default: return NAN;
    }
}

// Radians conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromRadians(double value, int query) {
    switch (query) {
        case 1: return value * (180.0 / PI);             // Radians to Degrees
        case 2: return value;                            // Radians to Radians
        case 3: return value * 206264.806;               // Radians to Arcsecond
        case 4: return value * 63.661977236;             // Radians to Gradian
        case 5: return value * 1000;                     // Radians to Milliradian
        case 6: return value * 3437.746771;              // Radians to Minute of arc
        default: return NAN;
    }
}

// Arcsecond conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromArcsecond(double value, int query) {
    switch (query) {
        case 1: return value * (1.0 / 3600.0);           // Arcsecond to Degrees
        case 2: return value * (PI / (180.0 * 3600.0));  // Arcsecond to Radians
        case 3: return value;                            // Arcsecond to Arcsecond
        case 4: return value * 0.0003086;                // Arcsecond to Gradian
        case 5: return value * 0.004848;                 // Arcsecond to Milliradian
        case 6: return value * (1.0 / 60.0);             // Arcsecond to Minute of arc
        default: return NAN;
    }
}

// Gradian conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromGradian(double value, int query) {
    switch (query) {
        case 1: return value * 0.9;                      // Gradian to Degrees
        case 2: return value * (PI / 200.0);             // Gradian to Radians
        case 3: return value * 3240;                     // Gradian to Arcsecond
        case 4: return value;                            // Gradian to Gradian
        case 5: return value * 15.707963268;             // Gradian to Milliradian
        case 6: return value * 54;                       // Gradian to Minute of arc
        default: return NAN;
    }
}

// Milliradian conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMilliradian(double value, int query) {
    switch (query) {
        case 1: return value * 0.0572958;                // Milliradian to Degrees
        case 2: return value * 0.001;                    // Milliradian to Radians
        case 3: return value * 206.2648062;              // Milliradian to Arcsecond
        case 4: return value * 0.0636620;                // Milliradian to Gradian
        case 5: return value;                            // Milliradian to Milliradian
        case 6: return value * 3.437746771;              // Milliradian to Minute of arc
        default: return NAN;
    }
}

// Minute of arc conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMinuteOfArc(double value, int query) {
    switch (query) {
        case 1: return value * (1.0 / 60.0);             // Minute of arc to Degrees
        case 2: return value * (PI / (180.0 * 60.0));    // Minute of arc to Radians
        case 3: return value * 60;                       // Minute of arc to Arcsecond
        case 4: return value * 0.018519;                 // Minute of arc to Gradian
        case 5: return value * 0.290888;                 // Minute of arc to Milliradian
        case 6: return value;                            // Minute of arc to Minute of arc
        default: return NAN;
    }
}