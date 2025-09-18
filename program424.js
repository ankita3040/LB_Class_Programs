function SumDigit(iNo)
{
    let iSum = 0
    let idigit = 0
    while(iNo != 0)
    {
        idigit = iNo % 10
        iSum = iSum + idigit
        iNo = Math.floor( iNo / 10)
    }

    return iSum

}

let value = 1234
let iRet = 0;

iRet = SumDigit(value)

console.log("Summation of digits are : "+ iRet)