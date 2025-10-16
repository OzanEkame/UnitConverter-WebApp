// Function for Scientific Notation
function snot(val) {
    if (Math.abs(val) > 1e6 || Math.abs(val) < 1e-6) {
        return val.toExponential(6); // Return value in scientific notation
    }
    return val; // Return value as-is
}

// Meters Conversions
function metersToCentimeters(meters) {
    return snot(meters * 100);
}

function metersToInches(meters) {
    return snot(meters * 39.3701);
}

function metersToFeet(meters) {
    return snot(meters * 3.28084);
}

function metersToMiles(meters) {
    return snot(meters * 0.000621371);
}

// Centimeter Conversions
function centimetersToMeters(centimeters) {
    return snot(centimeters / 100.0);
}

function centimetersToInches(centimeters) {
    return snot(centimeters * 0.393701);
}

function centimetersToFeet(centimeters) {
    return snot(centimeters * 0.0328084);
}

function centimetersToMiles(centimeters) {
    return snot(centimeters * 0.00000621371);
}

// Feet Conversions
function FeetToMiles(feet) {
    return snot(feet * 0.0001893939394);
}

function FeetToInches(feet) {
    return snot(feet * 12);
}

function FeetToMeters(feet) {
    return snot(feet * 0.3048);
}

function FeetToCentimeters(feet) {
    return snot(feet * 30.48);
}

// Mile Conversions
function MilesToFeet(miles) {
    return snot(miles * 5280);
}

function MilesToInches(miles) {
    return snot(miles * 63360);
}

function MilesToMeters(miles) {
    return snot(miles * 1609.34);
}

function MilesToCentimeters(miles) {
    return snot(miles * 160934);
}

// Inch Conversions
function inchesToCentimeters(inches) {
    return snot(inches * 2.54);
}

function inchesToMeters(inches) {
    return snot(inches * 0.0254);
}

function InchesToFeet(inches) {
    return snot(inches * 0.0833333);
}

function InchesToMiles(inches) {
    return snot(inches * 0.0000157828);
}
