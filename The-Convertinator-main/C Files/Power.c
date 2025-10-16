#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Milliwatt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMilliwatt(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value;                            // Milliwatt to Milliwatt
        case 2: return value / 1000;                     // Milliwatt to Watt
        case 3: return value * 1e-6;                     // Milliwatt to Kilowatt
        case 4: return value * 1e-9;                     // Milliwatt to Megawatt
        case 5: return value * 1e-12;                    // Milliwatt to Gigawatt
        case 6: return 10 * log10(value);                // Milliwatt to Decibel-milliwatt
        case 7: return 10 * log10(value / 1000);         // Milliwatt to Decibel-watt
        case 8: return value / 745700;                   // Milliwatt to Mechanical Horsepower
        case 9: return value / 746000;                   // Milliwatt to Electric Horsepower
        case 10: return value * 3.412141e-3;             // Milliwatt to BTU/hr
        case 11: return value * 1e-3;                    // Milliwatt to Joules per second
        case 12: return value * 1e-3;                    // Milliwatt to Volt Amperes
        default: return NAN;
    }
}

// Watt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromWatt(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 1000;                     // Watt to Milliwatt
        case 2: return value;                            // Watt to Watt
        case 3: return value / 1000;                     // Watt to Kilowatt
        case 4: return value * 1e-6;                     // Watt to Megawatt
        case 5: return value * 1e-9;                     // Watt to Gigawatt
        case 6: return 10 * log10(value * 1000);         // Watt to Decibel-milliwatt
        case 7: return 10 * log10(value);                // Watt to Decibel-watt
        case 8: return value / 745.7;                    // Watt to Mechanical Horsepower
        case 9: return value / 746;                      // Watt to Electric Horsepower
        case 10: return value * 3.412141;                // Watt to BTU/hr
        case 11: return value;                           // Watt to Joules per second
        case 12: return value;                           // Watt to Volt Amperes
        default: return NAN;
    }
}

// Kilowatt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromKilowatt(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 1e+6;                     // Kilowatt to Milliwatt
        case 2: return value * 1000;                     // Kilowatt to Watt
        case 3: return value;                            // Kilowatt to Kilowatt
        case 4: return value / 1000;                     // Kilowatt to Megawatt
        case 5: return value * 1e-6;                     // Kilowatt to Gigawatt
        case 6: return 10 * log10(value * 1e+6);         // Kilowatt to Decibel-milliwatt
        case 7: return 10 * log10(value * 1000);         // Kilowatt to Decibel-watt
        case 8: return value / 0.7457;                   // Kilowatt to Mechanical Horsepower
        case 9: return value / 0.746;                    // Kilowatt to Electric Horsepower
        case 10: return value * 3412.141;                // Kilowatt to BTU/hr
        case 11: return value * 1000;                    // Kilowatt to Joules per second
        case 12: return value * 1000;                    // Kilowatt to Volt Amperes
        default: return NAN;
    }
}

// Megawatt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMegawatt(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 1e+9;                     // Megawatt to Milliwatt
        case 2: return value * 1e+6;                     // Megawatt to Watt
        case 3: return value * 1000;                     // Megawatt to Kilowatt
        case 4: return value;                            // Megawatt to Megawatt
        case 5: return value / 1000;                     // Megawatt to Gigawatt
        case 6: return 10 * log10(value * 1e+9);         // Megawatt to Decibel-milliwatt
        case 7: return 10 * log10(value * 1e+6);         // Megawatt to Decibel-watt
        case 8: return value / 7.457e-4;                 // Megawatt to Mechanical Horsepower
        case 9: return value / 7.46e-4;                  // Megawatt to Electric Horsepower
        case 10: return value * 3412141;                 // Megawatt to BTU/hr
        case 11: return value * 1e+6;                    // Megawatt to Joules per second
        case 12: return value * 1e+6;                    // Megawatt to Volt Amperes
        default: return NAN;
    }
}

// Gigawatt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromGigawatt(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 1e+12;                    // Gigawatt to Milliwatt
        case 2: return value * 1e+9;                     // Gigawatt to Watt
        case 3: return value * 1e+6;                     // Gigawatt to Kilowatt
        case 4: return value * 1000;                     // Gigawatt to Megawatt
        case 5: return value;                            // Gigawatt to Gigawatt
        case 6: return 10 * log10(value * 1e+12);        // Gigawatt to Decibel-milliwatt
        case 7: return 10 * log10(value * 1e+9);         // Gigawatt to Decibel-watt
        case 8: return value / 7.457e-7;                 // Gigawatt to Mechanical Horsepower
        case 9: return value / 7.46e-7;                  // Gigawatt to Electric Horsepower
        case 10: return value * 3.412141e+6;             // Gigawatt to BTU/hr
        case 11: return value * 1e+9;                    // Gigawatt to Joules per second
        case 12: return value * 1e+9;                    // Gigawatt to Volt Amperes
        default: return NAN;
    }
}

// Decibel-milliwatt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromDbm(double value, int query) {
    double mw = pow(10, value/10);

    switch (query) {
        case 1: return mw;                               // dBm to Milliwatt
        case 2: return mw / 1000;                        // dBm to Watt
        case 3: return mw * 1e-6;                        // dBm to Kilowatt
        case 4: return mw * 1e-9;                        // dBm to Megawatt
        case 5: return mw * 1e-12;                       // dBm to Gigawatt
        case 6: return value;                            // dBm to Decibel-milliwatt
        case 7: return value - 30;                       // dBm to Decibel-watt
        case 8: return mw / 745700;                      // dBm to Mechanical Horsepower
        case 9: return mw / 746000;                      // dBm to Electric Horsepower
        case 10: return mw * 3.412141e-3;                // dBm to BTU/hr
        case 11: return mw * 1e-3;                       // dBm to Joules per second
        case 12: return mw * 1e-3;                       // dBm to Volt Amperes
        default: return NAN;
    }
}

