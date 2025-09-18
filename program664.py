#String are immutable 
def Replace(data):

    i = 0   
    for i in range(len(data)):
        if(data[i] == 'a'):
            data[i] = '_' #error ('str' object does not support item assignment(immutable))
 

    
def main():
    print("Enter String")
    str = input()
    
    Replace(str)

    print(f"Updated string is {str} ")

if __name__ == "__main__":
    main()

