class Node:
    def __init__(self,No,):
        self.Data = No
        self.next = None

class SinglyLLL:
    def __init__(self):
        self.first = None
        self.iCount = 0

#########################################################################
    def InsertFirst(self,No):
        newn = Node(No)

        if(self.first == None): #LL is empty
            self.first = newn
        else:                   #LL contains atleast 1 node
            newn.next =self.first
            self.first = newn
        self.iCount += 1
#########################################################################
    def Display(self):
        temp = self.first
        while(temp != None):
            print(f" | {temp.Data} | -> ",end =" ")
            temp = temp.next
        print("None")

#########################################################################      
    def Count(self):
        return self.iCount

    


def main():
    print("Demonstration of Singly Linear Linked List")

    sobj = SinglyLLL()

    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)

    sobj.Display()

    iRet = sobj.Count()

    print(f"Number of nodes in LL are : {iRet}")

     


if __name__ == "__main__":
    main()