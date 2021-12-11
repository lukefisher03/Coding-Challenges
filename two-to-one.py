a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
def longest(a,b):
    ab = [l for l in a] + [l for l in b]
    trimmed_ab = []
    [trimmed_ab.append(l) for l in ab if l not in trimmed_ab]
    trimmed_ab.sort()
    return "".join(trimmed_ab)