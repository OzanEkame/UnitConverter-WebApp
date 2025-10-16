#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <emscripten.h>

//The function utilizes a switch statement to determine the type of conversion to apply. Depending on the value of query, the function calculates the equivalent value in a different unit or returns the input unchanged. If an invalid query is provided, the function returns NAN to indicate an error. The EMSCRIPTEN_KEEPALIVE directive ensures the function remains accessible in a WebAssembly context when compiled using Emscripten.

// Conversion For Nanosecond

EMSCRIPTEN_KEEPALIVE
double convertNanosecond(double Nanosecond, int query) {

    switch(query) {
        case 1: return Nanosecond;                          // Nanosecond
        case 2: return Nanosecond / 1000.0;                 // Millisecond (ms)
        case 3: return Nanosecond / 1e+6;                   // Microsecond (µs)
        case 4: return Nanosecond / 1e+9;                   // Second (s)
        case 5: return Nanosecond / 6e+10;                  // Minute (min)
        case 6: return Nanosecond / 3.6e+12;                // Hour (h)
        case 7: return Nanosecond / 8.64e+13;               // Day (d)
        case 8: return Nanosecond / 6.048e+14;              // Week (w)
        case 9: return Nanosecond / 2.628e+15;              // Month (mo)
        case 10: return Nanosecond / 3.154e+16;             // Year (yr)
        case 11: return Nanosecond / 3.154e+17;             // Decade (decade)
        case 12: return Nanosecond / 3.171e+18;             // Century (century)
        default: return NAN;                                // Invalid Query
    }
}

// Conversion For Millisecond

EMSCRIPTEN_KEEPALIVE
double convertMillisecond(double Millisecond, int query) {

    switch(query) {
        case 1: return Millisecond * 1e+6;                  // Nanosecond (nns)
        case 2: return Millisecond;                         // Millisecond
        case 3: return Millisecond * 1000.0;                // Microsecond (ms)
        case 4: return Millisecond / 1000.0;                // Second (s)
        case 5: return Millisecond / 60000.0;               // Minute (min)
        case 6: return Millisecond / 3.6e+6;                // Hour (h)
        case 7: return Millisecond / 8.64e+7;               // Day (d)
        case 8: return Millisecond / 6.048e+8;              // Week (w)
        case 9: return Millisecond / 2.628e+9;              // Month (mo)
        case 10: return Millisecond / 3.154e+10;            // Year (yr)
        case 11: return Millisecond / 3.154e+11;            // Decade (decade)
        case 12: return Millisecond / 3.154e+12;            // Century (century)
        default: return NAN;                                // Invalid Query
    }
}

// Conversion For Microsecond

EMSCRIPTEN_KEEPALIVE
double convertMicrosecond(double Microsecond, int query) {

    switch(query) {
        case 1: return Microsecond * 1000.0;               // Nanosecond (nns)
        case 2: return Microsecond / 1000.0;               // Millisecond (ms)
        case 3: return Microsecond;                        // Microsecond
        case 4: return Microsecond / 1e+6;                 // Second (s)
        case 5: return Microsecond / 6e+7;                 // Minute (min)
        case 6: return Microsecond / 3.6e+9;               // Hour (h)
        case 7: return Microsecond / 8.64e+10;             // Day (d)
        case 8: return Microsecond / 6.048e+11;            // Week (w)
        case 9: return Microsecond / 2.628e+12;            // Month (mo)
        case 10: return Microsecond / 3.154e+13;           // Year (yr)
        case 11: return Microsecond / 3.154e+14;           // Decade (decade)
        case 12: return Microsecond / 3.154e+15;           // Century (century)
        default: return NAN;                               // Invalid Query
    }
}

// Conversion For Second

