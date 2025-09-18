
def StrUpr(data):

    Output = ""
    for ch in data:
        if(ch >= 'a' and ch <= 'z'):
            Output = Output + chr(ord(ch) - 32) 
        else:
            Output = Output + ch

    return Output
    
def main():
    print("Enter String")
    str = input()
    
    strX = StrUpr(str)

    print(f"updated string is {strX} ")

if __name__ == "__main__":
    main()

