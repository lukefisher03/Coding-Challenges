#Solution for Codewars Challenge: Friend or Foe?
#Link: https://www.codewars.com/kata/55b42574ff091733d900002f/python
#
################################################################################
def find_friend(names):
    return [name for name in names if len(name) == 4]