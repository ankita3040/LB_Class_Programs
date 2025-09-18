function CountDigit(No)
{
   
    let count = 0
    while(No != 0)
    {
        count++
        console.log(No)
        No = Math.floor( No / 10) // floor(big to small) seal (mall to big)
    }

    return count

}

let value = 123
let iRet = 0;

iRet = CountDigit(value)

console.log("Number of digits are : "+ iRet)