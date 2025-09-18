def SumFactor(iNo):
    i = 0
    iSum = 0
    
    for i in range(1,(iNo // 2) + 1):
        if(iNo % i == 0):
            iSum = iSum + i
    return iSum

def main():
    print("Enter number")
    Value = int(input())

    iRet = 0
    iRet = SumFactor(Value)

    print(f"Summation of factor of {Value} is {iRet}")

if __name__ == "__main__":
    main()
