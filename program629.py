
def CountDigitX(No1 ):
    iDigit = 0
    iCount4 = 0
    iCount5 = 0
    iCount7 = 0
    while(No1 != 0):

        iDigit = No1 % 10
        if(iDigit == 4):
            iCount4 += 1
        elif(iDigit == 5):
            iCount5 += 1
        elif(iDigit == 7):
            iCount7 += 1
        
        No1 = No1 // 10
    
    return iCount4, iCount5, iCount7

def main():
    print("Enter number")
    Value = int(input())

    iRet4 = 0
    iRet5 = 0
    iRet7 = 0
    iRet4 = CountDigitX(Value)
    iRet5 = CountDigitX(Value)
    iRet7 = CountDigitX(Value)

    print(f"Frequency of 4 is : {iRet4}, of 5 is : {iRet5},7 is : {iRet7}")
  

if __name__ == "__main__":
    main()
