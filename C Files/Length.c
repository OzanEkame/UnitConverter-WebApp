#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Kilometer conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromKilometer(double value, int query) {
    switch (query) {
        case 1: return value;                            // Kilometer to Kilometer
        case 2: return value * 1000;                     // Kilometer to Meter
        case 3: return value * 100000;                   // Kilometer to Centimeter
        case 4: return value * 1000000;                  // Kilometer to Millimeter
        case 5: return value * 1000000000;               // Kilometer to Micrometer
        case 6: return value * 1000000000000.0;          // Kilometer to Nanometer
        case 7: return value * 0.621371;                 // Kilometer to Mile
        case 8: return value * 1093.61;                  // Kilometer to Yard
        case 9: return value * 3280.84;                  // Kilometer to Foot
        case 10: return value * 39370.1;                 // Kilometer to Inch
        case 11: return value * 0.539957;                // Kilometer to Nautical Mile
        default: return NAN;
    }
}

// Meter conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMeter(double value, int query) {
    switch (query) {
        case 1: return value * 0.001;                    // Meter to Kilometer
        case 2: return value;                            // Meter to Meter
        case 3: return value * 100;                      // Meter to Centimeter
        case 4: return value * 1000;                     // Meter to Millimeter
        case 5: return value * 1000000;                  // Meter to Micrometer
        case 6: return value * 1000000000;               // Meter to Nanometer
        case 7: return value * 0.000621371;              // Meter to Mile
        case 8: return value * 1.09361;                  // Meter to Yard
        case 9: return value * 3.28084;                  // Meter to Foot
        case 10: return value * 39.3701;                 // Meter to Inch
        case 11: return value * 0.000539957;             // Meter to Nautical Mile
        default: return NAN;
    }
}

// Centimeter conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromCentimeter(double value, int query) {
    switch (query) {
        case 1: return value * 0.00001;                  // Centimeter to Kilometer
        case 2: return value * 0.01;                     // Centimeter to Meter
        case 3: return value;                            // Centimeter to Centimeter
        case 4: return value * 10;                       // Centimeter to Millimeter
        case 5: return value * 10000;                    // Centimeter to Micrometer
        case 6: return value * 10000000;                 // Centimeter to Nanometer
        case 7: return value * 0.00000621371;            // Centimeter to Mile
        case 8: return value * 0.0109361;                // Centimeter to Yard
        case 9: return value * 0.0328084;                // Centimeter to Foot
        case 10: return value * 0.393701;                // Centimeter to Inch
        case 11: return value * 0.00000539957;           // Centimeter to Nautical Mile
        default: return NAN;
    }
}

// Millimeter conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMillimeter(double value, int query) {
    switch (query) {
        case 1: return value * 0.000001;                 // Millimeter to Kilometer
        case 2: return value * 0.001;                    // Millimeter to Meter
        case 3: return value * 0.1;                      // Millimeter to Centimeter
        case 4: return value;                            // Millimeter to Millimeter
        case 5: return value * 1000;                     // Millimeter to Micrometer
        case 6: return value * 1000000;                  // Millimeter to Nanometer
        case 7: return value * 6.21371e-7;               // Millimeter to Mile
        case 8: return value * 0.00109361;               // Millimeter to Yard
        case 9: return value * 0.00328084;               // Millimeter to Foot
        case 10: return value * 0.0393701;               // Millimeter to Inch
        case 11: return value * 5.39957e-7;              // Millimeter to Nautical Mile
        default: return NAN;
    }
}

// Micrometer conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMicrometer(double value, int query) {
    switch (query) {
        case 1: return value * 1e-9;                     // Micrometer to Kilometer
        case 2: return value * 1e-6;                     // Micrometer to Meter
        case 3: return value * 0.0001;                   // Micrometer to Centimeter
        case 4: return value * 0.001;                    // Micrometer to Millimeter
        case 5: return value;                            // Micrometer to Micrometer
        case 6: return value * 1000;                     // Micrometer to Nanometer
        case 7: return value * 6.21371e-10;              // Micrometer to Mile
        case 8: return value * 1.09361e-6;               // Micrometer to Yard
        case 9: return value * 3.28084e-6;               // Micrometer to Foot
        case 10: return value * 3.93701e-5;              // Micrometer to Inch
        case 11: return value * 5.39957e-10;             // Micrometer to Nautical Mile
        default: return NAN;
    }
}