// Decibel-watt conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromDbw(double value, int query) {
    double w = pow(10, value/10);

    switch (query) {
        case 1: return w * 1000;                         // dBW to Milliwatt
        case 2: return w;                                // dBW to Watt
        case 3: return w / 1000;                         // dBW to Kilowatt
        case 4: return w * 1e-6;                         // dBW to Megawatt
        case 5: return w * 1e-9;                         // dBW to Gigawatt
        case 6: return value + 30;                       // dBW to Decibel-milliwatt
        case 7: return value;                            // dBW to Decibel-watt
        case 8: return w / 745.7;                        // dBW to Mechanical Horsepower
        case 9: return w / 746;                          // dBW to Electric Horsepower
        case 10: return w * 3.412141;                    // dBW to BTU/hr
        case 11: return w;                               // dBW to Joules per second
        case 12: return w;                               // dBW to Volt Amperes
        default: return NAN;
    }
}

// Mechanical Horsepower conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMechHp(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 745700;                   // MHP to Milliwatt
        case 2: return value * 745.7;                    // MHP to Watt
        case 3: return value * 0.7457;                   // MHP to Kilowatt
        case 4: return value * 7.457e-4;                 // MHP to Megawatt
        case 5: return value * 7.457e-7;                 // MHP to Gigawatt
        case 6: return 10 * log10(value * 745700);       // MHP to Decibel-milliwatt
        case 7: return 10 * log10(value * 745.7);        // MHP to Decibel-watt
        case 8: return value;                            // MHP to Mechanical Horsepower
        case 9: return value * 0.9963;                   // MHP to Electric Horsepower
        case 10: return value * 2544.43;                 // MHP to BTU/hr
        case 11: return value * 745.7;                   // MHP to Joules per second
        case 12: return value * 745.7;                   // MHP to Volt Amperes
        default: return NAN;
    }
}

// Electric Horsepower conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromElecHp(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 746000;                   // EHP to Milliwatt
        case 2: return value * 746;                      // EHP to Watt
        case 3: return value * 0.746;                    // EHP to Kilowatt
        case 4: return value * 7.46e-4;                  // EHP to Megawatt
        case 5: return value * 7.46e-7;                  // EHP to Gigawatt
        case 6: return 10 * log10(value * 746000);       // EHP to Decibel-milliwatt
        case 7: return 10 * log10(value * 746);          // EHP to Decibel-watt
        case 8: return value * 1.0037;                   // EHP to Mechanical Horsepower
        case 9: return value;                            // EHP to Electric Horsepower
        case 10: return value * 2544.43;                 // EHP to BTU/hr
        case 11: return value * 746;                     // EHP to Joules per second
        case 12: return value * 746;                     // EHP to Volt Amperes
        default: return NAN;
    }
}

// BTU/hr conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromBtuHr(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    double watts = value / 3.412141;
    switch (query) {
        case 1: return watts * 1000;                     // BTU/hr to Milliwatt
        case 2: return watts;                            // BTU/hr to Watt
        case 3: return watts / 1000;                     // BTU/hr to Kilowatt
        case 4: return watts * 1e-6;                     // BTU/hr to Megawatt
        case 5: return watts * 1e-9;                     // BTU/hr to Gigawatt
        case 6: return 10 * log10(watts * 1000);         // BTU/hr to Decibel-milliwatt
        case 7: return 10 * log10(watts);                // BTU/hr to Decibel-watt
        case 8: return watts / 745.7;                    // BTU/hr to Mechanical Horsepower
        case 9: return watts / 746;                      // BTU/hr to Electric Horsepower
        case 10: return value;                           // BTU/hr to BTU/hr
        case 11: return watts;                           // BTU/hr to Joules per second
        case 12: return watts;                           // BTU/hr to Volt Amperes
        default: return NAN;
    }
}

// Joules per second conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromJps(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 1000;                     // JPS to Milliwatt
        case 2: return value;                            // JPS to Watt
        case 3: return value / 1000;                     // JPS to Kilowatt
        case 4: return value * 1e-6;                     // JPS to Megawatt
        case 5: return value * 1e-9;                     // JPS to Gigawatt
        case 6: return 10 * log10(value * 1000);         // JPS to Decibel-milliwatt
        case 7: return 10 * log10(value);                // JPS to Decibel-watt
        case 8: return value / 745.7;                    // JPS to Mechanical Horsepower
        case 9: return value / 746;                      // JPS to Electric Horsepower
        case 10: return value * 3.412141;                // JPS to BTU/hr
        case 11: return value;                           // JPS to Joules per second
        case 12: return value;                           // JPS to Volt Amperes
        default: return NAN;
    }
}

// Volt Amperes conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromVa(double value, int query) {
    if (value <= 0 && (query == 6 || query == 7)) {
        return -INFINITY;
    }

    switch (query) {
        case 1: return value * 1000;                     // VA to Milliwatt
        case 2: return value;                            // VA to Watt
        case 3: return value / 1000;                     // VA to Kilowatt
        case 4: return value * 1e-6;                     // VA to Megawatt
        case 5: return value * 1e-9;                     // VA to Gigawatt
        case 6: return 10 * log10(value * 1000);         // VA to Decibel-milliwatt
        case 7: return 10 * log10(value);                // VA to Decibel-watt
        case 8: return value / 745.7;                    // VA to Mechanical Horsepower
        case 9: return value / 746;                      // VA to Electric Horsepower
        case 10: return value * 3.412141;                // VA to BTU/hr
        case 11: return value;                           // VA to Joules per second
        case 12: return value;                           // VA to Volt Amperes
        default: return NAN;
    }
}