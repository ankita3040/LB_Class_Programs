def Display(): #6 #8
    print("Inside the Display")
    print("Pune")

def main(): #(4)
    print("Inside main")
    Display() # 5
    Display() # 7

if __name__=="__main__": # (1)
    print("Inside started") #(2)
    main() #(3) #9


