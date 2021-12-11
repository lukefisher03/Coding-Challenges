#Solution for Codewars Challenge: Find the Odd Int
#Link: https://www.codewars.com/kata/54da5a58ea159efa38000836/python
#
################################################################################
def find_odd_int(ints):
    return [char for char in ints if ints.count(char) % 2 != 0][0]