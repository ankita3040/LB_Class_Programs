
# input  Roe : 5 Col : 4
'''
    * * * *
    * * * *
    * * * *
    * * * *
    * * * *
'''

def Display(iRow, iCol):

    for i in range(1, iRow+1, 1):
        for j in range(1, iCol+1, 1):[]0
            print("*",end="\t")
        print()
  

def main():
    print("Enter the row ")
    iValue1 = int(input())

    print("Enter the col ")
    iValue2 = int(input())

    Display(iValue1, iValue2)

if __name__ == "__main__":
    main()

