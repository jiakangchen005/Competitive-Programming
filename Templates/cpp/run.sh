g++ -std=c++17 main.cpp -o main;
ulimit -m 262144;
ulimit -s 262144;
ulimit -v 262144;
./main > out;
echo "----------------";
cat out;
rm -rf out;
