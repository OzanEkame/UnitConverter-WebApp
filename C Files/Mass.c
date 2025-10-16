#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Metric ton conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMetricTon(double value, int query) {
    switch (query) {
        case 1: return value;                           // Metric ton to Metric ton
        case 2: return value * 1000;                    // Metric ton to Kilogram
        case 3: return value * 1000000;                 // Metric ton to Gram
        case 4: return value * 1000000000;              // Metric ton to Milligram
        case 5: return value * 1000000000000.0;         // Metric ton to Microgram
        case 6: return value * 0.984207;                // Metric ton to Imperial ton
        case 7: return value * 1.10231;                 // Metric ton to US ton
        case 8: return value * 157.473;                 // Metric ton to Stone
        case 9: return value * 2204.62;                 // Metric ton to Pound
        case 10: return value * 35274;                  // Metric ton to Ounce
        default: return NAN;
    }
}

// Kilogram conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromKilogram(double value, int query) {
    switch (query) {
        case 1: return value * 0.001;                   // Kilogram to Metric ton
        case 2: return value;                           // Kilogram to Kilogram
        case 3: return value * 1000;                    // Kilogram to Gram
        case 4: return value * 1000000;                 // Kilogram to Milligram
        case 5: return value * 1000000000;              // Kilogram to Microgram
        case 6: return value * 0.000984207;             // Kilogram to Imperial ton
        case 7: return value * 0.00110231;              // Kilogram to US ton
        case 8: return value * 0.157473;                // Kilogram to Stone
        case 9: return value * 2.20462;                 // Kilogram to Pound
        case 10: return value * 35.274;                 // Kilogram to Ounce
        default: return NAN;
    }
}

// Gram conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromGram(double value, int query) {
    switch (query) {
        case 1: return value * 1e-6;                    // Gram to Metric ton
        case 2: return value * 0.001;                   // Gram to Kilogram
        case 3: return value;                           // Gram to Gram
        case 4: return value * 1000;                    // Gram to Milligram
        case 5: return value * 1000000;                 // Gram to Microgram
        case 6: return value * 9.8421e-7;               // Gram to Imperial ton
        case 7: return value * 1.1023e-6;               // Gram to US ton
        case 8: return value * 0.000157473;             // Gram to Stone
        case 9: return value * 0.00220462;              // Gram to Pound
        case 10: return value * 0.035274;               // Gram to Ounce
        default: return NAN;
    }
}

// Milligram conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMilligram(double value, int query) {
    switch (query) {
        case 1: return value * 1e-9;                    // Milligram to Metric ton
        case 2: return value * 1e-6;                    // Milligram to Kilogram
        case 3: return value * 0.001;                   // Milligram to Gram
        case 4: return value;                           // Milligram to Milligram
        case 5: return value * 1000;                    // Milligram to Microgram
        case 6: return value * 9.8421e-10;              // Milligram to Imperial ton
        case 7: return value * 1.1023e-9;               // Milligram to US ton
        case 8: return value * 1.5747e-7;               // Milligram to Stone
        case 9: return value * 2.2046e-6;               // Milligram to Pound
        case 10: return value * 3.5274e-5;              // Milligram to Ounce
        default: return NAN;
    }
}

// Microgram conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMicrogram(double value, int query) {
    switch (query) {
        case 1: return value * 1e-12;                   // Microgram to Metric ton
        case 2: return value * 1e-9;                    // Microgram to Kilogram
        case 3: return value * 1e-6;                    // Microgram to Gram
        case 4: return value * 0.001;                   // Microgram to Milligram
        case 5: return value;                           // Microgram to Microgram
        case 6: return value * 9.8421e-13;              // Microgram to Imperial ton
        case 7: return value * 1.1023e-12;              // Microgram to US ton
        case 8: return value * 1.5747e-10;              // Microgram to Stone
        case 9: return value * 2.2046e-9;               // Microgram to Pound
        case 10: return value * 3.5274e-8;              // Microgram to Ounce
        default: return NAN;
    }
}

