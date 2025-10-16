#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Converts Bit

EMSCRIPTEN_KEEPALIVE
double ConvertBit(double value, int query) {
    switch (query) {
        case 1: return value;                                     // Bit
        case 2: return value / 1000;                             // Kilobit
        case 3: return value / 1024;                             // Kibibit
        case 4: return value * 1e-6;                             // Megabit
        case 5: return value / (1024 * 1024);                    // Mebibit
        case 6: return value * 1e-9;                             // Gigabit
        case 7: return value / pow(1024, 3);                     // Gibibit
        case 8: return value * 1e-12;                            // Terabit
        case 9: return value / pow(1024, 4);                     // Tebibit
        case 10: return value * 1e-15;                           // Petabit
        case 11: return value / pow(1024, 5);                    // Pebibit
        case 12: return value / 8;                               // Byte
        case 13: return value / 8000;                            // Kilobyte
        case 14: return value / (8 * 1024);                      // Kibibyte
        case 15: return value / (8 * 1e6);                       // Megabyte
        case 16: return value / (8 * pow(1024, 2));             // Mebibyte
        case 17: return value / (8 * 1e9);                       // Gigabyte
        case 18: return value / (8 * pow(1024, 3));             // Gibibyte
        case 19: return value / (8 * 1e12);                      // Terabyte
        case 20: return value / (8 * pow(1024, 4));             // Tebibyte
        case 21: return value / (8 * 1e15);                      // Petabyte
        case 22: return value / (8 * pow(1024, 5));             // Pebibyte
        default: return NAN;
    }
}

// Converts Kilobit

EMSCRIPTEN_KEEPALIVE
double ConvertKilobit(double value, int query) {
    switch (query) {
        case 1: return value * 1000;                             // Bit
        case 2: return value;                                    // Kilobit
        case 3: return value * 1000 / 1024;                      // Kibibit
        case 4: return value / 1000;                             // Megabit
        case 5: return value * 1000 / (1024 * 1024);            // Mebibit
        case 6: return value * 1e-6;                             // Gigabit
        case 7: return value * 1000 / pow(1024, 3);             // Gibibit
        case 8: return value * 1e-9;                             // Terabit
        case 9: return value * 1000 / pow(1024, 4);             // Tebibit
        case 10: return value * 1e-12;                           // Petabit
        case 11: return value * 1000 / pow(1024, 5);            // Pebibit
        case 12: return value * 125;                             // Byte
        case 13: return value / 8;                               // Kilobyte
        case 14: return value * 1000 / (8 * 1024);              // Kibibyte
        case 15: return value / 8000;                            // Megabyte
        case 16: return value * 1000 / (8 * pow(1024, 2));      // Mebibyte
        case 17: return value / (8 * 1e6);                       // Gigabyte
        case 18: return value * 1000 / (8 * pow(1024, 3));      // Gibibyte
        case 19: return value / (8 * 1e9);                       // Terabyte
        case 20: return value * 1000 / (8 * pow(1024, 4));      // Tebibyte
        case 21: return value / (8 * 1e12);                      // Petabyte
        case 22: return value * 1000 / (8 * pow(1024, 5));      // Pebibyte
        default: return NAN;
    }
}

// Converts Kibibit

EMSCRIPTEN_KEEPALIVE
double ConvertKibibit(double value, int query) {
    switch (query) {
        case 1: return value * 1024;                             // Bit
        case 2: return value * 1024 / 1000;                      // Kilobit
        case 3: return value;                                    // Kibibit
        case 4: return value * 1024 / 1e6;                       // Megabit
        case 5: return value / 1024;                             // Mebibit
        case 6: return value * 1024 / 1e9;                       // Gigabit
        case 7: return value / pow(1024, 2);                     // Gibibit
        case 8: return value * 1024 / 1e12;                      // Terabit
        case 9: return value / pow(1024, 3);                     // Tebibit
        case 10: return value * 1024 / 1e15;                     // Petabit
        case 11: return value / pow(1024, 4);                    // Pebibit
        case 12: return value * 128;                             // Byte
        case 13: return value * 128 / 1000;                      // Kilobyte
        case 14: return value / 8;                               // Kibibyte
        case 15: return value * 128 / 1e6;                       // Megabyte
        case 16: return value / (8 * 1024);                      // Mebibyte
        case 17: return value * 128 / 1e9;                       // Gigabyte
        case 18: return value / (8 * pow(1024, 2));             // Gibibyte
        case 19: return value * 128 / 1e12;                      // Terabyte
        case 20: return value / (8 * pow(1024, 3));             // Tebibyte
        case 21: return value * 128 / 1e15;                      // Petabyte
        case 22: return value / (8 * pow(1024, 4));             // Pebibyte
        default: return NAN;
    }
}

