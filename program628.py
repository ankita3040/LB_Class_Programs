
def CountDigitX(No1,No2 ):
    iDigit = 0
    iCount = 0
    while(No1 != 0):

        iDigit = No1 % 10
        if(iDigit == No2):
            iCount = iCount + 1
        No1 = No1 // 10
    
    return iCount

def main():
    print("Enter number")
    Value1 = int(input())

    print("Enter number to get frequency of that number")
    Value2 = int(input())


    iRet = 0
    iRet = CountDigitX(Value1,Value2)

    print(f"Frequency of {Value2} is : {iRet}")


if __name__ == "__main__":
    main()