// Imperial ton conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialTon(double value, int query) {
    switch (query) {
        case 1: return value * 1.01605;                 // Imperial ton to Metric ton
        case 2: return value * 1016.05;                 // Imperial ton to Kilogram
        case 3: return value * 1.016e+6;                // Imperial ton to Gram
        case 4: return value * 1.016e+9;                // Imperial ton to Milligram
        case 5: return value * 1.016e+12;               // Imperial ton to Microgram
        case 6: return value;                           // Imperial ton to Imperial ton
        case 7: return value * 1.12;                    // Imperial ton to US ton
        case 8: return value * 160;                     // Imperial ton to Stone
        case 9: return value * 2240;                    // Imperial ton to Pound
        case 10: return value * 35840;                  // Imperial ton to Ounce
        default: return NAN;
    }
}

// US ton conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSTon(double value, int query) {
    switch (query) {
        case 1: return value * 0.907185;                // US ton to Metric ton
        case 2: return value * 907.185;                 // US ton to Kilogram
        case 3: return value * 907185;                  // US ton to Gram
        case 4: return value * 9.072e+8;                // US ton to Milligram
        case 5: return value * 9.072e+11;               // US ton to Microgram
        case 6: return value * 0.892857;                // US ton to Imperial ton
        case 7: return value;                           // US ton to US ton
        case 8: return value * 142.857;                 // US ton to Stone
        case 9: return value * 2000;                    // US ton to Pound
        case 10: return value * 32000;                  // US ton to Ounce
        default: return NAN;
    }
}

// Stone conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromStone(double value, int query) {
    switch (query) {
        case 1: return value * 0.00635029;              // Stone to Metric ton
        case 2: return value * 6.35029;                 // Stone to Kilogram
        case 3: return value * 6350.29;                 // Stone to Gram
        case 4: return value * 6.35e+6;                 // Stone to Milligram
        case 5: return value * 6.35e+9;                 // Stone to Microgram
        case 6: return value * 0.00625;                 // Stone to Imperial ton
        case 7: return value * 0.007;                   // Stone to US ton
        case 8: return value;                           // Stone to Stone
        case 9: return value * 14;                      // Stone to Pound
        case 10: return value * 224;                    // Stone to Ounce
        default: return NAN;
    }
}

// Pound conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromPound(double value, int query) {
    switch (query) {
        case 1: return value * 0.000453592;             // Pound to Metric ton
        case 2: return value * 0.453592;                // Pound to Kilogram
        case 3: return value * 453.592;                 // Pound to Gram
        case 4: return value * 453592;                  // Pound to Milligram
        case 5: return value * 4.536e+8;                // Pound to Microgram
        case 6: return value * 0.000446429;             // Pound to Imperial ton
        case 7: return value * 0.0005;                  // Pound to US ton
        case 8: return value * 0.0714286;               // Pound to Stone
        case 9: return value;                           // Pound to Pound
        case 10: return value * 16;                     // Pound to Ounce
        default: return NAN;
    }
}

// Ounce conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromOunce(double value, int query) {
    switch (query) {
        case 1: return value * 2.835e-5;                // Ounce to Metric ton
        case 2: return value * 0.0283495;               // Ounce to Kilogram
        case 3: return value * 28.3495;                 // Ounce to Gram
        case 4: return value * 28349.5;                 // Ounce to Milligram
        case 5: return value * 2.835e+7;                // Ounce to Microgram
        case 6: return value * 2.7902e-5;               // Ounce to Imperial ton
        case 7: return value * 3.125e-5;                // Ounce to US ton
        case 8: return value * 0.00446429;              // Ounce to Stone
        case 9: return value * 0.0625;                  // Ounce to Pound
        case 10: return value;                          // Ounce to Ounce
        default: return NAN;
    }
}