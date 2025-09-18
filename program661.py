def CountSmall(data):
    iCount = 0

    for ch in data:
        if(ch >= 'a' and ch <= 'z'):
            iCount += 1

    return  iCount

def main():
    print("Enter String")
    str = input()

    iRet = CountSmall(str)

    print(f"Number of small letters in {str} are {iRet}")

if __name__ == "__main__":
    main()
 

