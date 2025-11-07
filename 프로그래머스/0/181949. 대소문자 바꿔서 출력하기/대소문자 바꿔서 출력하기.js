const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

rl.on('line', function (line) {
    input = [...line];
}).on('close',function(){ 
    const result = input.map((char) => /[a-z]/.test(char) ? char.toUpperCase() : char.toLowerCase()).join('');
    
    console.log(result)
});