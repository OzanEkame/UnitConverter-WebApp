#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Converts Bits

EMSCRIPTEN_KEEPALIVE
double convertBitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value;                            // Bit per second
        case 2: return value / 1000;                     // Kilobit per second
        case 3: return value / 8000;                     // Kilobyte per second
        case 4: return value / 1024;                     // Kibibit per second
        case 5: return value * 1e-6;                     // Megabit per second
        case 6: return value / 8e6;                      // Megabyte per second
        case 7: return value / (1024 * 1024);           // Mebibit per second
        case 8: return value * 1e-9;                     // Gigabit per second
        case 9: return value / 8e9;                      // Gigabyte per second
        case 10: return value / pow(1024, 3);           // Gibibit per second
        case 11: return value * 1e-12;                   // Terabit per second
        case 12: return value / 8e12;                    // Terabyte per second
        case 13: return value / pow(1024, 4);           // Tebibit per second
        default: return NAN;
    }
}

// Converts Kilobit 

EMSCRIPTEN_KEEPALIVE
double convertKilobitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 1000;                     // Bit per second
        case 2: return value;                            // Kilobit per second
        case 3: return value / 8;                        // Kilobyte per second
        case 4: return value * 1000 / 1024;              // Kibibit per second
        case 5: return value / 1000;                     // Megabit per second
        case 6: return value / 8000;                     // Megabyte per second
        case 7: return value * 1000 / (1024 * 1024);    // Mebibit per second
        case 8: return value * 1e-6;                     // Gigabit per second
        case 9: return value / 8e6;                      // Gigabyte per second
        case 10: return value * 1000 / pow(1024, 3);    // Gibibit per second
        case 11: return value * 1e-9;                    // Terabit per second
        case 12: return value / 8e9;                     // Terabyte per second
        case 13: return value * 1000 / pow(1024, 4);    // Tebibit per second
        default: return NAN;
    }
}

// Converts Kilobyte 

EMSCRIPTEN_KEEPALIVE
double convertKilobytePerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 8000;                     // Bit per second
        case 2: return value * 8;                        // Kilobit per second
        case 3: return value;                            // Kilobyte per second
        case 4: return value * 8000 / 1024;              // Kibibit per second
        case 5: return value * 8 / 1000;                 // Megabit per second
        case 6: return value / 1000;                     // Megabyte per second
        case 7: return value * 8000 / (1024 * 1024);    // Mebibit per second
        case 8: return value * 8 / 1e6;                  // Gigabit per second
        case 9: return value / 1e6;                      // Gigabyte per second
        case 10: return value * 8000 / pow(1024, 3);    // Gibibit per second
        case 11: return value * 8 / 1e9;                 // Terabit per second
        case 12: return value / 1e9;                     // Terabyte per second
        case 13: return value * 8000 / pow(1024, 4);    // Tebibit per second
        default: return NAN;
    }
}

// Converts Kibibit

EMSCRIPTEN_KEEPALIVE
double convertKibibitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 1024;                     // Bit per second
        case 2: return value * 1024 / 1000;              // Kilobit per second
        case 3: return value * 1024 / 8000;              // Kilobyte per second
        case 4: return value;                            // Kibibit per second
        case 5: return value * 1024 / 1e6;               // Megabit per second
        case 6: return value * 1024 / 8e6;               // Megabyte per second
        case 7: return value / 1024;                     // Mebibit per second
        case 8: return value * 1024 / 1e9;               // Gigabit per second
        case 9: return value * 1024 / 8e9;               // Gigabyte per second
        case 10: return value / (1024 * 1024);          // Gibibit per second
        case 11: return value * 1024 / 1e12;             // Terabit per second
        case 12: return value * 1024 / 8e12;             // Terabyte per second
        case 13: return value / pow(1024, 3);           // Tebibit per second
        default: return NAN;
    }
}

// Converts Megabit

