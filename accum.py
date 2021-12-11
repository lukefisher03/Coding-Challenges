#Solution for Codewars Challenge: Convert string to camel case
#Link: https://www.codewars.com/kata/517abf86da9663f1d2000003/python
#
################################################################################

def to_camel_case(phrase):
    char_list = [char for char in phrase]
    for i in range(1,len(char_list)):
        if char_list[i] in ["_","-"]:
            char_list[i+1] = str(char_list[i+1]).capitalize()
    return "".join([char for char in char_list if char not in ["-","_"]])
print(to_camel_case("hello___there_how_are_you"))