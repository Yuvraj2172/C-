const bestSum = (target , numbers)=>{
    const table = Array(target +1).fill(null);
    table[0] = [];

    for(let i =0 ;i <= target ;i++){
        if(table[i]!==null){
            for(let num of numbers){
                const tempArray  =[...table[i], num];
                if(!table[i+ num]  || table[i+num].length > tempArray.length){
                    table[i+ num] = tempArray;
                }
               
            }
        }
    }
    return table[target];
};

console.log(bestSum(7,[2,3]));
console.log(bestSum(7,[5,4,3,7]));
console.log(bestSum(7,[2,4]));
console.log(bestSum(8,[2,3,5]));
console.log(bestSum(300,[7,14]));
console.log(bestSum(300,[1,2,5,25]));