EMSCRIPTEN_KEEPALIVE 
double convertMegabitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 1e6;                      // Bit per second
        case 2: return value * 1000;                     // Kilobit per second
        case 3: return value * 125;                      // Kilobyte per second
        case 4: return value * 1e6 / 1024;               // Kibibit per second
        case 5: return value;                            // Megabit per second
        case 6: return value / 8;                        // Megabyte per second
        case 7: return value * 1e6 / (1024 * 1024);     // Mebibit per second
        case 8: return value / 1000;                     // Gigabit per second
        case 9: return value / 8000;                     // Gigabyte per second
        case 10: return value * 1e6 / pow(1024, 3);     // Gibibit per second
        case 11: return value / 1e6;                     // Terabit per second
        case 12: return value / 8e6;                     // Terabyte per second
        case 13: return value * 1e6 / pow(1024, 4);     // Tebibit per second
        default: return NAN;
    }
}

// Converts Megabyte

EMSCRIPTEN_KEEPALIVE
double convertMegabytePerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 8e6;                      // Bit per second
        case 2: return value * 8000;                     // Kilobit per second
        case 3: return value * 1000;                     // Kilobyte per second
        case 4: return value * 8e6 / 1024;               // Kibibit per second
        case 5: return value * 8;                        // Megabit per second
        case 6: return value;                            // Megabyte per second
        case 7: return value * 8e6 / (1024 * 1024);     // Mebibit per second
        case 8: return value * 8 / 1000;                 // Gigabit per second
        case 9: return value / 1000;                     // Gigabyte per second
        case 10: return value * 8e6 / pow(1024, 3);     // Gibibit per second
        case 11: return value * 8 / 1e6;                 // Terabit per second
        case 12: return value / 1e6;                     // Terabyte per second
        case 13: return value * 8e6 / pow(1024, 4);     // Tebibit per second
        default: return NAN;
    }
}

// Converts Mebibit

EMSCRIPTEN_KEEPALIVE
double convertMebibitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 2);            // Bit per second
        case 2: return value * pow(1024, 2) / 1000;     // Kilobit per second
        case 3: return value * pow(1024, 2) / 8000;     // Kilobyte per second
        case 4: return value * 1024;                     // Kibibit per second
        case 5: return value * pow(1024, 2) / 1e6;      // Megabit per second
        case 6: return value * pow(1024, 2) / 8e6;      // Megabyte per second
        case 7: return value;                            // Mebibit per second
        case 8: return value * pow(1024, 2) / 1e9;      // Gigabit per second
        case 9: return value * pow(1024, 2) / 8e9;      // Gigabyte per second
        case 10: return value / 1024;                   // Gibibit per second
        case 11: return value * pow(1024, 2) / 1e12;    // Terabit per second
        case 12: return value * pow(1024, 2) / 8e12;    // Terabyte per second
        case 13: return value / pow(1024, 2);          // Tebibit per second
        default: return NAN;
    }
}

// Converts Gigabit

EMSCRIPTEN_KEEPALIVE
double convertGigabitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 1e9;                      // Bit per second
        case 2: return value * 1e6;                      // Kilobit per second
        case 3: return value * 125000;                   // Kilobyte per second
        case 4: return value * 1e9 / 1024;               // Kibibit per second
        case 5: return value * 1000;                     // Megabit per second
        case 6: return value * 125;                      // Megabyte per second
        case 7: return value * 1e9 / (1024 * 1024);     // Mebibit per second
        case 8: return value;                            // Gigabit per second
        case 9: return value / 8;                        // Gigabyte per second
        case 10: return value * 1e9 / pow(1024, 3);     // Gibibit per second
        case 11: return value / 1000;                    // Terabit per second
        case 12: return value / 8000;                    // Terabyte per second
        case 13: return value * 1e9 / pow(1024, 4);     // Tebibit per second
        default: return NAN;
    }
}

// Converts Gigabyte

EMSCRIPTEN_KEEPALIVE
double convertGigabytePerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 8e9;                      // Bit per second
        case 2: return value * 8e6;                      // Kilobit per second
        case 3: return value * 1e6;                      // Kilobyte per second
        case 4: return value * 8e9 / 1024;               // Kibibit per second
        case 5: return value * 8000;                     // Megabit per second
        case 6: return value * 1000;                     // Megabyte per second
        case 7: return value * 8e9 / (1024 * 1024);     // Mebibit per second
        case 8: return value * 8;                        // Gigabit per second
        case 9: return value;                            // Gigabyte per second
        case 10: return value * 8e9 / pow(1024, 3);     // Gibibit per second
        case 11: return value * 8 / 1000;                // Terabit per second
        case 12: return value / 1000;                    // Terabyte per second
        case 13: return value * 8e9 / pow(1024, 4);     // Tebibit per second
        default: return NAN;
    }
}

