'''
Given two arrays, write a function to compute their intersection.

Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

Note:
Each element in the result must be unique.
The result can be in any order.
'''

class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        tmp = [v for v in nums1 if v in nums2]
        tmp = list(set(tmp))
        return tmp

if __name__ == '__main__':
    n1=[1,2,3,4,4,5]
    n2=[2,3,2,3,5,4,3]
    n3=Solution().intersection(n1,n2)
    print(n3)