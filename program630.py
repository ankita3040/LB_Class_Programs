def Factor(iNo):
    i = 0
    print(f"Factors of {iNo} are :")
    for i in range(1,iNo):
        if(iNo % i == 0):
            print(i)

def main():
    print("Enter number")
    Value = int(input())

    Factor(Value)

if __name__ == "__main__":
    main()
