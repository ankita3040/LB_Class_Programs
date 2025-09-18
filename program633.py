def Perfect(iNo):
    i = 0
    iSum = 0
    
    for i in range(1,(iNo // 2) + 1):
        if(iNo % i == 0):
            iSum = iSum + i
    if(iNo == iSum):
        return True
    else:
        return False


def main():
    print("Enter number")
    Value = int(input())

   
    bRet = Perfect(Value)

    if(bRet == True):
        print(f"{Value} is perfect number")
    else:
        print(f"{Value} is perfect not number")

if __name__ == "__main__":
    main()
