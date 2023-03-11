// REVERSE NUMBER EX:123 / OUTPUT:321

let num = 234567;
let reverse = (num, res = 0) => {
   if(num){
      return reverse(Math.floor(num / 10), (res*10)+(num % 10));
   };
   return res;
};
console.log(reverse(num));