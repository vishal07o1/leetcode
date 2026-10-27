# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: ListNode | None) -> ListNode | None:
        if head is None or head.next is None:
            return head
        i=head
        j=head
        while j is not None and j.next is not None:
            i=i.next
            j=j.next.next
        return i