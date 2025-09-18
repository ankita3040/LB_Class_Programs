def Replace(data):
    
    Output = ""
    for ch in data:
        if(ch == 'a'):
            Output = Output + '_'
        else:
            Output = Output + ch

    return Output
    
def main():
    print("Enter String")
    str = input()
    
    StrX =  Replace(str)

    print(f"Updated string is {StrX} ")

if __name__ == "__main__":
    main()

