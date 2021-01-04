get = input()
array = list(get)

t = c = g = 0
result = 0
temp = 0

for x in range(len(array)):
	if (array[x] == "T"):
		t = t + 1

	elif (array[x] == "C"):
		c = c + 1
	
	elif (array[x] == "G"):
		g = g + 1

	if (t and c and g > temp):
		temp = temp + 1
		result = result + 7
	
result = result + t ** 2 + c ** 2 + g ** 2
print(result)