// Converts Megabit

EMSCRIPTEN_KEEPALIVE
double ConvertMegabit(double value, int query) {
    switch (query) {
        case 1: return value * 1e6;                              // Bit
        case 2: return value * 1000;                             // Kilobit
        case 3: return value * 1e6 / 1024;                       // Kibibit
        case 4: return value;                                    // Megabit
        case 5: return value * 1e6 / (1024 * 1024);             // Mebibit
        case 6: return value / 1000;                             // Gigabit
        case 7: return value * 1e6 / pow(1024, 3);              // Gibibit
        case 8: return value * 1e-6;                             // Terabit
        case 9: return value * 1e6 / pow(1024, 4);              // Tebibit
        case 10: return value * 1e-9;                            // Petabit
        case 11: return value * 1e6 / pow(1024, 5);             // Pebibit
        case 12: return value * 125000;                          // Byte
        case 13: return value * 125;                             // Kilobyte
        case 14: return value * 1e6 / (8 * 1024);               // Kibibyte
        case 15: return value / 8;                               // Megabyte
        case 16: return value * 1e6 / (8 * pow(1024, 2));       // Mebibyte
        case 17: return value / 8000;                            // Gigabyte
        case 18: return value * 1e6 / (8 * pow(1024, 3));       // Gibibyte
        case 19: return value / (8 * 1e6);                       // Terabyte
        case 20: return value * 1e6 / (8 * pow(1024, 4));       // Tebibyte
        case 21: return value / (8 * 1e9);                       // Petabyte
        case 22: return value * 1e6 / (8 * pow(1024, 5));       // Pebibyte
        default: return NAN;
    }
}

// Converts Mebibit

EMSCRIPTEN_KEEPALIVE
double ConvertMebibit(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 2);                     // Bit
        case 2: return value * pow(1024, 2) / 1000;             // Kilobit
        case 3: return value * 1024;                             // Kibibit
        case 4: return value * pow(1024, 2) / 1e6;              // Megabit
        case 5: return value;                                    // Mebibit
        case 6: return value * pow(1024, 2) / 1e9;              // Gigabit
        case 7: return value / 1024;                             // Gibibit
        case 8: return value * pow(1024, 2) / 1e12;             // Terabit
        case 9: return value / pow(1024, 2);                     // Tebibit
        case 10: return value * pow(1024, 2) / 1e15;            // Petabit
        case 11: return value / pow(1024, 3);                    // Pebibit
        case 12: return value * pow(1024, 2) / 8;               // Byte
        case 13: return value * pow(1024, 2) / 8000;            // Kilobyte
        case 14: return value * 128;                             // Kibibyte
        case 15: return value * pow(1024, 2) / (8 * 1e6);       // Megabyte
        case 16: return value * 128 / 1024;                      // Mebibyte
        case 17: return value * pow(1024, 2) / (8 * 1e9);       // Gigabyte
        case 18: return value * 128 / pow(1024, 2);             // Gibibyte
        case 19: return value * pow(1024, 2) / (8 * 1e12);      // Terabyte
        case 20: return value * 128 / pow(1024, 3);             // Tebibyte
        case 21: return value * pow(1024, 2) / (8 * 1e15);      // Petabyte
        case 22: return value * 128 / pow(1024, 4);             // Pebibyte
        default: return NAN;
    }
}

// Converts Gigabit

EMSCRIPTEN_KEEPALIVE
double ConvertGigabit(double value, int query) {
    switch (query) {
        case 1: return value * 1e9;                              // Bit
        case 2: return value * 1e6;                              // Kilobit
        case 3: return value * 1e9 / 1024;                       // Kibibit
        case 4: return value * 1000;                             // Megabit
        case 5: return value * 1e9 / (1024 * 1024);             // Mebibit
        case 6: return value;                                    // Gigabit
        case 7: return value * 1e9 / pow(1024, 3);              // Gibibit
        case 8: return value / 1000;                             // Terabit
        case 9: return value * 1e9 / pow(1024, 4);              // Tebibit
        case 10: return value * 1e-6;                            // Petabit
        case 11: return value * 1e9 / pow(1024, 5);             // Pebibit
        case 12: return value * 1.25e8;                          // Byte
        case 13: return value * 125000;                          // Kilobyte
        case 14: return value * 1e9 / (8 * 1024);               // Kibibyte
        case 15: return value * 125;                             // Megabyte
        case 16: return value * 1e9 / (8 * pow(1024, 2));       // Mebibyte
        case 17: return value / 8;                               // Gigabyte
        case 18: return value * 1e9 / (8 * pow(1024, 3));       // Gibibyte
        case 19: return value / 8000;                            // Terabyte
        case 20: return value * 1e9 / (8 * pow(1024, 4));       // Tebibyte
        case 21: return value / (8 * 1e6);                       // Petabyte
        case 22: return value * 1e9 / (8 * pow(1024, 5));       // Pebibyte
        default: return NAN;
    }
}

