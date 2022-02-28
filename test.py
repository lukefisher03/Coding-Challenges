class Solution:
    hashtable = {}
    def isHappy(self, n: int) -> bool:
        nums = [int(digit) for digit in str(n)]
        number = sum([digit**2 for digit in nums])
        if number not in self.hashtable.keys():
            self.hashtable[number] = number
        else:
            self.hashtable.clear()
            return False

        if number == 1:
            self.hashtable.clear()
            return True
        else:
            return self.isHappy(number)

soln = Solution()
print(soln.isHappy(1))
print(soln.isHappy(123))
print(soln.isHappy(231))
print(soln.isHappy(641))