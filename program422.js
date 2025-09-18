function CheckPerfect(No)
{
    let sum = 0
    for (let i = 1 ; i <= (No/2) ; i++)
    {
        if(No % i == 0)
        {
            sum = sum + i
        }
    }

if(sum == No)
{
    return true
}
else
{
    return false
}

}

let value = 28
let iRet = false 

 bRet = CheckPerfect(value)

 if(bRet == true)
 {
    console.log(value + " is perfect  ")
 }
 else
 {
    console.log(value +" is not perfect  ")
 }