EMSCRIPTEN_KEEPALIVE
double convertSecond(double Second, int query) {

    switch(query) {
        case 1: return Second * 1e+9;                    // Nanosecond (nns)
        case 2: return Second * 1e+6;                    // Microsecond (ms)
        case 3: return Second * 1000.0;                  // Millisecond (mls)
        case 4: return Second;                           // Second
        case 5: return Second / 60.0;                    // Minute (min)
        case 6: return Second / 3600.0;                  // Hour (h)
        case 7: return Second / 86400.0;                 // Day (d)
        case 8: return Second / 604800.0;                // Week (w)
        case 9: return Second / 2.628e+6;                // Month (mo)
        case 10: return Second / 3.154e+7;               // Year (yr)
        case 11: return Second / 3.154e+8;               // Decade (decade)
        case 12: return Second / 3.154e+9;               // Century (century)
        default: return NAN;                             // Invalid Query
    }
}

// Conversion For Minute

EMSCRIPTEN_KEEPALIVE
double convertMinute(double Minute, int query) {

    switch(query) {
        case 1: return Minute * 6e+6;                    // Nanosecond (nns)
        case 2: return Minute * 6e+7;                    // Microsecond (ms)
        case 3: return Minute * 60000.0;                 // Millisecond (mls)
        case 4: return Minute * 60.0;                    // Second (sec)
        case 5: return Minute;                           // Minute
        case 6: return Minute / 60.0;                    // Hour (h)
        case 7: return Minute / 1440.0;                  // Day (d)
        case 8: return Minute / 10080.0;                 // Week (w)
        case 9: return Minute / 43800.0;                 // Month (mo)
        case 10: return Minute / 525600.0;               // Year (yr)
        case 11: return Minute / 5.256e+6;               // Decade (decade)
        case 12: return Minute / 5.256e+7;               // Century (century)
        default: return NAN;                             // Invalid Query
    }
}

// Conversion For Hour

EMSCRIPTEN_KEEPALIVE
double convertHour(double Hour, int query) {

    switch(query) {
        case 1: return Hour * 3.6e+12;              // Nanosecond (nns)
        case 2: return Hour * 3.6e+9;               // Microsecond (ms)
        case 3: return Hour * 3.6e+6;               // Millisecond (mls)
        case 4: return Hour * 3600.0;               // Second (sec)
        case 5: return Hour * 60.0;                 // Minute (min)
        case 6: return Hour;                        // Hour
        case 7: return Hour / 24.0;                 // Day (d)
        case 8: return Hour / 168.0;                // Week (w)
        case 9: return Hour / 730.0;                // Month (mo)
        case 10: return Hour / 8760.0;              // Year (yr)
        case 11: return Hour / 87600.0;             // Decade (decade)
        case 12: return Hour / 876000.0;            // Century (century)
        default: return NAN;                        // Invalid Query
    }
}

// Conversion For Day

EMSCRIPTEN_KEEPALIVE
double convertDay(double Day, int query) {

    switch(query) {
        case 1: return Day * 8.64e+13;             // Nanosecond (nns)
        case 2: return Day * 8.64e+10;             // Microsecond (ms)
        case 3: return Day * 8.64e+7;              // Millisecond (mls)
        case 4: return Day * 86400.0;              // Second (sec)
        case 5: return Day * 1440.0;               // Minute (min)
        case 6: return Day * 24.0;                 // Hour (h)
        case 7: return Day;                        // Day
        case 8: return Day / 7.0;                  // Week (w)
        case 9: return Day / 30.417;               // Month (mo)
        case 10: return Day / 365.0;               // Year (yr)
        case 11: return Day / 3650.0;              // Decade (decade)
        case 12: return Day / 36500.0;             // Century (century)
        default: return NAN;                       // Invalid Query
    }
}

// Conversion For Week

EMSCRIPTEN_KEEPALIVE
double convertWeek(double Week, int query) {

    switch(query) {
        case 1: return Week * 6.048e+14;             // Nanosecond (nns)
        case 2: return Week * 6.048e+11;             // Microsecond (ms)
        case 3: return Week * 6.048e+8;              // Millisecond (mls)
        case 4: return Week * 604800.0;              // Second (sec)
        case 5: return Week * 10080.0;               // Minute (min)
        case 6: return Week * 168.0;                 // Hour (hr)
        case 7: return Week * 7.0;                   // Day (d)
        case 8: return Week;                         // Week
        case 9: return Week / 4.345;                 // Month (mo)
        case 10: return Week / 52.143;                // Year (yr)
        case 11: return Week / 521.4;                // Decade (decade)
        case 12: return Week / 5214.0;               // Century (century)
        default: return NAN;                         // Invalid Query
    }
}

