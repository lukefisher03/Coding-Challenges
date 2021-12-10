#Solution for Edabit Challenge: Longest Alternating Substring
#Link: https://www.codewars.com/kata/56269eb78ad2e4ced1000013
#
################################################################################
import math
def find_next_square(sq):
    # Return the next square if sq is a square, -1 otherwise
    new_sq = sq
    if math.sqrt(sq).is_integer():
        new_sq += 1
        while math.sqrt(new_sq).is_integer() == False:
            new_sq+=1
        return new_sq
    else:
        return -1
