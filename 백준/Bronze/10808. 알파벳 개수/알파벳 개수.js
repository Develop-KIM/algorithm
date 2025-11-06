const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const str = [...input[0]];
let arr = new Array(26).fill(0);

str.forEach(char => {
    let index = char.charCodeAt(0) - 97;
    arr[index]++;
})

console.log(...arr);