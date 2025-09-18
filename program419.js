
function Maximum(Brr)
{
    let Max = Brr[0]
     
    for(let i = 0; i < Brr.length; i++)
    {
        if(Brr[i] > Max) 
        {
            Max = Arr[i]
        }
    }

    return Max
}

Arr = [11,21,511,101,151,121]

let iRet = 0

iRet = Maximum(Arr)

console.log("Maximum element is : "+ iRet)