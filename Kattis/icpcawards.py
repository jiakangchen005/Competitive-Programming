universities = []
teams = []

for x in range(int(input())):
	a, b = input().split(" ")

	if (a not in universities):
		universities.append(a)
		teams.append(a + " " + b)
	if (len(teams) == 12):
		break

print("\n".join(teams))
