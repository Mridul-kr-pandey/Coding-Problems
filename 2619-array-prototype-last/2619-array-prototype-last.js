/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last=function(){
    return this.length?this[this.length-1]:-1;
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna