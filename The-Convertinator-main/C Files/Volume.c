#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// US Liquid Gallon conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSGallon(double value, int query) {
    switch (query) {
        case 1: return value;                           // US Gallon to US Gallon
        case 2: return value * 4;                       // US Gallon to US Quart
        case 3: return value * 8;                       // US Gallon to US Pint
        case 4: return value * 15.7725;                 // US Gallon to US Legal Cup
        case 5: return value * 128;                     // US Gallon to US Fluid Ounce
        case 6: return value * 256;                     // US Gallon to US Tablespoon
        case 7: return value * 768;                     // US Gallon to US Teaspoon
        case 8: return value * 0.00378541;              // US Gallon to Cubic Meter
        case 9: return value * 3.78541;                 // US Gallon to Liter
        case 10: return value * 3785.41;                // US Gallon to Milliliter
        case 11: return value * 0.832674;               // US Gallon to Imperial Gallon
        case 12: return value * 3.33070;                // US Gallon to Imperial Quart
        case 13: return value * 6.66139;                // US Gallon to Imperial Pint
        case 14: return value * 13.3228;                // US Gallon to Imperial Cup
        case 15: return value * 133.228;                // US Gallon to Imperial Fluid Ounce
        case 16: return value * 213.165;                // US Gallon to Imperial Tablespoon
        case 17: return value * 639.494;                // US Gallon to Imperial Teaspoon
        case 18: return value * 0.133681;               // US Gallon to Cubic Foot
        case 19: return value * 231;                    // US Gallon to Cubic Inch
        default: return NAN;
    }
}

// US Quart conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSQuart(double value, int query) {
    switch (query) {
        case 1: return value * 0.25;                    // US Quart to US Gallon
        case 2: return value;                           // US Quart to US Quart
        case 3: return value * 2;                       // US Quart to US Pint
        case 4: return value * 3.94314;                 // US Quart to US Legal Cup
        case 5: return value * 32;                      // US Quart to US Fluid Ounce
        case 6: return value * 64;                      // US Quart to US Tablespoon
        case 7: return value * 192;                     // US Quart to US Teaspoon
        case 8: return value * 0.000946353;             // US Quart to Cubic Meter
        case 9: return value * 0.946353;                // US Quart to Liter
        case 10: return value * 946.353;                // US Quart to Milliliter
        case 11: return value * 0.208169;               // US Quart to Imperial Gallon
        case 12: return value * 0.832674;               // US Quart to Imperial Quart
        case 13: return value * 1.66535;                // US Quart to Imperial Pint
        case 14: return value * 3.33070;                // US Quart to Imperial Cup
        case 15: return value * 33.3070;                // US Quart to Imperial Fluid Ounce
        case 16: return value * 53.2911;                // US Quart to Imperial Tablespoon
        case 17: return value * 159.873;                // US Quart to Imperial Teaspoon
        case 18: return value * 0.0334201;              // US Quart to Cubic Foot
        case 19: return value * 57.75;                  // US Quart to Cubic Inch
        default: return NAN;
    }
}

// US Pint conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSPint(double value, int query) {
    switch (query) {
        case 1: return value * 0.125;                   // US Pint to US Gallon
        case 2: return value * 0.5;                     // US Pint to US Quart
        case 3: return value;                           // US Pint to US Pint
        case 4: return value * 1.97157;                 // US Pint to US Legal Cup
        case 5: return value * 16;                      // US Pint to US Fluid Ounce
        case 6: return value * 32;                      // US Pint to US Tablespoon
        case 7: return value * 96;                      // US Pint to US Teaspoon
        case 8: return value * 0.000473176;             // US Pint to Cubic Meter
        case 9: return value * 0.473176;                // US Pint to Liter
        case 10: return value * 473.176;                // US Pint to Milliliter
        case 11: return value * 0.104084;               // US Pint to Imperial Gallon
        case 12: return value * 0.416337;               // US Pint to Imperial Quart
        case 13: return value * 0.832674;               // US Pint to Imperial Pint
        case 14: return value * 1.66535;                // US Pint to Imperial Cup
        case 15: return value * 16.6535;                // US Pint to Imperial Fluid Ounce
        case 16: return value * 26.6456;                // US Pint to Imperial Tablespoon
        case 17: return value * 79.9367;                // US Pint to Imperial Teaspoon
        case 18: return value * 0.0167101;              // US Pint to Cubic Foot
        case 19: return value * 28.875;                 // US Pint to Cubic Inch
        default: return NAN;
    }
}

