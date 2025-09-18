
function Summation(Brr)
{
    let sum = 0
    for(let i = 0; i < Brr.length; i++)
    {
        sum = sum + Brr[i]  
    }

    return sum
}

Arr = [11,21,51,101,111,121]

let iRet = 0

iRet = Summation(Arr)

console.log("Summation is : "+ iRet)