// Converts Gibibit

EMSCRIPTEN_KEEPALIVE
double ConvertGibibit(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 3);                     // Bit
        case 2: return value * pow(1024, 3) / 1000;             // Kilobit
        case 3: return value * pow(1024, 2);                     // Kibibit
        case 4: return value * pow(1024, 3) / 1e6;              // Megabit
        case 5: return value * 1024;                             // Mebibit
        case 6: return value * pow(1024, 3) / 1e9;              // Gigabit
        case 7: return value;                                    // Gibibit
        case 8: return value * pow(1024, 3) / 1e12;             // Terabit
        case 9: return value / 1024;                             // Tebibit
        case 10: return value * pow(1024, 3) / 1e15;            // Petabit
        case 11: return value / pow(1024, 2);                    // Pebibit
        case 12: return value * pow(1024, 3) / 8;               // Byte
        case 13: return value * pow(1024, 3) / 8000;            // Kilobyte
        case 14: return value * pow(1024, 2) / 8;               // Kibibyte
        case 15: return value * pow(1024, 3) / (8 * 1e6);       // Megabyte
        case 16: return value * 128;                             // Mebibyte
        case 17: return value * pow(1024, 3) / (8 * 1e9);       // Gigabyte
        case 18: return value * 128 / 1024;                      // Gibibyte
        case 19: return value * pow(1024, 3) / (8 * 1e12);      // Terabyte
        case 20: return value * 128 / pow(1024, 2);             // Tebibyte
        case 21: return value * pow(1024, 3) / (8 * 1e15);      // Petabyte
        case 22: return value * 128 / pow(1024, 3);             // Pebibyte
        default: return NAN;
    }
}

// Converts Terabit

EMSCRIPTEN_KEEPALIVE
double ConvertTerabit(double value, int query) {
    switch (query) {
        case 1: return value * 1e12;                             // Bit
        case 2: return value * 1e9;                              // Kilobit
        case 3: return value * 1e12 / 1024;                      // Kibibit
        case 4: return value * 1e6;                              // Megabit
        case 5: return value * 1e12 / (1024 * 1024);            // Mebibit
        case 6: return value * 1000;                             // Gigabit
        case 7: return value * 1e12 / pow(1024, 3);             // Gibibit
        case 8: return value;                                    // Terabit
        case 9: return value * 1e12 / pow(1024, 4);             // Tebibit
        case 10: return value / 1000;                            // Petabit
        case 11: return value * 1e12 / pow(1024, 5);            // Pebibit
        case 12: return value * 1.25e11;                         // Byte
        case 13: return value * 1.25e8;                          // Kilobyte
        case 14: return value * 1e12 / (8 * 1024);              // Kibibyte
        case 15: return value * 125000;                          // Megabyte
        case 16: return value * 1e12 / (8 * pow(1024, 2));      // Mebibyte
        case 17: return value * 125;                             // Gigabyte
        case 18: return value * 1e12 / (8 * pow(1024, 3));      // Gibibyte
        case 19: return value / 8;                               // Terabyte
        case 20: return value * 1e12 / (8 * pow(1024, 4));      // Tebibyte
        case 21: return value / 8000;                            // Petabyte
        case 22: return value * 1e12 / (8 * pow(1024, 5));      // Pebibyte
        default: return NAN;
    }
}

// Converts Tebibit

