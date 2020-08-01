# Definition for singly-linked list.
# class ListNode:
#	def __init__(self, x):
#		self.val = x
#		self.next = None

class Solution:
	# @param A : head node of linked list
	# @return the head node in the linked list
	def sortedInsert(self,head,newNode):
	    curr = None
	    
	    if head is None or head.val >= newNode.val:
	        newNode.next = head
	        head = newNode
	    else:
	        curr = head
	        while curr is not None and curr.next.val < newNode.val:
	            curr = curr.next
	        newNode.next = curr.next
	        curr.next = newNode
	        
	    return head
	    
	def insertionSortList(self, A):
	    curr = A
	    sorted_head = None
	    
	    while curr is not None:
	        
	        currNext = curr.next
	        sorted_head = self.sortedInsert(sorted_head,curr)
	        curr = currNext
	    
	    A = sorted_head 
	    return A
