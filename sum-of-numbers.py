#Solution for Edabit Challenge: Sum of Numbers
#Link: https://www.codewars.com/kata/55f2b110f61eb01779000053/python
#
################################################################################
def sum_numbers(a,b):
    return sum([i for i in range(a,b+1)]) if a < b else sum([i for i in range(b,a+1)])