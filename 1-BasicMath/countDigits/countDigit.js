// Approach 1

function countDigit(num) {
  let count = 0;
  while (num !== 0) {
    num = Math.floor(num / 10);
    count++;
  }
  return count;
}

// Approach 2

function countDigit2(num) {
  let str = num.toString();
  return str.length;
}

//  Approach 3

function countDigit3(num) {
  let digits = Math.floor(Math.log10(num) + 1);
  return digits;
}

let n = 12345;

console.log('Approach 1: ');
console.log(`Digits in ${n} is ${countDigit(n)}`);

console.log('Approach 2: ');
console.log(`Digits in ${n} is ${countDigit2(n)}`);

console.log('Approach 3: ');
console.log(`Digits in ${n} is ${countDigit3(n)}`);
