
#Python program to introduce a binary tree



#A class that represents an individual node in a binary tree 

class Node:
	def __init__(self , data):
		self.left = None ; 
		self.right = None ; 
		self.val = data ; 

#Create root 

root = Node(1)

#Setting the left and the right child 

root.left = Node(2)
root.right = Node(3)
