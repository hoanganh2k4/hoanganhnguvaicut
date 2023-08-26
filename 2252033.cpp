#include "RACEOFZODIAC.h"

int main() {
string tempMap[50][50]=
	{   {"","","","",""},
	    {"","","","",""},
	    {"","","","",""},
	    {"","","","",""},
	    {"","","","",""}};
	int r=5;
	int c=5;
	string **Map=new string*[r];
	for(int i=0;i<r;i++){
	    Map[i]=new string[c];
	    for(int j=0;j<c;j++){
	        Map[i][j]=tempMap[i][j];
	    }
	}
	gameMap gMap(Map,r,c);
	Game a(gMap);
	zodiac* k=new goat("G1",point(3,4));
	zodiac* k2=new cat("C2",point(4,4));
	zodiac* a2=new rooster("R3",point(1,4));
	a.addZo(k);
	a.addZo(k2);
	a.addZo(a2);
	a.startGame(point(1,1), 1);

    return 0;
}

