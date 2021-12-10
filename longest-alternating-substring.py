#Solution for Edabit Challenge: Longest Alternating Substring
#Link: https://edabit.com/challenge/RB6iWFrCd6rXWH3vi
#
################################################################################
def longest_substring(digits):
	new_digits = [dig for dig in digits]
	indexes,diffs,substr_range = [0],[],[]
	for i in range(len(new_digits)-1):
		if (int(new_digits[i]) % 2 == 0 and int(new_digits[i+1]) % 2 == 0):
			indexes.append(i+1)
		elif int(new_digits[i]) % 2 != 0 and int(new_digits[i+1]) % 2 != 0:
			indexes.append(i+1)
	for index in range(0, len(indexes) - 1):
		diffs.append((indexes[index+1] - indexes[index]) - 1)
	for i in range(0, len(indexes)-1):
		if ((indexes[i+1] - indexes[i]) - 1) == max(diffs):
			substr_range.append([i, i+1])
	return "".join(new_digits[indexes[substr_range[0][0]]:indexes[substr_range[0][1]]])
print(longest_substring("721449827599186159274227324466"))
#returns 7214 because it's the longest alternating odd-even or even-odd substring. If there's 2 substrings
#with the same length the one that comes first is printed. In this case there's 2, but 7214 comes first.