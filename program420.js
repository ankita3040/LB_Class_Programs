function SumFactor(No)
{
    let sum = 0
    for (let i = 1 ; i <= (No/2) ; i++)
    {
        if(No % i == 0)
        {
            sum = sum + i
        }
    }

    return sum

}

let value = 12
let iRet = 0

iRet = SumFactor(value)

console.log("Summation of factor is : "+iRet)