// Nanometer conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromNanometer(double value, int query) {
    switch (query) {
        case 1: return value * 1e-12;                    // Nanometer to Kilometer
        case 2: return value * 1e-9;                     // Nanometer to Meter
        case 3: return value * 1e-7;                     // Nanometer to Centimeter
        case 4: return value * 1e-6;                     // Nanometer to Millimeter
        case 5: return value * 0.001;                    // Nanometer to Micrometer
        case 6: return value;                            // Nanometer to Nanometer
        case 7: return value * 6.21371e-13;              // Nanometer to Mile
        case 8: return value * 1.09361e-9;               // Nanometer to Yard
        case 9: return value * 3.28084e-9;               // Nanometer to Foot
        case 10: return value * 3.93701e-8;              // Nanometer to Inch
        case 11: return value * 5.39957e-13;             // Nanometer to Nautical Mile
        default: return NAN;
    }
}

// Mile conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMile(double value, int query) {
    switch (query) {
        case 1: return value * 1.60934;                  // Mile to Kilometer
        case 2: return value * 1609.34;                  // Mile to Meter
        case 3: return value * 160934;                   // Mile to Centimeter
        case 4: return value * 1.609e+6;                 // Mile to Millimeter
        case 5: return value * 1.609e+9;                 // Mile to Micrometer
        case 6: return value * 1.609e+12;                // Mile to Nanometer
        case 7: return value;                            // Mile to Mile
        case 8: return value * 1760;                     // Mile to Yard
        case 9: return value * 5280;                     // Mile to Foot
        case 10: return value * 63360;                   // Mile to Inch
        case 11: return value * 0.868976;                // Mile to Nautical Mile
        default: return NAN;
    }
}

// Yard conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromYard(double value, int query) {
    switch (query) {
        case 1: return value * 0.0009144;                // Yard to Kilometer
        case 2: return value * 0.9144;                   // Yard to Meter
        case 3: return value * 91.44;                    // Yard to Centimeter
        case 4: return value * 914.4;                    // Yard to Millimeter
        case 5: return value * 914400;                   // Yard to Micrometer
        case 6: return value * 9.144e+8;                 // Yard to Nanometer
        case 7: return value * 0.000568182;              // Yard to Mile
        case 8: return value;                            // Yard to Yard
        case 9: return value * 3;                        // Yard to Foot
        case 10: return value * 36;                      // Yard to Inch
        case 11: return value * 0.000493737;             // Yard to Nautical Mile
        default: return NAN;
    }
}

// Foot conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromFoot(double value, int query) {
    switch (query) {
        case 1: return value * 0.0003048;                // Foot to Kilometer
        case 2: return value * 0.3048;                   // Foot to Meter
        case 3: return value * 30.48;                    // Foot to Centimeter
        case 4: return value * 304.8;                    // Foot to Millimeter
        case 5: return value * 304800;                   // Foot to Micrometer
        case 6: return value * 3.048e+8;                 // Foot to Nanometer
        case 7: return value * 0.000189394;              // Foot to Mile
        case 8: return value * 0.333333;                 // Foot to Yard
        case 9: return value;                            // Foot to Foot
        case 10: return value * 12;                      // Foot to Inch
        case 11: return value * 0.000164579;             // Foot to Nautical Mile
        default: return NAN;
    }
}

// Inch conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromInch(double value, int query) {
    switch (query) {
        case 1: return value * 2.54e-5;                  // Inch to Kilometer
        case 2: return value * 0.0254;                   // Inch to Meter
        case 3: return value * 2.54;                     // Inch to Centimeter
        case 4: return value * 25.4;                     // Inch to Millimeter
        case 5: return value * 25400;                    // Inch to Micrometer
        case 6: return value * 2.54e+7;                  // Inch to Nanometer
        case 7: return value * 1.57828e-5;               // Inch to Mile
        case 8: return value * 0.0277778;                // Inch to Yard
        case 9: return value * 0.0833333;                // Inch to Foot
        case 10: return value;                           // Inch to Inch
        case 11: return value * 1.37149e-5;              // Inch to Nautical Mile
        default: return NAN;
    }
}

// Nautical Mile conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromNauticalMile(double value, int query) {
    switch (query) {
        case 1: return value * 1.852;                    // Nautical Mile to Kilometer
        case 2: return value * 1852;                     // Nautical Mile to Meter
        case 3: return value * 185200;                   // Nautical Mile to Centimeter
        case 4: return value * 1.852e+6;                 // Nautical Mile to Millimeter
        case 5: return value * 1.852e+9;                 // Nautical Mile to Micrometer
        case 6: return value * 1.852e+12;                // Nautical Mile to Nanometer
        case 7: return value * 1.15078;                  // Nautical Mile to Mile
        case 8: return value * 2025.37;                  // Nautical Mile to Yard
        case 9: return value * 6076.12;                  // Nautical Mile to Foot
        case 10: return value * 72913.4;                 // Nautical Mile to Inch
        case 11: return value;                           // Nautical Mile to Nautical Mile
        default: return NAN;
    }
}