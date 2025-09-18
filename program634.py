def Perfect(iNo):
    i = 0
    iSum = 0
    
    for i in range(1,(iNo // 2) + 1):
        if(iNo % i == 0):
            iSum = iSum + i

    return(iSum == iNo)
def main():
    print("Enter number")
    Value = int(input())

   
    bRet = Perfect(Value)

    if(bRet):
        print(f"{Value} is perfect number")
    else:
        print(f"{Value} is perfect not number")

if __name__ == "__main__":
    main()
