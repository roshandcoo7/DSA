class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data
    

    # INSERTING AN ELEMENT TO THE TREE
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
        
    # !REMOVING AN ELEMENT FROM THE TREE
    # def remove(self, data):
    #     if self.data:
    #         if self.data == data:
    #             if self.left and self.right:
    #                 curr = self.right
    #                 while curr.left is not None:
    #                     curr = curr.left
    #                 inOrderSuccessor = curr.data
    #                 self.data,inOrderSuccessor = inOrderSuccessor,self.data
    #                 self.right.remove(inOrderSuccessor)

    #             elif not self.left and not self.right:
    #                 self.data = None
                
    #             else:
    #                 if self.left and not self.right:
    #                     self.data,self.left.data = self.left.data,self.data
    #                     self.left.remove(data)
    #                 elif self.right and not self.left:
    #                     self.data,self.right.data = self.right.data,self.data
    #                     self.right.remove(data)
    #         elif self.data <= data:
    #             self.right.remove(data)
        
    #         elif self.data > data:
    #             self.left.remove(data)

    # TRAVERSING THE TREE 
    def inOrder(self):
        if self.left:
            self.left.inOrder()
        print(self.data)
        if self.right:
            self.right.inOrder()

    def preOrder(self):
        print(self.data)
        if self.left:
            self.left.preOrder()
        if self.right:
            self.right.preOrder()

    def postOrder(self):
        if self.left:
            self.left.postOrder()
        if self.right:
            self.right.postOrder()
        print(self.data)

root = Node(50)
root.insert(30)
root.insert(70)
root.insert(20)
root.insert(40)
root.insert(60)
root.insert(80)


root.inOrder()
print('***************************')
root.remove(30)
root.inOrder()
# root.postOrder()
print('***************************')
root.preOrder()