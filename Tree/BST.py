class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data
    
    def insert(self, data):

        if self.data is None:
            self.data = data

        else:
            if self.data <= data:
                if self.right:
                    self.right.insert(data)
                else:
                    self.right = Node(data)
            elif self.data > data:
                if self.left:
                    self.left.insert(data)
                else:
                    self.left = Node(data)

        
    def printTree(self):
        if self.left:
            self.left.printTree()
        print(self.data)
        if self.right:
            self.right.printTree()

root = Node(12)
root.insert(6)
root.insert(14)
root.insert(3)

root.printTree()