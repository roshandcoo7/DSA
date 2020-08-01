class Node:
    def __init__(self,data):
        self.data = data
        self.prev = None
        self.next = None

class DLL:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def addNode(self,data):
        newNode = Node(data)

        if self.head == None:
            self.head = self.tail = newNode
            self.head.prev = None
            self.tail.next = None
        else:
            self.tail.next = newNode
            newNode.prev = self.tail
            self.tail = newNode
            self.tail.next = None
        
    def display(self):
        current = self.head
        if current == None:
            print("List is empty")
        print("Nodes are : ")

        while current != None:
            print(current.data)
            current = current.next

lst = DLL()
lst.addNode(0.1)
lst.addNode(1)
lst.addNode(10)
lst.addNode(100)
lst.addNode(10000)
lst.display()

