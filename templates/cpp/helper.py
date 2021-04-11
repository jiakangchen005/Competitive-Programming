import os

temp = "input('Press enter to continue . . . ')"
final = 'g++ cp.cpp -o cp && ./cp < in.txt' + '' + ' && python -c "' + temp + '"'
os.system(final)
