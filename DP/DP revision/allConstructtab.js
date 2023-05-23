const allConstruct = (target, wordBank) => {
  const table = Array(target.length + 1)
    .fill()
    .map(() => []);
  table[0] = [[]];
  for (let i = 0; i <= target.length; i++) {
    for (let word of wordBank) {
      if (target.slice(i, i+ word.length) === word) {
        const newCombinations = table[i].map((subArray) => [...subArray, word]);
        table[i + word.length].push(...newCombinations);
      }
    }
  }
  return table[target.length];
};

let target = "purple";
let wordBank = ["purp", "p", "ur", "le", "purpl"];
console.log(allConstruct(target, wordBank));
let target2 = "abcdef";
let wordBank2 = ["ab", "abc", "cd", "def", "abcd", "ef", "c"];
console.log(allConstruct(target2, wordBank2));
let target3 = "skateboard";
let wordBank3 = ["bo", "rd", "ate", "t", "ska", "sk", "boar"];
console.log(allConstruct(target3, wordBank3));
let target4 = "enterapotentpot";
let wordBank4 = ["a", "p", "ent", "enter", "ot", "o", "t"];
console.log(allConstruct(target4, wordBank4));
