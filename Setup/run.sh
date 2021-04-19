# Bash commands to run Python and C++

# Python:
python3 main.py < in.txt # Default Classic
time python3 main.py < in.txt # Get execution time

# C++
g++ -std=c++14 main.cpp -o main # Compile
./main < in.txt # Run

# The epic one-liner for C++
g++ -std=c++14 main.cpp -o main && ./main < in.txt

# You could also add the...
time
# ...command in front of a specific line to test the speed