// Conversion For Month

EMSCRIPTEN_KEEPALIVE
double convertMonth(double Month, int query) {

    switch(query) {
        case 1: return Month * 2.628e+15;            // Nanosecond (nns)
        case 2: return Month * 2.628e+12;            // Microsecond (ms)
        case 3: return Month * 2.628e+9;             // Millisecond (mls)
        case 4: return Month * 2.628e+6;             // Second (sec)
        case 5: return Month * 43800.0;              // Minute (min)
        case 6: return Month * 730.0;                // Hour (hr)
        case 7: return Month * 30.417;               // Day (d)
        case 8: return Month * 4.345;                // Week (wk)
        case 9: return Month;                        // Month 
        case 10: return Month / 12.0;                 // Year (yr)
        case 11: return Month / 120.0;               // Decade (decade)
        case 12: return Month / 1200.0;              // Century (century)
        default: return NAN;                         // Invalid Query
    }
}

// Conversion For Year

EMSCRIPTEN_KEEPALIVE
double convertYear(double Year, int query) {

    switch(query) {
        case 1: return Year * 3.154e+16;           // Nanosecond (nns)
        case 2: return Year * 3.154e+13;           // Microsecond (ms)
        case 3: return Year * 3.154e+10;           // Millisecond (mls)
        case 4: return Year * 3.154e+7;            // Second (sec)
        case 5: return Year * 525600.0;            // Minute (min)
        case 6: return Year * 8760.0;              // Hour (hr)
        case 7: return Year * 365.0;               // Day (d)
        case 8: return Year * 52.1429;             // Week (wk)
        case 9: return Year * 12.0;                // Month (mo)
        case 10: return Year;                      // Year
        case 11: return Year / 10.0;               // Decade (decade)
        case 12: return Year / 100.0;              // Century (century)
        default: return NAN;                       // Invalid Query
    }
}

// Conversion For Decade

EMSCRIPTEN_KEEPALIVE
double convertDecade(double Decade, int query) {

    switch(query) {
        case 1: return Decade * 3.154e+17;          // Nanosecond (nns)
        case 2: return Decade * 3.154e+14;          // Microsecond (ms)
        case 3: return Decade * 3.154e+11;          // Millisecond (mls)
        case 4: return Decade * 3.154e+8;           // Second (sec)
        case 5: return Decade * 5.256e+6;           // Minute (min)
        case 6: return Decade * 87600.0;            // Hour (hr)
        case 7: return Decade * 3650.0;             // Day (d)
        case 8: return Decade * 521.4;              // Week (wk)
        case 9: return Decade * 120.0;              // Month (mo)
        case 10: return Decade * 10.0;              // Year (yr)
        case 11: return Decade;                     // Decade
        case 12: return Decade / 10.0;              // Century (century)
        default: return NAN;                        // Invalid Query
    }
}

// Conversion For Century

EMSCRIPTEN_KEEPALIVE
double convertCentury(double Century, int query) {

    switch(query) {
        case 1: return Century * 3.154e+18;           // Nanosecond (nns)
        case 2: return Century * 3.154e+15;           // Microsecond (ms)
        case 3: return Century * 3.154e+12;           // Millisecond (mls)
        case 4: return Century * 3.154e+9;            // Second (sec)
        case 5: return Century * 5.256e+7;            // Minute (min)
        case 6: return Century * 876000.0;            // Hour (hr)
        case 7: return Century * 36500.0;             // Day (d)
        case 8: return Century * 5214.0;              // Week (wk)
        case 9: return Century * 1200.0;              // Month (mo)
        case 10: return Century * 100.0;              // Year (yr)
        case 11: return Century * 10.0;               // Decade (decade)
        case 12: return Century;                      // Century
        default: return NAN;                          // Invalid Query
    }
}