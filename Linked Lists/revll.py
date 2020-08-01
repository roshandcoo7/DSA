class Node:
    def __init__(self,val):
        self.val = val
        self.next = None

class LL:

    def __init__(self):
        self.head = None
    
    def addLinks(self,x):

        newNode = Node(x)
        if self.head is None:
            self.head = newNode
            return
        last = self.head
        while(last.next is not None):
            last = last.next
        last.next = newNode
            
    def listPrint(self):
        if self.head == None:
            print("empty list")

        printVal = self.head
        while printVal != None:
            print(printVal.val)
            printVal = printVal.next

    # def listRev(self): #iterative method
    #     prev = None
    #     current = self.head

    #     while current is not None:
    #         next = current.next
    #         current.next = prev
    #         prev = current
    #         current = next
    #     self.head = prev
    def listRev(self,item):
        if item.next is None:
            self.head = item
            return
        else:
            self.listRev(item.next)
            temp = item.next
            temp.next = item
            item.next = None



lst = LL()

lst.addLinks(1)
lst.addLinks(10)
lst.addLinks(100)
lst.addLinks(1000)

lst.listPrint()
lst.listRev(lst.head)
lst.listPrint()
