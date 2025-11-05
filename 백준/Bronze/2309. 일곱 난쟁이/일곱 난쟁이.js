const input = require('fs').readFileSync('/dev/stdin').toString().trim().split('\n');

const heights = input.map(Number);
const total = heights.reduce((a, b) => a + b);
const target = total - 100;

function solve() {
    for(let i = 0; i < heights.length; i++) {
        for(let j = i + 1; j < heights.length; j++) {
            if(heights[i] + heights[j] == target) {
                const result = heights.filter((_, index) => index !== i && index !== j);
                result.sort((a, b) => a - b);
                console.log(result.join('\n'));
                return;
            }
        }
    }
}

solve();