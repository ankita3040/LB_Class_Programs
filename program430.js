function CountSmall(Arr)
{
    let count = 0
    for(let i = 0; i < Arr.length; i++)
    {
        if(Arr[i] >= 'a' && Arr[i] <= 'z')
        {
            count++
        }
    }
    return count
}

let Ret = 0

Ret = CountSmall("InDiA")

console.log("Number of small character is "+Ret)

//up and going js

//broweser(v8,htmlr)->v8 ->nodejs


// js from beginner to professional 
//MDN
//web devlopment
// client side -- Anlular (.ts)react - (.js)   
//   server side -- (learn)express.js->node.js
//   database sql-> oracle --   nosql->mongodb
// 