// US Legal Cup conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSLegalCup(double value, int query) {
    switch (query) {
        case 1: return value * 0.0634013;               // US Legal Cup to US Gallon
        case 2: return value * 0.253605;                // US Legal Cup to US Quart
        case 3: return value * 0.507211;                // US Legal Cup to US Pint
        case 4: return value;                           // US Legal Cup to US Legal Cup
        case 5: return value * 8.11537;                 // US Legal Cup to US Fluid Ounce
        case 6: return value * 16.2307;                 // US Legal Cup to US Tablespoon
        case 7: return value * 48.6922;                 // US Legal Cup to US Teaspoon
        case 8: return value * 0.00024;                 // US Legal Cup to Cubic Meter
        case 9: return value * 0.24;                    // US Legal Cup to Liter
        case 10: return value * 240;                    // US Legal Cup to Milliliter
        case 11: return value * 0.0527925;              // US Legal Cup to Imperial Gallon
        case 12: return value * 0.211170;               // US Legal Cup to Imperial Quart
        case 13: return value * 0.422340;               // US Legal Cup to Imperial Pint
        case 14: return value * 0.844680;               // US Legal Cup to Imperial Cup
        case 15: return value * 8.44680;                // US Legal Cup to Imperial Fluid Ounce
        case 16: return value * 13.5149;                // US Legal Cup to Imperial Tablespoon
        case 17: return value * 40.5447;                // US Legal Cup to Imperial Teaspoon
        case 18: return value * 0.00847552;             // US Legal Cup to Cubic Foot
        case 19: return value * 14.6457;                // US Legal Cup to Cubic Inch
        default: return NAN;
    }
}
// US Fluid Ounce conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSFluidOunce(double value, int query) {
    switch (query) {
        case 1: return value * 0.0078125;               // US Fluid Ounce to US Gallon
        case 2: return value * 0.03125;                 // US Fluid Ounce to US Quart
        case 3: return value * 0.0625;                  // US Fluid Ounce to US Pint
        case 4: return value * 0.123223;                // US Fluid Ounce to US Legal Cup
        case 5: return value;                           // US Fluid Ounce to US Fluid Ounce
        case 6: return value * 2;                       // US Fluid Ounce to US Tablespoon
        case 7: return value * 6;                       // US Fluid Ounce to US Teaspoon
        case 8: return value * 2.95735e-5;              // US Fluid Ounce to Cubic Meter
        case 9: return value * 0.0295735;               // US Fluid Ounce to Liter
        case 10: return value * 29.5735;                // US Fluid Ounce to Milliliter
        case 11: return value * 0.00650527;             // US Fluid Ounce to Imperial Gallon
        case 12: return value * 0.0260211;              // US Fluid Ounce to Imperial Quart
        case 13: return value * 0.0520421;              // US Fluid Ounce to Imperial Pint
        case 14: return value * 0.104084;               // US Fluid Ounce to Imperial Cup
        case 15: return value * 1.04084;                // US Fluid Ounce to Imperial Fluid Ounce
        case 16: return value * 1.66535;                // US Fluid Ounce to Imperial Tablespoon
        case 17: return value * 4.99604;                // US Fluid Ounce to Imperial Teaspoon
        case 18: return value * 0.00104438;             // US Fluid Ounce to Cubic Foot
        case 19: return value * 1.80469;                // US Fluid Ounce to Cubic Inch
        default: return NAN;
    }
}

