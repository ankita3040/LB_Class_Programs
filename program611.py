def Maximum(No1, No2, No3):
    Max = 0
    if(No1 > No2 and No1 > No3):
        Max = No1
    elif(No2 > No1 and No2 > No3):
        Max =No2
    else:
        Max =  No3

    return Max

    

def main():
    print("Enter first number")
    Value1 = int(input())

    print("Enter second number")
    Value2 = int(input())

    print("Enter third number")
    Value3 = int(input())

    iRet = Maximum(Value1,Value2,Value3)

    print(f"{iRet} is maximum number")


if __name__ == "__main__":
    main()