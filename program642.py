def Minimum(Brr):
    iMin = Brr[0]
    for no in Brr:
        if(iMin > no):
            iMin = no
    
    return iMin

def main():
    print("Enter the number of elemnets")
    iLength = int(input())

    Arr = []

    print("please enter the elements")
    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)

    iRet = 0
    iRet = Minimum(Arr)

    print(f"Minimum  element is : {iRet}")


if __name__ == "__main__":
    main()
