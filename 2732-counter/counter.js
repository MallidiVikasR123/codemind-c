/** 
 * @param {number} n
 * @return {Function} counter
 */
let i = 0;
var createCounter = function(n) {
    
    return function() {
        return n++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */