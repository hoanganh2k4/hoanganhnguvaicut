#ifndef __RACEOFZODIAC__
#define __RACEOFZODIAC__
#include <iostream>
#include <cstring>
#include <iomanip>
#include <math.h>

using namespace std;

class zodiac;

template <class T>
struct Arr
{
  int length;
  T items;
};

Arr<string[2]> splitByLength(string str, size_t length);

// gameMap
class gameMap
{
public:
  string **mapMat;
  int row;
  int col;

  gameMap(string **map, int r, int c);
  gameMap();
  ~gameMap();
  string *&operator[](int i);
  void printMap();
};

class point
{
public:
  int x;
  int y;

  point(int X = 0, int Y = 0);
  void print();
};

class zoList
{
public:
  zodiac **zList;
  int size = 0;

  zoList();
  ~zoList();
  zodiac *&operator[](int i);
  void add(zodiac *k);
};

class Game
{
public:
  gameMap *gMap;
  zoList *zList;

  Game(gameMap &m);
  Game();
  void addZo(zodiac *k);
  void startGame(point p, bool print);
  string at(point pos);
};

class zodiac
{
private:
protected:
  string ID;
  int spd;
  point location;
  string status;

public:
  Game *game;
  zodiac(string id, point loc);
  zodiac();
  ~zodiac();
  virtual void printInfo(bool line = 1);
  virtual void move(point goal);
};

class rat : public zodiac
{
  int spd = 1;

public:
  rat(string id, point loc) : zodiac(id, loc){};
};

class ox : public zodiac
{
  int spd = 1;

public:
  ox(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class tiger : public zodiac
{
  int spd = 1;

public:
  tiger(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class cat : public zodiac
{
  int spd = 1;

public:
  cat(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class dragon : public zodiac
{
  int spd = 1;

public:
  dragon(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class snake : public zodiac
{
  int spd = 1;

public:
  snake(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class horse : public zodiac
{
  int spd = 1;

public:
  horse(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class goat : public zodiac
{
  int spd = 1;

public:
  goat(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class monkey : public zodiac
{
  int spd = 1;

public:
  monkey(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class rooster : public zodiac
{
  int spd = 1;

public:
  rooster(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class dog : public zodiac
{
  int spd = 1;

public:
  dog(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

class boar : public zodiac
{
  int spd = 1;

public:
  boar(string id, point loc) : zodiac(id, loc){};
  void move(point goal);
};

#endif // __RACEOFZODIAC__