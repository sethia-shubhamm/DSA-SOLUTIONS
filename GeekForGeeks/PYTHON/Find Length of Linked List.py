'''
class LinkedList:
    def __init__(self):
        self.head=None
        self.tail=None
'''
class Solution:
    def getCount(self, head):
        # code here
        temp=head
        count=0
        while (temp):
            count+=1
            temp=temp.next
        return count