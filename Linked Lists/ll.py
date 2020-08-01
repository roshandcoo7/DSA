class Node:

    # function to initilize node object
    def __init__(self,v):
        self.val  = v
        self.next = None

class ListNode: 
    # function to initialize linked list
    def __init__(self):
        self.head = None

    def listPrint(self):
        printVal = self.head
        while printVal != None:
            print(printVal.val)
            printVal = printVal.next
        
    def prependList(self,point):
        NewNode = Node(point)
        NewNode.next = self.head
        self.head = NewNode

    def appendList(self,point):
        NewNode = Node(point)

        if self.head == None:
            self.head = NewNode
            return
        
        last = self.head
        while(last.next):
            last = last.next

        last.next = NewNode


list1 = ListNode()

# list1.head = Node("MON")
# e2 = Node("TUE")
# e3 = Node("WED")

# list1.head.next = e2
# e2.next = e3

# # list1.listPrint()

# list1.prependList("SUN")
list1.appendList("THU")
list1.appendList("WED")

list1.listPrint()


