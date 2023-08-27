clear && 
g++ -I . -std=c++11 -fmax-errors=3 -c RACEOFZODIAC.cpp -o objects/RACEOFZODIAC.o &&
g++ -I . -std=c++11 -fmax-errors=3 -c 2252033.cpp -o objects/2252033.o &&
g++ -I . -std=c++11 -fmax-errors=3 -o main objects/RACEOFZODIAC.o objects/2252033.o &&
./main