// US Tablespoon conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSTablespoon(double value, int query) {
    switch (query) {
        case 1: return value * 0.00390625;              // US Tablespoon to US Gallon
        case 2: return value * 0.015625;                // US Tablespoon to US Quart
        case 3: return value * 0.03125;                 // US Tablespoon to US Pint
        case 4: return value * 0.0616115;               // US Tablespoon to US Legal Cup
        case 5: return value * 0.5;                     // US Tablespoon to US Fluid Ounce
        case 6: return value;                           // US Tablespoon to US Tablespoon
        case 7: return value * 3;                       // US Tablespoon to US Teaspoon
        case 8: return value * 1.47868e-5;              // US Tablespoon to Cubic Meter
        case 9: return value * 0.0147868;               // US Tablespoon to Liter
        case 10: return value * 14.7868;                // US Tablespoon to Milliliter
        case 11: return value * 0.00325263;             // US Tablespoon to Imperial Gallon
        case 12: return value * 0.0130105;              // US Tablespoon to Imperial Quart
        case 13: return value * 0.0260211;              // US Tablespoon to Imperial Pint
        case 14: return value * 0.0520421;              // US Tablespoon to Imperial Cup
        case 15: return value * 0.520421;               // US Tablespoon to Imperial Fluid Ounce
        case 16: return value * 0.832674;               // US Tablespoon to Imperial Tablespoon
        case 17: return value * 2.49802;                // US Tablespoon to Imperial Teaspoon
        case 18: return value * 0.000522189;            // US Tablespoon to Cubic Foot
        case 19: return value * 0.902344;               // US Tablespoon to Cubic Inch
        default: return NAN;
    }
}

// US Teaspoon conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromUSTeaspoon(double value, int query) {
    switch (query) {
        case 1: return value * 0.00130208;              // US Teaspoon to US Gallon
        case 2: return value * 0.00520833;              // US Teaspoon to US Quart
        case 3: return value * 0.0104167;               // US Teaspoon to US Pint
        case 4: return value * 0.0205372;               // US Teaspoon to US Legal Cup
        case 5: return value * 0.166667;                // US Teaspoon to US Fluid Ounce
        case 6: return value * 0.333333;                // US Teaspoon to US Tablespoon
        case 7: return value;                           // US Teaspoon to US Teaspoon
        case 8: return value * 4.92892e-6;              // US Teaspoon to Cubic Meter
        case 9: return value * 0.00492892;              // US Teaspoon to Liter
        case 10: return value * 4.92892;                // US Teaspoon to Milliliter
        case 11: return value * 0.00108421;             // US Teaspoon to Imperial Gallon
        case 12: return value * 0.00433684;             // US Teaspoon to Imperial Quart
        case 13: return value * 0.00867369;             // US Teaspoon to Imperial Pint
        case 14: return value * 0.0173474;              // US Teaspoon to Imperial Cup
        case 15: return value * 0.173474;               // US Teaspoon to Imperial Fluid Ounce
        case 16: return value * 0.277558;               // US Teaspoon to Imperial Tablespoon
        case 17: return value * 0.832674;               // US Teaspoon to Imperial Teaspoon
        case 18: return value * 0.000174063;            // US Teaspoon to Cubic Foot
        case 19: return value * 0.300781;               // US Teaspoon to Cubic Inch
        default: return NAN;
    }
}

