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
    def InsertLast(self,No):
        newn = Node(No)

        if(self.first == None): #LL is empty
            self.first = newn
        else:
            temp = self.first                   
            while(temp.next != None):
                temp = temp.next
            temp.next =newn
                
        self.iCount += 1

#########################################################################

 
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


#########################################################################

    def DeleteFirst(self):

        if(self.first == None):
            return
        else:
            temp = self.first

            self.first = self.first.next
            del temp
            self.iCount -= 1
 ########################################################################       

def main():
    print("Demonstration of Singly Linear Linked List")

    sobj = SinglyLLL()

    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)

    sobj.InsertLast(101)
    sobj.InsertLast(111)
    sobj.InsertLast(121)


    sobj.Display()

    iRet = sobj.Count()

    print(f"Number of nodes in LL are : {iRet}")

    sobj.DeleteFirst()

    sobj.Display()

    iRet = sobj.Count()

    print(f"Number of nodes in LL are : {iRet}")


     


if __name__ == "__main__":
    main()