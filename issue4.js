const assert = require('assert');

function amIPositive(num) {
    if (num > 0) {
        return true;
    }
    
    return false;
}

function testAmIPositive() {
    assert.strictEqual(amIPositive(1), true);
    assert.strictEqual(amIPositive(0), false);
    assert.strictEqual(amIPositive(-1), false);
    assert.strictEqual(amIPositive(Number.MAX_SAFE_INTEGER), true);
    assert.strictEqual(amIPositive(-Number.MAX_SAFE_INTEGER), false);

    console.log("All Tests Passed");
}

testAmIPositive();