EMSCRIPTEN_KEEPALIVE
double ConvertTebibit(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 4);                     // Bit
        case 2: return value * pow(1024, 4) / 1000;             // Kilobit
        case 3: return value * pow(1024, 3);                     // Kibibit
        case 4: return value * pow(1024, 4) / 1e6;              // Megabit
        case 5: return value * pow(1024, 2);                     // Mebibit
        case 6: return value * pow(1024, 4) / 1e9;              // Gigabit
        case 7: return value * 1024;                             // Gibibit
        case 8: return value * pow(1024, 4) / 1e12;             // Terabit
        case 9: return value;                                    // Tebibit
        case 10: return value * pow(1024, 4) / 1e15;            // Petabit
        case 11: return value / 1024;                            // Pebibit
        case 12: return value * pow(1024, 4) / 8;               // Byte
        case 13: return value * pow(1024, 4) / 8000;            // Kilobyte
        case 14: return value * pow(1024, 3) / 8;               // Kibibyte
        case 15: return value * pow(1024, 4) / (8 * 1e6);       // Megabyte
        case 16: return value * pow(1024, 2) / 8;               // Mebibyte
        case 17: return value * pow(1024, 4) / (8 * 1e9);       // Gigabyte
        case 18: return value * 128;                             // Gibibyte
        case 19: return value * pow(1024, 4) / (8 * 1e12);      // Terabyte
        case 20: return value * 128 / 1024;                      // Tebibyte
        case 21: return value * pow(1024, 4) / (8 * 1e15);      // Petabyte
        case 22: return value * 128 / pow(1024, 2);             // Pebibyte
        default: return NAN;
    }
}

// Converts Petabit

EMSCRIPTEN_KEEPALIVE
double ConvertPetabit(double value, int query) {
    switch (query) {
        case 1: return value * 1e15;                             // Bit
        case 2: return value * 1e12;                             // Kilobit
        case 3: return value * 1e15 / 1024;                      // Kibibit
        case 4: return value * 1e9;                              // Megabit
        case 5: return value * 1e15 / (1024 * 1024);            // Mebibit
        case 6: return value * 1e6;                              // Gigabit
        case 7: return value * 1e15 / pow(1024, 3);             // Gibibit
        case 8: return value * 1000;                             // Terabit
        case 9: return value * 1e15 / pow(1024, 4);             // Tebibit
        case 10: return value;                                   // Petabit
        case 11: return value * 1e15 / pow(1024, 5);            // Pebibit
        case 12: return value * 1.25e14;                         // Byte
        case 13: return value * 1.25e11;                         // Kilobyte
        case 14: return value * 1e15 / (8 * 1024);              // Kibibyte
        case 15: return value * 1.25e8;                          // Megabyte
        case 16: return value * 1e15 / (8 * pow(1024, 2));      // Mebibyte
        case 17: return value * 125000;                          // Gigabyte
        case 18: return value * 1e15 / (8 * pow(1024, 3));      // Gibibyte
        case 19: return value * 125;                             // Terabyte
        case 20: return value * 1e15 / (8 * pow(1024, 4));      // Tebibyte
        case 21: return value / 8;                               // Petabyte
        case 22: return value * 1e15 / (8 * pow(1024, 5));      // Pebibyte
        default: return NAN;
    }
}

// Converts Pebibit

EMSCRIPTEN_KEEPALIVE
double ConvertPebibit(double value, int query) {
    switch (query) {
        case 1: return value * pow(1024, 5);                     // Bit
        case 2: return value * pow(1024, 5) / 1000;             // Kilobit
        case 3: return value * pow(1024, 4);                     // Kibibit
        case 4: return value * pow(1024, 5) / 1e6;              // Megabit
        case 5: return value * pow(1024, 3);                     // Mebibit
        case 6: return value * pow(1024, 5) / 1e9;              // Gigabit
        case 7: return value * pow(1024, 2);                     // Gibibit
        case 8: return value * pow(1024, 5) / 1e12;             // Terabit
        case 9: return value * 1024;                             // Tebibit
        case 10: return value * pow(1024, 5) / 1e15;            // Petabit
        case 11: return value;                                   // Pebibit
        case 12: return value * pow(1024, 5) / 8;               // Byte
        case 13: return value * pow(1024, 5) / 8000;            // Kilobyte
        case 14: return value * pow(1024, 4) / 8;               // Kibibyte
        case 15: return value * pow(1024, 5) / (8 * 1e6);       // Megabyte
        case 16: return value * pow(1024, 3) / 8;               // Mebibyte
        case 17: return value * pow(1024, 5) / (8 * 1e9);       // Gigabyte
        case 18: return value * pow(1024, 2) / 8;               // Gibibyte
        case 19: return value * pow(1024, 5) / (8 * 1e12);      // Terabyte
        case 20: return value * 128;                             // Tebibyte
        case 21: return value * pow(1024, 5) / (8 * 1e15);      // Petabyte
        case 22: return value * 128 / 1024;                      // Pebibyte
        default: return NAN;
    }
}

// Converts Byte

