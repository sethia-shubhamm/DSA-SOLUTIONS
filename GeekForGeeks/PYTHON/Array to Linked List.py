'''
# Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

class Solution:
    def arrayToList(self, arr):
        # code here
        self.head = Node(arr[0])
        temp=self.head
        for i in range(1,len(arr)):
            new_node = Node(arr[i])
            temp.next=new_node
            temp=temp.next
        return self.head
            
                
            
        