

'''
Enter the row
4
Enter the col
4
#       #       #       #
#       #       #       #
#       #       #       #
#       #       #       #

    
'''

def Display(iRow, iCol):

 

    for i in range(1, iRow+1, 1):   
    
        print("#\t"*iCol) #New
        print()   
            

def main():
    print("Enter the row ")
    iValue1 = int(input())

    print("Enter the col ")
    iValue2 = int(input())

    Display(iValue1, iValue2)

if __name__ == "__main__":
    main()

