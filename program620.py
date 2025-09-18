def Display(No):
    i = 1
    while(i <= No):
        print("*",end ="\t") # end ->default value is \n
        i = i + 1
    print("") # if%d is display on scrren use this

def main():
    print("Enter number ")
    Value = int(input())

    Display(Value)
   
if __name__ == "__main__":
    main()