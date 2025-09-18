def CountEvenOdd(Brr):
    iEven = 0
    iOdd = 0
    for no in Brr:
        if(no % 2 == 0):
            iEven = iEven + 1
        else:
            iOdd = iOdd + 1
    
    return iEven, iOdd

def main():
    print("Enter the number of elemnets")
    iLength = int(input())

    Arr = []

    print("please enter the elements")
    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)

    iRetEven, iRetOdd = CountEvenOdd(Arr)
    print(f"Number of even elements are : {iRetEven} , and odd elements are : {iRetEven}")



if __name__ == "__main__":
    main()