EMSCRIPTEN_KEEPALIVE
double ConvertByte(double value, int query) {
    switch (query) {
        case 1: return value * 8;                                // Bit
        case 2: return value * 8 / 1000;                        // Kilobit
        case 3: return value * 8 / 1024;                        // Kibibit
        case 4: return value * 8 / 1e6;                         // Megabit
        case 5: return value * 8 / (1024 * 1024);              // Mebibit
        case 6: return value * 8 / 1e9;                         // Gigabit
        case 7: return value * 8 / pow(1024, 3);               // Gibibit
        case 8: return value * 8 / 1e12;                        // Terabit
        case 9: return value * 8 / pow(1024, 4);               // Tebibit
        case 10: return value * 8 / 1e15;                       // Petabit
        case 11: return value * 8 / pow(1024, 5);              // Pebibit
        case 12: return value;                                  // Byte
        case 13: return value / 1000;                           // Kilobyte
        case 14: return value / 1024;                           // Kibibyte
        case 15: return value / 1e6;                            // Megabyte
        case 16: return value / (1024 * 1024);                 // Mebibyte
        case 17: return value / 1e9;                            // Gigabyte
        case 18: return value / pow(1024, 3);                  // Gibibyte
        case 19: return value / 1e12;                           // Terabyte
        case 20: return value / pow(1024, 4);                  // Tebibyte
        case 21: return value / 1e15;                           // Petabyte
        case 22: return value / pow(1024, 5);                  // Pebibyte
        default: return NAN;
    }
}

// Converts Kilobyte

EMSCRIPTEN_KEEPALIVE
double ConvertKilobyte(double value, int query) {
    switch (query) {
        case 1: return value * 8000;                             // Bit
        case 2: return value * 8;                                // Kilobit
        case 3: return value * 8000 / 1024;                      // Kibibit
        case 4: return value * 8 / 1000;                         // Megabit
        case 5: return value * 8000 / (1024 * 1024);            // Mebibit
        case 6: return value * 8 / 1e6;                          // Gigabit
        case 7: return value * 8000 / pow(1024, 3);             // Gibibit
        case 8: return value * 8 / 1e9;                          // Terabit
        case 9: return value * 8000 / pow(1024, 4);             // Tebibit
        case 10: return value * 8 / 1e12;                        // Petabit
        case 11: return value * 8000 / pow(1024, 5);            // Pebibit
        case 12: return value * 1000;                            // Byte
        case 13: return value;                                   // Kilobyte
        case 14: return value * 1000 / 1024;                     // Kibibyte
        case 15: return value / 1000;                            // Megabyte
        case 16: return value * 1000 / (1024 * 1024);           // Mebibyte
        case 17: return value / 1e6;                             // Gigabyte
        case 18: return value * 1000 / pow(1024, 3);            // Gibibyte
        case 19: return value / 1e9;                             // Terabyte
        case 20: return value * 1000 / pow(1024, 4);            // Tebibyte
        case 21: return value / 1e12;                            // Petabyte
        case 22: return value * 1000 / pow(1024, 5);            // Pebibyte
        default: return NAN;
    }
}

// Converts Kibibyte

EMSCRIPTEN_KEEPALIVE
double ConvertKibibyte(double value, int query) {
    switch (query) {
        case 1: return value * 8192;                             // Bit
        case 2: return value * 8192 / 1000;                      // Kilobit
        case 3: return value * 8;                                // Kibibit
        case 4: return value * 8192 / 1e6;                       // Megabit
        case 5: return value * 8 / 1024;                         // Mebibit
        case 6: return value * 8192 / 1e9;                       // Gigabit
        case 7: return value * 8 / pow(1024, 2);                // Gibibit
        case 8: return value * 8192 / 1e12;                      // Terabit
        case 9: return value * 8 / pow(1024, 3);                // Tebibit
        case 10: return value * 8192 / 1e15;                     // Petabit
        case 11: return value * 8 / pow(1024, 4);               // Pebibit
        case 12: return value * 1024;                            // Byte
        case 13: return value * 1024 / 1000;                     // Kilobyte
        case 14: return value;                                   // Kibibyte
        case 15: return value * 1024 / 1e6;                      // Megabyte
        case 16: return value / 1024;                            // Mebibyte
        case 17: return value * 1024 / 1e9;                      // Gigabyte
        case 18: return value / pow(1024, 2);                   // Gibibyte
        case 19: return value * 1024 / 1e12;                     // Terabyte
        case 20: return value / pow(1024, 3);                   // Tebibyte
        case 21: return value * 1024 / 1e15;                     // Petabyte
        case 22: return value / pow(1024, 4);                   // Pebibyte
        default: return NAN;
    }
}

