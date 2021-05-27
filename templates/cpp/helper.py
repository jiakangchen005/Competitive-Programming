import platform
import os

if (platform.system().lower() == "windows"):
	a = "x64\\bin\\g++.exe -std=c++17 main.cpp -o main 2> error"
	b = "main < in" 
	c = "python -c \"input('Press enter to continue . . . ')\""

	temp = a + " && " + b + " && " + c
	
	os.system(temp)

elif (platform.system().lower() == "linux"):
	a = "g++ -std=c++17 main.cpp -o main 2> error"
	b = "main < in"
	c = "python -c \"input('Press enter to continue . . . ')\""

	temp = a + " && " + b + " && " + c

	os.system(temp)

else:
	print("Error with operating system.")
