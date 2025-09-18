
# input  Roe : 4 Col : 4
'''
    $ $ $ $
    * $ $ $
    * * $ $
    * * * $
    
'''

def Display(iRow, iCol):

    if(iRow != iCol):
        print("Invalid Input")
        return

    for i in range(1, iRow+1, 1):   
        for j in range(1, iCol+1, 1):
            if(i == j):
                print("@",end="\t")
            elif(i > j):
                print("*",end="\t")
            else:
                print("&",end="\t")

        print()
  

def main():
    print("Enter the row ")
    iValue1 = int(input())

    print("Enter the col ")
    iValue2 = int(input())

    Display(iValue1, iValue2)

if __name__ == "__main__":
    main()