// Converts Megabyte

EMSCRIPTEN_KEEPALIVE
double ConvertMegabyte(double value, int query) {
    switch (query) {
        case 1: return value * 8e6;                              // Bit
        case 2: return value * 8000;                             // Kilobit
        case 3: return value * 8e6 / 1024;                       // Kibibit
        case 4: return value * 8;                                // Megabit
        case 5: return value * 8e6 / (1024 * 1024);             // Mebibit
        case 6: return value * 8 / 1000;                         // Gigabit
        case 7: return value * 8e6 / pow(1024, 3);              // Gibibit
        case 8: return value * 8 / 1e6;                          // Terabit
        case 9: return value * 8e6 / pow(1024, 4);              // Tebibit
        case 10: return value * 8 / 1e9;                         // Petabit
        case 11: return value * 8e6 / pow(1024, 5);             // Pebibit
        case 12: return value * 1e6;                             // Byte
        case 13: return value * 1000;                            // Kilobyte
        case 14: return value * 1e6 / 1024;                      // Kibibyte
        case 15: return value;                                   // Megabyte
        case 16: return value * 1e6 / (1024 * 1024);            // Mebibyte
        case 17: return value / 1000;                            // Gigabyte
        case 18: return value * 1e6 / pow(1024, 3);             // Gibibyte
        case 19: return value / 1e6;                             // Terabyte
        case 20: return value * 1e6 / pow(1024, 4);             // Tebibyte
        case 21: return value / 1e9;                             // Petabyte
        case 22: return value * 1e6 / pow(1024, 5);             // Pebibyte
        default: return NAN;
    }
}

// Converts Mebibyte

EMSCRIPTEN_KEEPALIVE
double ConvertMebibyte(double value, int query) {
    switch (query) {
        case 1: return value * 8 * pow(1024, 2);                // Bit
        case 2: return value * 8 * pow(1024, 2) / 1000;         // Kilobit
        case 3: return value * 8 * 1024;                        // Kibibit
        case 4: return value * 8 * pow(1024, 2) / 1e6;         // Megabit
        case 5: return value * 8;                               // Mebibit
        case 6: return value * 8 * pow(1024, 2) / 1e9;         // Gigabit
        case 7: return value * 8 / 1024;                        // Gibibit
        case 8: return value * 8 * pow(1024, 2) / 1e12;        // Terabit
        case 9: return value * 8 / pow(1024, 2);               // Tebibit
        case 10: return value * 8 * pow(1024, 2) / 1e15;       // Petabit
        case 11: return value * 8 / pow(1024, 3);              // Pebibit
        case 12: return value * pow(1024, 2);                   // Byte
        case 13: return value * pow(1024, 2) / 1000;           // Kilobyte
        case 14: return value * 1024;                           // Kibibyte
        case 15: return value * pow(1024, 2) / 1e6;            // Megabyte
        case 16: return value;                                  // Mebibyte
        case 17: return value * pow(1024, 2) / 1e9;            // Gigabyte
        case 18: return value / 1024;                           // Gibibyte
        case 19: return value * pow(1024, 2) / 1e12;           // Terabyte
        case 20: return value / pow(1024, 2);                  // Tebibyte
        case 21: return value * pow(1024, 2) / 1e15;           // Petabyte
        case 22: return value / pow(1024, 3);                  // Pebibyte
        default: return NAN;
    }
}

// Converts Gigabyte

EMSCRIPTEN_KEEPALIVE
double ConvertGigabyte(double value, int query) {
    switch (query) {
        case 1: return value * 8e9;                             // Bit
        case 2: return value * 8e6;                             // Kilobit
        case 3: return value * 8e9 / 1024;                      // Kibibit
        case 4: return value * 8000;                            // Megabit
        case 5: return value * 8e9 / (1024 * 1024);            // Mebibit
        case 6: return value * 8;                               // Gigabit
        case 7: return value * 8e9 / pow(1024, 3);             // Gibibit
        case 8: return value * 8 / 1000;                        // Terabit
        case 9: return value * 8e9 / pow(1024, 4);             // Tebibit
        case 10: return value * 8 / 1e6;                        // Petabit
        case 11: return value * 8e9 / pow(1024, 5);            // Pebibit
        case 12: return value * 1e9;                            // Byte
        case 13: return value * 1e6;                            // Kilobyte
        case 14: return value * 1e9 / 1024;                     // Kibibyte
        case 15: return value * 1000;                           // Megabyte
        case 16: return value * 1e9 / (1024 * 1024);           // Mebibyte
        case 17: return value;                                  // Gigabyte
        case 18: return value * 1e9 / pow(1024, 3);            // Gibibyte
        case 19: return value / 1000;                           // Terabyte
        case 20: return value * 1e9 / pow(1024, 4);            // Tebibyte
        case 21: return value / 1e6;                            // Petabyte
        case 22: return value * 1e9 / pow(1024, 5);            // Pebibyte
        default: return NAN;
    }
}

