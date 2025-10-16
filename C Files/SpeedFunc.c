#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Conversion For Mile per hour

EMSCRIPTEN_KEEPALIVE
double convertMilePerHour(double MPH, int query) {

    switch(query) {
        case 1: return MPH;                    // MPH
        case 2: return MPH * 1.60934;          // Kilometer per hour
        case 3: return MPH * 1.46667;          // Foot per second
        case 4: return MPH * 0.44704;          // Meter per second
        case 5: return MPH * 0.868976;         // Knot
        default: return NAN;                   // Invalid Query
    }
}

// Conversion For Kilometer per hour

EMSCRIPTEN_KEEPALIVE
double convertKilometerPerHour(double KPH, int query) {

    switch(query) {
        case 1: return KPH * 0.621371;         // Mile per hour
        case 2: return KPH;                    // KPH
        case 3: return KPH * 0.911344;         // Foot per second
        case 4: return KPH * 0.277778;         // Meter per second
        case 5: return KPH * 0.539957;         // Knot
        default: return NAN;                   // Invalid Query
    }
}

// Conversion For Foot per second

EMSCRIPTEN_KEEPALIVE
double convertFootPerSecond(double FPS, int query) {

    switch(query) {
        case 1: return FPS * 0.682;            // Mile per hour
        case 2: return FPS * 1.09728;          // Kilometer per hour
        case 3: return FPS;                    // FPS
        case 4: return FPS * 0.3048;           // Meter per second
        case 5: return FPS * 0.592484;         // Knot
        default: return NAN;                   // Invalid Query
    }
}

// Conversion For Meter per second

EMSCRIPTEN_KEEPALIVE
double convertMeterPerSecond(double MPS, int query) {

    switch(query) {
        case 1: return MPS * 2.23694;          // Mile per hour
        case 2: return MPS * 3.6;              // Kilometer per hour
        case 3: return MPS * 3.28084;          // Foot per second
        case 4: return MPS;                    // MPS
        case 5: return MPS * 1.94384;          // Knot
        default: return NAN;                   // Invalid Query
    }
}

// Conversion For Knot

EMSCRIPTEN_KEEPALIVE
double convertKnot(double Knot, int query) {

    switch(query) {
        case 1: return Knot * 1.15078;         // Mile per hour
        case 2: return Knot * 1.852;           // Kilometer per hour
        case 3: return Knot * 1.68781;         // Foot per second
        case 4: return Knot * 0.514444;        // Meter per second
        case 5: return Knot;                   // Knot
        default: return NAN;                   // Invalid Query
    }
}
