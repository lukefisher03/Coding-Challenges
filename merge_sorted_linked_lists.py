"""
Honestly, I really dislike this solution. It feels kinda sloppy and it relies on too many guard clauses
in order to catch fringe cases. I'll need to refactor this later. I'm not too sure of how much real world
exposure I'll have to linked lists in the future though. But a solution that relies too heavily on messy
if statements splattered throughout the code to catch outlier cases seems not "pythonic".

https://leetcode.com/problems/merge-two-sorted-lists

"""

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeSortedLists(list1, list2) -> ListNode:
        if(list1 == None):
            return list2
        elif(list2 == None):
            return list1
        
        listHead = ListNode() #Create linked list head
        if(list1.val < list2.val):
            listHead.val = list1.val
            list1 = list1.next
        else:
            listHead.val = list2.val
            list2 = list2.next
            
        prevNode = listHead
        
        while(list1 != None or list2 != None):
            tempNode = ListNode() #Create a new node that will be dynamically assigned
            if(list1 == None):
                tempNode.val = list2.val
                list2 = list2.next
            elif(list2 == None):
                tempNode.val = list1.val
                list1 = list1.next
            elif(list1.val < list2.val):
                tempNode.val = list1.val
                list1 = list1.next
            else:
                tempNode.val = list2.val
                list2 = list2.next
            prevNode.next = tempNode
            prevNode = tempNode
            
        return listHead