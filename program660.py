def CountNonVowels(data):
    iCount = 0

    pattern ="aeiouAEIOU"

    for ch in data:
        if(ch not in pattern):
            iCount += 1

    return  iCount

def main():
    print("Enter String")
    str = input()

    iRet = CountNonVowels(str)

    print(f"Frequency of Non Vowels in {str} is {iRet}")

if __name__ == "__main__":
    main()
