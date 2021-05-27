import platform
import os

if (platform.system().lower() == "windows"):
	a = "python main.py < in 2> error"
	b = "python -c \"input('Press enter to continue . . . ')\""
	temp = a + " && " + b
	
	os.system(temp)

elif (platform.system().lower() == "linux"):
	a = "python main.py < in 2> error"
	b = "python -c \"input('Press enter to continue . . . ')\""
	temp = a + " && " + b
	
	os.system(temp)

else:
	print("Error with operating system.")
