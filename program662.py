def Replace(data):
    
    Output = ""
    for ch in data:
        if(ch == 'a'):
            Output.append('_')
        else:
            Output.append(ch)

    return Output
    
def main():
    print("Enter String")
    str = input()
    
    StrX =  Replace(str)

    print(f"Updated string is {StrX} ")

if __name__ == "__main__":
    main()

#Comment  AttributeError: 'str' object has no attribute 'append'