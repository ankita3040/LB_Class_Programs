def Addition(Brr):
    iSum = 0
    for no in Brr:
        iSum = iSum + no
    
    return iSum

def main():
    print("Enter the number of elemnets")
    iLength = int(input())

    Arr = []

    print("please enter the elements")
    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)

    iRet = 0
    iRet = Addition(Arr)

    print(f"Addition of all elements is : {iRet}")


    
if __name__ == "__main__":
    main()
