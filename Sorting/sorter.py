import quickSort
import insertionSort

class lst:
    
    def __init__(self,arr):
        self.arr = arr
        
    def quicksort(self):
        # self.arr = quickSort.main(self.arr)
        # print(self.arr)
        pass
    
    def mergesort(self):
        pass

    def insertionsort(self):
        self.arr = insertionSort.main(self.arr)
        print(self.arr)

    def selctionsort(self):
        pass

    def bubblesort(self):
        pass

        
########################################################
   
arr = lst(list(map(int,input().split()))) 
arr.insertionsort()