// Cubic Meter conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromCubicMeter(double value, int query) {
    switch (query) {
        case 1: return value * 264.172;                 // Cubic Meter to US Gallon
        case 2: return value * 1056.69;                 // Cubic Meter to US Quart
        case 3: return value * 2113.38;                 // Cubic Meter to US Pint
        case 4: return value * 4166.67;                 // Cubic Meter to US Legal Cup
        case 5: return value * 33814;                   // Cubic Meter to US Fluid Ounce
        case 6: return value * 67628;                   // Cubic Meter to US Tablespoon
        case 7: return value * 202884;                  // Cubic Meter to US Teaspoon
        case 8: return value;                           // Cubic Meter to Cubic Meter
        case 9: return value * 1000;                    // Cubic Meter to Liter
        case 10: return value * 1000000;                // Cubic Meter to Milliliter
        case 11: return value * 219.969;                // Cubic Meter to Imperial Gallon
        case 12: return value * 879.877;                // Cubic Meter to Imperial Quart
        case 13: return value * 1759.75;                // Cubic Meter to Imperial Pint
        case 14: return value * 3519.51;                // Cubic Meter to Imperial Cup
        case 15: return value * 35195.1;                // Cubic Meter to Imperial Fluid Ounce
        case 16: return value * 56312.1;                // Cubic Meter to Imperial Tablespoon
        case 17: return value * 168936;                 // Cubic Meter to Imperial Teaspoon
        case 18: return value * 35.3147;                // Cubic Meter to Cubic Foot
        case 19: return value * 61023.7;                // Cubic Meter to Cubic Inch
        default: return NAN;
    }
}

// Liter conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromLiter(double value, int query) {
    switch (query) {
        case 1: return value * 0.264172;                // Liter to US Gallon
        case 2: return value * 1.05669;                 // Liter to US Quart
        case 3: return value * 2.11338;                 // Liter to US Pint
        case 4: return value * 4.16667;                 // Liter to US Legal Cup
        case 5: return value * 33.814;                  // Liter to US Fluid Ounce
        case 6: return value * 67.628;                  // Liter to US Tablespoon
        case 7: return value * 202.884;                 // Liter to US Teaspoon
        case 8: return value * 0.001;                   // Liter to Cubic Meter
        case 9: return value;                           // Liter to Liter
        case 10: return value * 1000;                   // Liter to Milliliter
        case 11: return value * 0.219969;               // Liter to Imperial Gallon
        case 12: return value * 0.879877;               // Liter to Imperial Quart
        case 13: return value * 1.75975;                // Liter to Imperial Pint
        case 14: return value * 3.51951;                // Liter to Imperial Cup
        case 15: return value * 35.1951;                // Liter to Imperial Fluid Ounce
        case 16: return value * 56.3121;                // Liter to Imperial Tablespoon
        case 17: return value * 168.936;                // Liter to Imperial Teaspoon
        case 18: return value * 0.0353147;              // Liter to Cubic Foot
        case 19: return value * 61.0237;                // Liter to Cubic Inch
        default: return NAN;
    }
}

// Milliliter conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromMilliliter(double value, int query) {
    switch (query) {
        case 1: return value * 0.000264172;             // Milliliter to US Gallon
        case 2: return value * 0.00105669;              // Milliliter to US Quart
        case 3: return value * 0.00211338;              // Milliliter to US Pint
        case 4: return value * 0.00416667;              // Milliliter to US Legal Cup
        case 5: return value * 0.033814;                // Milliliter to US Fluid Ounce
        case 6: return value * 0.067628;                // Milliliter to US Tablespoon
        case 7: return value * 0.202884;                // Milliliter to US Teaspoon
        case 8: return value * 0.000001;                // Milliliter to Cubic Meter
        case 9: return value * 0.001;                   // Milliliter to Liter
        case 10: return value;                          // Milliliter to Milliliter
        case 11: return value * 0.000219969;            // Milliliter to Imperial Gallon
        case 12: return value * 0.000879877;            // Milliliter to Imperial Quart
        case 13: return value * 0.00175975;             // Milliliter to Imperial Pint
        case 14: return value * 0.00351951;             // Milliliter to Imperial Cup
        case 15: return value * 0.0351951;              // Milliliter to Imperial Fluid Ounce
        case 16: return value * 0.0563121;              // Milliliter to Imperial Tablespoon
        case 17: return value * 0.168936;               // Milliliter to Imperial Teaspoon
        case 18: return value * 0.0000353147;           // Milliliter to Cubic Foot
        case 19: return value * 0.0610237;              // Milliliter to Cubic Inch
        default: return NAN;
    }
}

