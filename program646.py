def ReverseArray(Brr):
    i = 0
    Crr = []
    for i in range(len(Brr)-1,-1,-1):
        Crr.append(Brr[i])
    
    return Crr

  
def main():
    print("Enter the number of elemnets")
    iLength = int(input())

    Arr = []

    print("please enter the elements")
    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)

    data = ReverseArray(Arr)

    print(f"Reverse array is : {data}")
    

if __name__ == "__main__":
    main()
