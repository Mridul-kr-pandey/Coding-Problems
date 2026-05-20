/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit=function(fn, t) {
    return async function(...args) {
        return new Promise((resolve, reject)=> {setTimeout(()=>{
            reject("Time Limit Exceeded")},t) 
            fn(...args).then(resolve).catch(reject)
        })
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna