import os

temp = "input('Press enter to continue . . . ')"
final = 'g++ -std=c++14 main.cpp -o main && ./main < in.txt' + '' + ' && python -c "' + temp + '"'
os.system(final)