// Imperial Gallon conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialGallon(double value, int query) {
    switch (query) {
        case 1: return value * 1.20095;                 // Imperial Gallon to US Gallon
        case 2: return value * 4.8038;                  // Imperial Gallon to US Quart
        case 3: return value * 9.6076;                  // Imperial Gallon to US Pint
        case 4: return value * 18.942;                  // Imperial Gallon to US Legal Cup
        case 5: return value * 153.722;                 // Imperial Gallon to US Fluid Ounce
        case 6: return value * 307.443;                 // Imperial Gallon to US Tablespoon
        case 7: return value * 922.33;                  // Imperial Gallon to US Teaspoon
        case 8: return value * 0.00454609;              // Imperial Gallon to Cubic Meter
        case 9: return value * 4.54609;                 // Imperial Gallon to Liter
        case 10: return value * 4546.09;                // Imperial Gallon to Milliliter
        case 11: return value;                          // Imperial Gallon to Imperial Gallon
        case 12: return value * 4;                      // Imperial Gallon to Imperial Quart
        case 13: return value * 8;                      // Imperial Gallon to Imperial Pint
        case 14: return value * 16;                     // Imperial Gallon to Imperial Cup
        case 15: return value * 160;                    // Imperial Gallon to Imperial Fluid Ounce
        case 16: return value * 256;                    // Imperial Gallon to Imperial Tablespoon
        case 17: return value * 768;                    // Imperial Gallon to Imperial Teaspoon
        case 18: return value * 0.160544;               // Imperial Gallon to Cubic Foot
        case 19: return value * 277.419;                // Imperial Gallon to Cubic Inch
        default: return NAN;
    }
}

// Imperial Quart conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialQuart(double value, int query) {
    switch (query) {
        case 1: return value * 0.300238;                // Imperial Quart to US Gallon
        case 2: return value * 1.20095;                 // Imperial Quart to US Quart
        case 3: return value * 2.4019;                  // Imperial Quart to US Pint
        case 4: return value * 4.73551;                 // Imperial Quart to US Legal Cup
        case 5: return value * 38.4304;                 // Imperial Quart to US Fluid Ounce
        case 6: return value * 76.8608;                 // Imperial Quart to US Tablespoon
        case 7: return value * 230.582;                 // Imperial Quart to US Teaspoon
        case 8: return value * 0.00113652;              // Imperial Quart to Cubic Meter
        case 9: return value * 1.13652;                 // Imperial Quart to Liter
        case 10: return value * 1136.52;                // Imperial Quart to Milliliter
        case 11: return value * 0.25;                   // Imperial Quart to Imperial Gallon
        case 12: return value;                          // Imperial Quart to Imperial Quart
        case 13: return value * 2;                      // Imperial Quart to Imperial Pint
        case 14: return value * 4;                      // Imperial Quart to Imperial Cup
        case 15: return value * 40;                     // Imperial Quart to Imperial Fluid Ounce
        case 16: return value * 64;                     // Imperial Quart to Imperial Tablespoon
        case 17: return value * 192;                    // Imperial Quart to Imperial Teaspoon
        case 18: return value * 0.0401359;              // Imperial Quart to Cubic Foot
        case 19: return value * 69.3549;                // Imperial Quart to Cubic Inch
        default: return NAN;
    }
}

// Imperial Pint conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialPint(double value, int query) {
    switch (query) {
        case 1: return value * 0.150119;                // Imperial Pint to US Gallon
        case 2: return value * 0.600475;                // Imperial Pint to US Quart
        case 3: return value * 1.20095;                 // Imperial Pint to US Pint
        case 4: return value * 2.36776;                 // Imperial Pint to US Legal Cup
        case 5: return value * 19.2152;                 // Imperial Pint to US Fluid Ounce
        case 6: return value * 38.4304;                 // Imperial Pint to US Tablespoon
        case 7: return value * 115.291;                 // Imperial Pint to US Teaspoon
        case 8: return value * 0.000568261;             // Imperial Pint to Cubic Meter
        case 9: return value * 0.568261;                // Imperial Pint to Liter
        case 10: return value * 568.261;                // Imperial Pint to Milliliter
        case 11: return value * 0.125;                  // Imperial Pint to Imperial Gallon
        case 12: return value * 0.5;                    // Imperial Pint to Imperial Quart
        case 13: return value;                          // Imperial Pint to Imperial Pint
        case 14: return value * 2;                      // Imperial Pint to Imperial Cup
        case 15: return value * 20;                     // Imperial Pint to Imperial Fluid Ounce
        case 16: return value * 32;                     // Imperial Pint to Imperial Tablespoon
        case 17: return value * 96;                     // Imperial Pint to Imperial Teaspoon
        case 18: return value * 0.0200680;              // Imperial Pint to Cubic Foot
        case 19: return value * 34.6774;                // Imperial Pint to Cubic Inch
        default: return NAN;
    }
}


// Imperial Cup conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialCup(double value, int query) {
    switch (query) {
        case 1: return value * 0.0750594;               // Imperial Cup to US Gallon
        case 2: return value * 0.300238;                // Imperial Cup to US Quart
        case 3: return value * 0.600475;                // Imperial Cup to US Pint
        case 4: return value * 1.18388;                 // Imperial Cup to US Legal Cup
        case 5: return value * 9.6076;                  // Imperial Cup to US Fluid Ounce
        case 6: return value * 19.2152;                 // Imperial Cup to US Tablespoon
        case 7: return value * 57.6456;                 // Imperial Cup to US Teaspoon
        case 8: return value * 0.000284131;             // Imperial Cup to Cubic Meter
        case 9: return value * 0.284131;                // Imperial Cup to Liter
        case 10: return value * 284.131;                // Imperial Cup to Milliliter
        case 11: return value * 0.0625;                 // Imperial Cup to Imperial Gallon
        case 12: return value * 0.25;                   // Imperial Cup to Imperial Quart
        case 13: return value * 0.5;                    // Imperial Cup to Imperial Pint
        case 14: return value;                          // Imperial Cup to Imperial Cup
        case 15: return value * 10;                     // Imperial Cup to Imperial Fluid Ounce
        case 16: return value * 16;                     // Imperial Cup to Imperial Tablespoon
        case 17: return value * 48;                     // Imperial Cup to Imperial Teaspoon
        case 18: return value * 0.0100340;              // Imperial Cup to Cubic Foot
        case 19: return value * 17.3387;                // Imperial Cup to Cubic Inch
        default: return NAN;
    }
}

// Imperial Fluid Ounce conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialFluidOunce(double value, int query) {
    switch (query) {
        case 1: return value * 0.00750594;              // Imperial Fluid Ounce to US Gallon
        case 2: return value * 0.0300238;               // Imperial Fluid Ounce to US Quart
        case 3: return value * 0.0600475;               // Imperial Fluid Ounce to US Pint
        case 4: return value * 0.118388;                // Imperial Fluid Ounce to US Legal Cup
        case 5: return value * 0.96076;                 // Imperial Fluid Ounce to US Fluid Ounce
        case 6: return value * 1.92152;                 // Imperial Fluid Ounce to US Tablespoon
        case 7: return value * 5.76456;                 // Imperial Fluid Ounce to US Teaspoon
        case 8: return value * 2.84131e-5;              // Imperial Fluid Ounce to Cubic Meter
        case 9: return value * 0.0284131;               // Imperial Fluid Ounce to Liter
        case 10: return value * 28.4131;                // Imperial Fluid Ounce to Milliliter
        case 11: return value * 0.00625;                // Imperial Fluid Ounce to Imperial Gallon
        case 12: return value * 0.025;                  // Imperial Fluid Ounce to Imperial Quart
        case 13: return value * 0.05;                   // Imperial Fluid Ounce to Imperial Pint
        case 14: return value * 0.1;                    // Imperial Fluid Ounce to Imperial Cup
        case 15: return value;                          // Imperial Fluid Ounce to Imperial Fluid Ounce
        case 16: return value * 1.6;                    // Imperial Fluid Ounce to Imperial Tablespoon
        case 17: return value * 4.8;                    // Imperial Fluid Ounce to Imperial Teaspoon
        case 18: return value * 0.00100340;             // Imperial Fluid Ounce to Cubic Foot
        case 19: return value * 1.73387;                // Imperial Fluid Ounce to Cubic Inch
        default: return NAN;
    }
}