// Converts Gibibyte

EMSCRIPTEN_KEEPALIVE
double ConvertGibibyte(double value, int query) {
    switch (query) {
        case 1: return value * 8 * pow(1024, 3);               // Bit
        case 2: return value * 8 * pow(1024, 3) / 1000;        // Kilobit
        case 3: return value * 8 * pow(1024, 2);               // Kibibit
        case 4: return value * 8 * pow(1024, 3) / 1e6;        // Megabit
        case 5: return value * 8 * 1024;                       // Mebibit
        case 6: return value * 8 * pow(1024, 3) / 1e9;        // Gigabit
        case 7: return value * 8;                              // Gibibit
        case 8: return value * 8 * pow(1024, 3) / 1e12;       // Terabit
        case 9: return value * 8 / 1024;                       // Tebibit
        case 10: return value * 8 * pow(1024, 3) / 1e15;      // Petabit
        case 11: return value * 8 / pow(1024, 2);             // Pebibit
        case 12: return value * pow(1024, 3);                  // Byte
        case 13: return value * pow(1024, 3) / 1000;          // Kilobyte
        case 14: return value * pow(1024, 2);                  // Kibibyte
        case 15: return value * pow(1024, 3) / 1e6;           // Megabyte
        case 16: return value * 1024;                          // Mebibyte
        case 17: return value * pow(1024, 3) / 1e9;           // Gigabyte
        case 18: return value;                                 // Gibibyte
        case 19: return value * pow(1024, 3) / 1e12;          // Terabyte
        case 20: return value / 1024;                          // Tebibyte
        case 21: return value * pow(1024, 3) / 1e15;          // Petabyte
        case 22: return value / pow(1024, 2);                 // Pebibyte
        default: return NAN;
    }
}

// Converts Terabyte

EMSCRIPTEN_KEEPALIVE
double ConvertTerabyte(double value, int query) {
    switch (query) {
        case 1: return value * 8e12;                            // Bit
        case 2: return value * 8e9;                             // Kilobit
        case 3: return value * 8e12 / 1024;                     // Kibibit
        case 4: return value * 8e6;                             // Megabit
        case 5: return value * 8e12 / (1024 * 1024);           // Mebibit
        case 6: return value * 8000;                            // Gigabit
        case 7: return value * 8e12 / pow(1024, 3);            // Gibibit
        case 8: return value * 8;                               // Terabit
        case 9: return value * 8e12 / pow(1024, 4);            // Tebibit
        case 10: return value * 8 / 1000;                       // Petabit
        case 11: return value * 8e12 / pow(1024, 5);           // Pebibit
        case 12: return value * 1e12;                           // Byte
        case 13: return value * 1e9;                            // Kilobyte
        case 14: return value * 1e12 / 1024;                    // Kibibyte
        case 15: return value * 1e6;                            // Megabyte
        case 16: return value * 1e12 / (1024 * 1024);          // Mebibyte
        case 17: return value * 1000;                           // Gigabyte
        case 18: return value * 1e12 / pow(1024, 3);           // Gibibyte
        case 19: return value;                                  // Terabyte
        case 20: return value * 1e12 / pow(1024, 4);           // Tebibyte
        case 21: return value / 1000;                           // Petabyte
        case 22: return value * 1e12 / pow(1024, 5);           // Pebibyte
        default: return NAN;
    }
}

// Converts Tebibyte

