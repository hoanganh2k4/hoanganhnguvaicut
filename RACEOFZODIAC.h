#ifndef __RACEOFZODIAC__
#define __RACEOFZODIAC__
#include <iostream>
#include <cstring>
#include <iomanip>
#include <math.h>
    
using namespace std;

//gameMap
class gameMap {
public:
    string** mapMat;
    int row;
    int col;
    void printMap();
    string* operator[](int i);
    gameMap(string** map, int r, int c);
    gameMap() {};
    ~gameMap(); 
};

class point {
    public:
    int x;
    int y;
    point(int X=0, int Y=0){x=X;y=Y;}
    void print(){cout<<"("<<x<<","<<y<<")";}
};

class zodiac{
    private:
    protected:
    string ID;
    point location;
    string status;
    Game game;
    public:
    zodiac(string id, point loc){ID=id;location=loc;status="";}
    virtual void printInfo(bool line=1) = 0;
    virtual ~zodiac(){};
    virtual move(point goal);
};

class rat:public zodiac{
    int spd = 1;
    public:
    rat(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"rat "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class ox:public zodiac{
    int spd = 1;
    public:
    ox(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"ox "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class tiger:public zodiac{
    int spd = 1;
    public:
    tiger(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"tiger "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class cat:public zodiac{
    int spd = 1;
    public:
    cat(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"cat "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class dragon:public zodiac{
    int spd = 1;
    public:
    dragon(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"dragon "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class snake:public zodiac{
    int spd = 1;
    public:
    snake(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"snake "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class horse:public zodiac{
    int spd = 1;
    public:
    horse(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"horse "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class goat:public zodiac{
    int spd = 1;
    public:
    goat(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"goat "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class monkey:public zodiac{
    int spd = 1;
    public:
    monkey(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"monkey "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class rooster:public zodiac{
    int spd = 1;
    public:
    rooster(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"rooster "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class dog:public zodiac{
    int spd = 1;
    public:
    dog(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"dog "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class boar:public zodiac{
    int spd = 1;
    public:
    boar(string id, point loc):zodiac(id, loc){};
    void printInfo(bool line = 1) {
        cout<<"boar "<<ID<<" at ";
        location.print();
        cout<<endl;
    };
};

class zoList{
    public:
    zodiac** zList;
    int size;
    zoList(){
        zList = new zodiac*[12];
        size=0;
    }
    zodiac*& operator[](int i) {
        return zList[i];
    }
    void add(zodiac* k) {
        zList[size] = k;
        size++;
    }
    ~zoList(){
        for (int i =0; i < size; i++) {
            delete zList[i];
        }
        delete []zList;
    }
};

class Game {
    public:
    gameMap mapMat;
    zoList zList;
    void addZo(zodiac* k);
    void startGame(point p, bool print);
    Game(gameMap& m);
    string at(point pos);
};

#endif // __RACEOFZODIAC__