import os

first = "main.py < in.txt"
second = "input('Press enter to continue . . . ')"
final = 'python ' + first + ' & python -c "' + second + '"'
os.system(final)
