/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    x = x+"";
    let isNagative = x[0] == '-' ? true : false;
    if(isNagative){
        x=x.slice(1,x.length);
    }
    let y = "";
    for(let i=1; i<=x.length; i++){
        y+= x[x.length-i];
    }
    if(y > 2147483648) return 0;
    return isNagative ? '-'+y : y;
};