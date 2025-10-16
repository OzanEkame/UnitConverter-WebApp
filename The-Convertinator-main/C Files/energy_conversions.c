#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Conversion For Joule

EMSCRIPTEN_KEEPALIVE
double convertJoule(double Joule, int query) {

    switch(query) {
        case 1: return Joule;                         // Joule
        case 2: return Joule / 1000.0;                // Kilojoule
        case 3: return Joule / 4.184;                 // Gram calorie
        case 4: return Joule / 4184.0;                // Kilocalorie
        case 5: return Joule / 3600.0;                // Watt-hour
        case 6: return Joule / 3.6e+6;                // Kilowatt-hour
        case 7: return Joule * 6.242e+18;             // Electronvolt
        case 8: return Joule / 1055.0;                // British thermal unit (BTU)
        case 9: return Joule / 1.055e+8;              // Therm
        case 10: return Joule / 1.356;                // Foot-pound
        default: return NAN;                          // Invalid Query
    }
}

// Conversion For Kilojoule

EMSCRIPTEN_KEEPALIVE
double convertKilojoule(double Kilojoule, int query) {

    switch(query) {
        case 1: return Kilojoule * 1000.0;             // Joule
        case 2: return Kilojoule;                      // Kilojoule
        case 3: return Kilojoule * 239.0;              // Gram calorie
        case 4: return Kilojoule / 4.184;              // Kilocalorie
        case 5: return Kilojoule * 0.277778;           // Watt-hour
        case 6: return Kilojoule / 3600.0;             // Kilowatt-hour
        case 7: return Kilojoule * 6.242e+21;          // Electronvolt
        case 8: return Kilojoule / 1.055;              // British thermal unit (BTU)
        case 9: return Kilojoule / 1.055e+5;           // Therm
        case 10: return Kilojoule * 737.6;             // Foot-pound
        default: return NAN;                           // Invalid Query
    }
}

// Conversion For Gram Calorie

EMSCRIPTEN_KEEPALIVE
double convertGramCalorie(double GramCalorie, int query) {

    switch(query) {
        case 1: return GramCalorie * 4.184;               // Joule
        case 2: return GramCalorie / 239.0;               // Kilojoule
        case 3: return GramCalorie;                       // Gramcalorie
        case 4: return GramCalorie / 1000.0;              // Kilocalorie
        case 5: return GramCalorie / 860.4;               // Watt-hour
        case 6: return GramCalorie / 860400.0;            // Kilowatt-hour
        case 7: return GramCalorie * 2.611e+19;           // Electronvolt
        case 8: return GramCalorie / 252.2;               // British thermal unit (BTU)
        case 9: return GramCalorie / 2.521e+7;            // Therm
        case 10: return GramCalorie * 3.086;              // Foot-pound
        default: return NAN;                              // Invalid Query
    }
}

// Conversion For Kilocalorie

EMSCRIPTEN_KEEPALIVE
double convertKilocalorie(double Kilocalorie, int query) {

    switch(query) {
        case 1: return Kilocalorie * 4184.0;               // Joule
        case 2: return Kilocalorie * 4.184;                // Kilojoule
        case 3: return Kilocalorie * 1000.0;               // Gram calorie
        case 4: return Kilocalorie;                        // Kilocalorie
        case 5: return Kilocalorie * 1.162;                // Watt-hour
        case 6: return Kilocalorie / 860.4;                // Kilowatt-hour
        case 7: return Kilocalorie * 2.611e+22;            // Electronvolt
        case 8: return Kilocalorie * 3.966;                // British thermal unit (BTU)
        case 9: return Kilocalorie / 25210.0;              // Therm
        case 10: return Kilocalorie * 3086.0;              // Foot-pound
        default: return NAN;                               // Invalid Query
    }
}

// Conversion For Watt-hour

EMSCRIPTEN_KEEPALIVE
double convertWattHour(double WattHour, int query) {

    switch(query) {
        case 1: return WattHour * 3600.0;                 // Joule
        case 2: return WattHour * 3.6;                    // Kilojoule
        case 3: return WattHour * 860.4;                  // Gram calorie
        case 4: return WattHour / 1.162;                  // Kilocalorie
        case 5: return WattHour;                          // WattHour
        case 6: return WattHour / 1000.0;                 // Kilowatt-hour
        case 7: return WattHour * 2.247e+22;              // Electronvolt
        case 8: return WattHour * 3.412;                  // British thermal unit (BTU)
        case 9: return WattHour / 29300.0;                // Therm
        case 10: return WattHour * 2655.0;                // Foot-pound
        default: return NAN;                              // Invalid Query
    }
}

// Conversion For Kilowatt-hour

EMSCRIPTEN_KEEPALIVE
double convertKilowattHour(double KilowattHour, int query) {

    switch(query) {
        case 1: return KilowattHour * 3.6e+6;               // Joule
        case 2: return KilowattHour * 3600.0;               // Kilojoule
        case 3: return KilowattHour * 860400.0;             // Gram calorie
        case 4: return KilowattHour * 860.4;                // Kilocalorie
        case 5: return KilowattHour * 1000.0;               // Watt-hour
        case 6: return KilowattHour;                        // KilowattHour
        case 7: return KilowattHour * 2.247e+25;            // Electronvolt
        case 8: return KilowattHour * 3412.0;               // British thermal unit (BTU)
        case 9: return KilowattHour / 29.3;                 // Therm
        case 10: return KilowattHour * 2.655e+6;            // Foot-pound
        default: return NAN;                                // Invalid Query
    }
}


// Conversion For Electronvolt

EMSCRIPTEN_KEEPALIVE
double convertElectronvolt(double Electronvolt, int query) {

    switch(query) {
        case 1: return Electronvolt / 6.242e+18;           // Joule
        case 2: return Electronvolt / 6.242e+21;           // Kilojoule
        case 3: return Electronvolt / 2.611e+19;           // Gram calorie
        case 4: return Electronvolt / 2.611e+22;           // Kilocalorie
        case 5: return Electronvolt / 2.247e+22;           // Watt-hour
        case 6: return Electronvolt * 2.247e+25;           // Kilowatt-hour
        case 7: return Electronvolt;                       // Electronvolt
        case 8: return Electronvolt / 6.585e+21;           // British thermal unit (BTU)
        case 9: return Electronvolt / 6.584e+26;           // Therm
        case 10: return Electronvolt / 8.462e+18;          // Foot-pound
        default: return NAN;                               // Invalid Query
    }
}

// Conversion For British Thermal Unit

EMSCRIPTEN_KEEPALIVE
double convertBTU(double BTU, int query) {

    switch(query) {
        case 1: return BTU * 1055.0;                     // Joule
        case 2: return BTU * 1.055;                      // Kilojoule
        case 3: return BTU * 252.2;                      // Gram calorie
        case 4: return BTU / 3.966;                      // Kilocalorie
        case 5: return BTU / 3.412;                      // Watt-hour
        case 6: return BTU / 3412.0;                     // Kilowatt-hour
        case 7: return BTU * 6.585e+21;                  // Electronvolt
        case 8: return BTU;                              // BTU
        case 9: return BTU * 99980.0;                    // Therm
        case 10: return BTU * 778.2;                     // Foot-pound
        default: return NAN;                             // Invalid Query
    }
}

// Conversion For US Therm

EMSCRIPTEN_KEEPALIVE
double convertUSTherm(double USTherm, int query) {

    switch(query) {
        case 1: return USTherm * 1.055e+8;                 // Joule
        case 2: return USTherm * 105500.0;                 // Kilojoule
        case 3: return USTherm * 2.521e+7;                 // Gram calorie
        case 4: return USTherm * 25210.0;                  // Kilocalorie
        case 5: return USTherm * 29300.0;                  // Watt-hour
        case 6: return USTherm * 29.3;                     // Kilowatt-hour
        case 7: return USTherm * 6.584e+26;                // Electronvolt
        case 8: return USTherm * 99980.0;                  // British thermal unit (BTU)
        case 9: return USTherm;                            // Therm
        case 10: return USTherm * 7.78e+7;                  // Foot-pound
        default: return NAN;                               // Invalid Query
    }
}

// Conversion For Foot-pound

EMSCRIPTEN_KEEPALIVE
double convertFootPound(double FootPound, int query) {

    switch(query) {
        case 1: return FootPound * 1.356;                   // Joule
        case 2: return FootPound / 737.6;                   // Kilojoule
        case 3: return FootPound / 3.086;                   // Gram calorie
        case 4: return FootPound / 3086.0;                  // Kilocalorie
        case 5: return FootPound / 2655.0;                  // Watt-hour
        case 6: return FootPound / 2.655e+6;                // Kilowatt-hour
        case 7: return FootPound * 8.462e+18;               // Electronvolt
        case 8: return FootPound / 778.2;                   // British thermal unit (BTU)
        case 9: return FootPound / 7.78e+7;                 // US Therm
        case 10: return FootPound;                          // FootPound
        default: return NAN;                                // Invalid Query
    }
}