// Imperial Tablespoon conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialTablespoon(double value, int query) {
    switch (query) {
        case 1: return value * 0.00469121;              // Imperial Tablespoon to US Gallon
        case 2: return value * 0.0187649;               // Imperial Tablespoon to US Quart
        case 3: return value * 0.0375297;               // Imperial Tablespoon to US Pint
        case 4: return value * 0.0739925;               // Imperial Tablespoon to US Legal Cup
        case 5: return value * 0.600475;                // Imperial Tablespoon to US Fluid Ounce
        case 6: return value * 1.20095;                 // Imperial Tablespoon to US Tablespoon
        case 7: return value * 3.60285;                 // Imperial Tablespoon to US Teaspoon
        case 8: return value * 1.77582e-5;              // Imperial Tablespoon to Cubic Meter
        case 9: return value * 0.0177582;               // Imperial Tablespoon to Liter
        case 10: return value * 17.7582;                // Imperial Tablespoon to Milliliter
        case 11: return value * 0.00390625;             // Imperial Tablespoon to Imperial Gallon
        case 12: return value * 0.015625;               // Imperial Tablespoon to Imperial Quart
        case 13: return value * 0.03125;                // Imperial Tablespoon to Imperial Pint
        case 14: return value * 0.0625;                 // Imperial Tablespoon to Imperial Cup
        case 15: return value * 0.625;                  // Imperial Tablespoon to Imperial Fluid Ounce
        case 16: return value;                          // Imperial Tablespoon to Imperial Tablespoon
        case 17: return value * 3;                      // Imperial Tablespoon to Imperial Teaspoon
        case 18: return value * 0.000627125;            // Imperial Tablespoon to Cubic Foot
        case 19: return value * 1.08367;                // Imperial Tablespoon to Cubic Inch
        default: return NAN;
    }
}

// Imperial Teaspoon conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromImperialTeaspoon(double value, int query) {
    switch (query) {
        case 1: return value * 0.00156374;              // Imperial Teaspoon to US Gallon
        case 2: return value * 0.00625495;              // Imperial Teaspoon to US Quart
        case 3: return value * 0.0125099;               // Imperial Teaspoon to US Pint
        case 4: return value * 0.0246642;               // Imperial Teaspoon to US Legal Cup
        case 5: return value * 0.200158;                // Imperial Teaspoon to US Fluid Ounce
        case 6: return value * 0.400317;                // Imperial Teaspoon to US Tablespoon
        case 7: return value * 1.20095;                 // Imperial Teaspoon to US Teaspoon
        case 8: return value * 5.91939e-6;              // Imperial Teaspoon to Cubic Meter
        case 9: return value * 0.00591939;              // Imperial Teaspoon to Liter
        case 10: return value * 5.91939;                // Imperial Teaspoon to Milliliter
        case 11: return value * 0.00130208;             // Imperial Teaspoon to Imperial Gallon
        case 12: return value * 0.00520833;             // Imperial Teaspoon to Imperial Quart
        case 13: return value * 0.0104167;              // Imperial Teaspoon to Imperial Pint
        case 14: return value * 0.0208333;              // Imperial Teaspoon to Imperial Cup
        case 15: return value * 0.208333;               // Imperial Teaspoon to Imperial Fluid Ounce
        case 16: return value * 0.333333;               // Imperial Teaspoon to Imperial Tablespoon
        case 17: return value;                          // Imperial Teaspoon to Imperial Teaspoon
        case 18: return value * 0.000209042;            // Imperial Teaspoon to Cubic Foot
        case 19: return value * 0.361223;               // Imperial Teaspoon to Cubic Inch
        default: return NAN;
    }
}