Converts Gibibit

EMSCRIPTEN_KEEPALIVE
double convertGibibitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 3);            // Bit per second
        case 2: return value * pow(1024, 3) / 1000;     // Kilobit per second
        case 3: return value * pow(1024, 3) / 8000;     // Kilobyte per second
        case 4: return value * pow(1024, 2);            // Kibibit per second
        case 5: return value * pow(1024, 3) / 1e6;      // Megabit per second
        case 6: return value * pow(1024, 3) / 8e6;      // Megabyte per second
        case 7: return value * 1024;                     // Mebibit per second
        case 8: return value * pow(1024, 3) / 1e9;      // Gigabit per second
        case 9: return value * pow(1024, 3) / 8e9;      // Gigabyte per second
        case 10: return value;                           // Gibibit per second
        case 11: return value * pow(1024, 3) / 1e12;    // Terabit per second
        case 12: return value * pow(1024, 3) / 8e12;    // Terabyte per second
        case 13: return value / 1024;                    // Tebibit per second
        default: return NAN;
    }
}

// Converts Terabit

EMSCRIPTEN_KEEPALIVE
double convertTerabitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 1e12;                     // Bit per second
        case 2: return value * 1e9;                      // Kilobit per second
        case 3: return value * 125e6;                    // Kilobyte per second
        case 4: return value * 1e12 / 1024;              // Kibibit per second
        case 5: return value * 1e6;                      // Megabit per second
        case 6: return value * 125000;                   // Megabyte per second
        case 7: return value * 1e12 / (1024 * 1024);    // Mebibit per second
        case 8: return value * 1000;                     // Gigabit per second
        case 9: return value * 125;                      // Gigabyte per second
        case 10: return value * 1e12 / pow(1024, 3);    // Gibibit per second
        case 11: return value;                           // Terabit per second
        case 12: return value / 8;                       // Terabyte per second
        case 13: return value * 1e12 / pow(1024, 4);    // Tebibit per second
        default: return NAN;
    }
}

// Converts Terabyte

EMSCRIPTEN_KEEPALIVE
double convertTerabytePerSecond(double value, int query) {
    switch (query) {
        case 1: return value * 8e12;                     // Bit per second
        case 2: return value * 8e9;                      // Kilobit per second
        case 3: return value * 1e9;                      // Kilobyte per second
        case 4: return value * 8e12 / 1024;              // Kibibit per second
        case 5: return value * 8e6;                      // Megabit per second
        case 6: return value * 1e6;                      // Megabyte per second
        case 7: return value * 8e12 / (1024 * 1024);    // Mebibit per second
        case 8: return value * 8000;                     // Gigabit per second
        case 9: return value * 1000;                     // Gigabyte per second
        case 10: return value * 8e12 / pow(1024, 3);    // Gibibit per second
        case 11: return value * 8;                       // Terabit per second
        case 12: return value;                           // Terabyte per second
        case 13: return value * 8e12 / pow(1024, 4);    // Tebibit per second
        default: return NAN;
    }
}

// Converts Tebibit

EMSCRIPTEN_KEEPALIVE
double convertTebibitPerSecond(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 4);            // Bit per second
        case 2: return value * pow(1024, 4) / 1000;     // Kilobit per second
        case 3: return value * pow(1024, 4) / 8000;     // Kilobyte per second
        case 4: return value * pow(1024, 3);            // Kibibit per second
        case 5: return value * pow(1024, 4) / 1e6;      // Megabit per second
        case 6: return value * pow(1024, 4) / 8e6;      // Megabyte per second
        case 7: return value * pow(1024, 2);            // Mebibit per second
        case 8: return value * pow(1024, 4) / 1e9;      // Gigabit per second
        case 9: return value * pow(1024, 4) / 8e9;      // Gigabyte per second
        case 10: return value * 1024;                    // Gibibit per second
        case 11: return value * pow(1024, 4) / 1e12;    // Terabit per second
        case 12: return value * pow(1024, 4) / 8e12;    // Terabyte per second
        case 13: return value;                           // Tebibit per second
        default: return NAN;
    }
}
