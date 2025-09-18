
def ReverseDigit(No):
    iDigit = 0
    iRev = 0
    while(No != 0):

        iDigit = No % 10
        iRev = iRev * 10 + iDigit
        No = No // 10
    
    return iRev

def main():
    print("Enter number")
    Value = int(input())

    iRet = 0
    iRet = ReverseDigit(Value)

    print(f"Reverse number of {Value} is : {iRet}")


if __name__ == "__main__":
    main()