// Cubic Foot conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromCubicFoot(double value, int query) {
    switch (query) {
        case 1: return value * 7.48052;                 // Cubic Foot to US Gallon
        case 2: return value * 29.9221;                 // Cubic Foot to US Quart
        case 3: return value * 59.8442;                 // Cubic Foot to US Pint
        case 4: return value * 118.0;                   // Cubic Foot to US Legal Cup
        case 5: return value * 957.506;                 // Cubic Foot to US Fluid Ounce
        case 6: return value * 1915.01;                 // Cubic Foot to US Tablespoon
        case 7: return value * 5745.04;                 // Cubic Foot to US Teaspoon
        case 8: return value * 0.0283168;               // Cubic Foot to Cubic Meter
        case 9: return value * 28.3168;                 // Cubic Foot to Liter
        case 10: return value * 28316.8;                // Cubic Foot to Milliliter
        case 11: return value * 6.22884;                // Cubic Foot to Imperial Gallon
        case 12: return value * 24.9153;                // Cubic Foot to Imperial Quart
        case 13: return value * 49.8307;                // Cubic Foot to Imperial Pint
        case 14: return value * 99.6614;                // Cubic Foot to Imperial Cup
        case 15: return value * 996.614;                // Cubic Foot to Imperial Fluid Ounce
        case 16: return value * 1594.58;                // Cubic Foot to Imperial Tablespoon
        case 17: return value * 4783.74;                // Cubic Foot to Imperial Teaspoon
        case 18: return value;                          // Cubic Foot to Cubic Foot
        case 19: return value * 1728;                   // Cubic Foot to Cubic Inch
        default: return NAN;
    }
}

// Cubic Inch conversions
EMSCRIPTEN_KEEPALIVE
double ConvertFromCubicInch(double value, int query) {
    switch (query) {
        case 1: return value * 0.004329;                // Cubic Inch to US Gallon
        case 2: return value * 0.017316;                // Cubic Inch to US Quart
        case 3: return value * 0.034632;                // Cubic Inch to US Pint
        case 4: return value * 0.068297;                // Cubic Inch to US Legal Cup
        case 5: return value * 0.554113;                // Cubic Inch to US Fluid Ounce
        case 6: return value * 1.10823;                 // Cubic Inch to US Tablespoon
        case 7: return value * 3.32468;                 // Cubic Inch to US Teaspoon
        case 8: return value * 1.63871e-5;              // Cubic Inch to Cubic Meter
        case 9: return value * 0.0163871;               // Cubic Inch to Liter
        case 10: return value * 16.3871;                // Cubic Inch to Milliliter
        case 11: return value * 0.003605;               // Cubic Inch to Imperial Gallon
        case 12: return value * 0.014420;               // Cubic Inch to Imperial Quart
        case 13: return value * 0.028841;               // Cubic Inch to Imperial Pint
        case 14: return value * 0.057682;               // Cubic Inch to Imperial Cup
        case 15: return value * 0.576819;               // Cubic Inch to Imperial Fluid Ounce
        case 16: return value * 0.922911;               // Cubic Inch to Imperial Tablespoon
        case 17: return value * 2.76873;                // Cubic Inch to Imperial Teaspoon
        case 18: return value * 0.000578704;            // Cubic Inch to Cubic Foot
        case 19: return value;                          // Cubic Inch to Cubic Inch
        default: return NAN;
    }
}