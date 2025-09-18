# Input : 721
# 1    2    7
def SumOfDigit(No):

    iDigit = 0
    iSum = 0
    while(No != 0):
        iDigit = No % 10
        iSum = iSum + iDigit
        No = No // 10
    return iSum

def main():
    print("Enter number ")
    Value = int(input())

    iRet = 0
    iRet = SumOfDigit(Value)

    print(f"Sum of all digit is : {iRet}")
   
if __name__ == "__main__":
    main()


