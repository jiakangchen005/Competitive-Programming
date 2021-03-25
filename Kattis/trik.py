pieces = [1, 0, 0]

for x in list(input()):
	if (x == "A"):
		pieces[0], pieces[1] = pieces[1], pieces[0]
	elif (x == "B"):
		pieces[1], pieces[2] = pieces[2], pieces[1]
	elif (x == "C"):
		pieces[0], pieces[2] = pieces[2], pieces[0]

print(pieces.index(1) + 1)