EMSCRIPTEN_KEEPALIVE
double ConvertTebibyte(double value, int query) {
    switch (query) {
        case 1: return value * 8 * pow(1024, 4);               // Bit
        case 2: return value * 8 * pow(1024, 4) / 1000;        // Kilobit
        case 3: return value * 8 * pow(1024, 3);               // Kibibit
        case 4: return value * 8 * pow(1024, 4) / 1e6;        // Megabit
        case 5: return value * 8 * pow(1024, 2);               // Mebibit
        case 6: return value * 8 * pow(1024, 4) / 1e9;        // Gigabit
        case 7: return value * 8 * 1024;                       // Gibibit
        case 8: return value * 8 * pow(1024, 4) / 1e12;       // Terabit
        case 9: return value * 8;                              // Tebibit
        case 10: return value * 8 * pow(1024, 4) / 1e15;      // Petabit
        case 11: return value * 8 / 1024;                      // Pebibit
        case 12: return value * pow(1024, 4);                  // Byte
        case 13: return value * pow(1024, 4) / 1000;          // Kilobyte
        case 14: return value * pow(1024, 3);                  // Kibibyte
        case 15: return value * pow(1024, 4) / 1e6;           // Megabyte
        case 16: return value * pow(1024, 2);                  // Mebibyte
        case 17: return value * pow(1024, 4) / 1e9;           // Gigabyte
        case 18: return value * 1024;                          // Gibibyte
        case 19: return value * pow(1024, 4) / 1e12;          // Terabyte
        case 20: return value;                                 // Tebibyte
        case 21: return value * pow(1024, 4) / 1e15;          // Petabyte
        case 22: return value / 1024;                          // Pebibyte
        default: return NAN;
    }
}

// Converts Petabyte

EMSCRIPTEN_KEEPALIVE
double ConvertPetabyte(double value, int query) {
    switch (query) {
        case 1: return value * 8e15;                            // Bit
        case 2: return value * 8e12;                            // Kilobit
        case 3: return value * 8e15 / 1024;                     // Kibibit
        case 4: return value * 8e9;                             // Megabit
        case 5: return value * 8e15 / (1024 * 1024);           // Mebibit
        case 6: return value * 8e6;                             // Gigabit
        case 7: return value * 8e15 / pow(1024, 3);            // Gibibit
        case 8: return value * 8000;                            // Terabit
        case 9: return value * 8e15 / pow(1024, 4);            // Tebibit
        case 10: return value * 8;                              // Petabit
        case 11: return value * 8e15 / pow(1024, 5);           // Pebibit
        case 12: return value * 1e15;                           // Byte
        case 13: return value * 1e12;                           // Kilobyte
        case 14: return value * 1e15 / 1024;                    // Kibibyte
        case 15: return value * 1e9;                            // Megabyte
        case 16: return value * 1e15 / (1024 * 1024);          // Mebibyte
        case 17: return value * 1e6;                            // Gigabyte
        case 18: return value * 1e15 / pow(1024, 3);           // Gibibyte
        case 19: return value * 1000;                           // Terabyte
        case 20: return value * 1e15 / pow(1024, 4);           // Tebibyte
        case 21: return value;                                  // Petabyte
        case 22: return value * 1e15 / pow(1024, 5);           // Pebibyte
        default: return NAN;
    }
}

// Converts Pebibyte

EMSCRIPTEN_KEEPALIVE
double ConvertPebibyte(double value, int query) {
    switch (query) {
        case 1: return value * 8 * pow(1024, 5);               // Bit
        case 2: return value * 8 * pow(1024, 5) / 1000;        // Kilobit
        case 3: return value * 8 * pow(1024, 4);               // Kibibit
        case 4: return value * 8 * pow(1024, 5) / 1e6;        // Megabit
        case 5: return value * 8 * pow(1024, 3);               // Mebibit
        case 6: return value * 8 * pow(1024, 5) / 1e9;        // Gigabit
        case 7: return value * 8 * pow(1024, 2);               // Gibibit
        case 8: return value * 8 * pow(1024, 5) / 1e12;       // Terabit
        case 9: return value * 8 * 1024;                       // Tebibit
        case 10: return value * 8 * pow(1024, 5) / 1e15;      // Petabit
        case 11: return value * 8;                             // Pebibit
        case 12: return value * pow(1024, 5);                  // Byte
        case 13: return value * pow(1024, 5) / 1000;          // Kilobyte
        case 14: return value * pow(1024, 4);                  // Kibibyte
        case 15: return value * pow(1024, 5) / 1e6;           // Megabyte
        case 16: return value * pow(1024, 3);                  // Mebibyte
        case 17: return value * pow(1024, 5) / 1e9;           // Gigabyte
        case 18: return value * pow(1024, 2);                  // Gibibyte
        case 19: return value * pow(1024, 5) / 1e12;          // Terabyte
        case 20: return value * 1024;                          // Tebibyte
        case 21: return value * pow(1024, 5) / 1e15;          // Petabyte
        case 22: return value;                                 // Pebibyte
        default: return NAN;
    }
}