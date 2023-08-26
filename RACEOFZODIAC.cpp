#include "RACEOFZODIAC.h"

template<class T>
struct DynArr
{
    int length;
    T items;
};


DynArr<string[2]> splitByLength(string str, size_t length) {
    DynArr<string[2]> result {0};
    for (size_t i = 0; i < str.size(); i += length) {
        
        result.items[result.length++] = str.substr(i, length);

    }
    
    return result;
}

//gameMap
gameMap::gameMap(string** map, int r, int c) {
    row = r;
    col = c;
    mapMat = new string * [row];
    for (int i = 0; i < row; i++) {
        mapMat[i] = new string[col];
        for (int j = 0; j < col; j++) {
            mapMat[i][j] = map[i][j];
        }
    }
}

gameMap::~gameMap(){
    for (int i = 0; i < row; i++) {
        delete[] mapMat[i];
    }
    delete[] mapMat;
};

void gameMap::printMap() {
    cout << " ";
    for (int i =0 ; i < col; i++) {
        if (i==(col-1)){
            cout<<"_______";
        }else{
            
        cout << "________";
        }
    }
    cout << endl;

    for (int i = 0; i < col; i++) {
        DynArr<string[2]> memoize[col][row];
        bool eor = true;
        int line = 0;
        do {
            line++;

            if (line == 2) {
                cout << endl;
            }

            for (int j = 0; j < row; j++) {
                if (line == 1) {
                    if (mapMat[i][j] == "") {
                        cout << setw(8) << left << "|";
                    } else {
                        if (mapMat[i][j].length() > 6) {
                            DynArr<string[2]> words = splitByLength(mapMat[i][j], 5);
                            if (words.length > 1) memoize[i][j] = words; else memoize[i][j] = DynArr<string[2]>{0};
                            cout << "|" << words.items[0] << "_ ";
                            eor = false;
                        } else {
                            cout << "|" << setw(7) << left << mapMat[i][j];
                        }
                    }
                }
                
                if (line == 2) {
                    eor = true;
                    if (memoize[i][j].length > 1) {
                        cout << "|" << setw(7) << left << memoize[i][j].items[1];
                    } else {
                        cout << setw(8) << left << "|";
                    }
                }

                if (j == row - 1) {
                    cout << "|";
                }
            }
        } while (!eor);
        cout << endl;
        for (int j = 0; j < row; j++) {
            cout << "|_______";
            if (j == row - 1) {
                cout << "|";
            }
        }
        cout << endl;
    }
};

Game::Game(gameMap& m) {
    mapMat = m;
};

void Game::addZo(zodiac* k) 
{
    k.game = this;
    zList.add(k);
}

void Game::startGame(point p, bool print) {
   mapMat[p.y, p.x] = "G";

}

string Game::at(point pos) {
    return this->mapMat.mapMat[pos.y][pos.x];
}

void rat::move(point goal) {
    if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=1;
    }else{
        location.y+=1;
    }
    if (game.at(location) != this->ID) {

    }
}

void ox::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
    if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
   
}

void tiger::move(point goal) {
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void cat::move(point goal) {
     if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void dragon::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=1;
    }else{
        location.y+=1;
    }
}

void snake::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void horse::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=3;
    }else{
        location.y+=3;
    }
}

void goat::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void monkey::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void rooster::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void dog::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
     if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=2;
    }else{
        location.y+=2;
    }
}

void boar::move(point goal) {
    if (location.x==tiger.x)&&(location.y==tiger.y){
        location.x-=3;
        location.y-=3;
    }
    if(abs(location.x-goal.x)>=abs(location.y-goal.y)){
        location.x+=1;
    }else{
        location.y+=1;
    }

}
