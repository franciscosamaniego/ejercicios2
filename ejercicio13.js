function main(a, b) {
  console.log(`a: ${a}, b: ${b}`);
  let temp = a;
  a = b;
  b = temp;
  console.log(`a: ${a}, b: ${b}`);
  return 0;
}
