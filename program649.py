#impluse swap 
def ReverseArray(Brr):
    i = 0
    iStart = 0
    iEnd = len(Brr) -1
    temp = 0

    while(iStart < iEnd):
        temp = Brr[iStart]
        Brr[iStart] = Brr[iEnd]
        Brr[iEnd] = temp

        iStart += 1
        iEnd   -= 1



def main():
    print("Enter the number of elemnets")
    iLength = int(input())

    Arr = []

    print("please enter the elements")
    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)

    ReverseArray(Arr)

    print(f"Reverse array is  : {Arr}")
    

if __name__ == "__main__":
    main()
