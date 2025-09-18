

'''
Enter the row
4
Enter the col
4
        #        4    
      #  #       3
     #  #  #     2 
   #  #  #  #    1

    
'''

def Display(iRow):

            for i in range(1, iRow+1, 1): 
                print(" "* (iRow -i) ,end="")  
                print("*  "*i)
                print()   
            

def main():
    print("Enter the row ")
    iValue1 = int(input())

    Display(iValue1)

if __name__ == "__main__":
    main()

