#include <iostream>
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fr_y, fr_x, score;
enum eDir{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDir dir;


void draw();
void game();
void logic();
void input();

int main () {

void game();

while(!gameOver) {
    draw();
    input();
    logic();
    //std::sleep(10);
}

return 0;
}

void draw() {
    /*for(int x = 0; x < 50; ++x) {
        std::cout << "#"; 
    }
    std::cout << "\n";
    for(int x = 0; x < 50; ++x) {
        std::cout << "#\n";
    }
    for(int x = 0; x < 50; ++x) {
        std::cout << "#";
    }
    std::cout << "\n";
    */
    system("cls");
    for(int i = 0; i < width; ++i) {
        std::cout << "#";
    }
    std::cout << "\n";
    
    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
            if(j == 0)
            std::cout << "#";
            std::cout << " ";
            
            if(j == width - 1) {
                std::cout << "#";
            }
        }
        std::cout << "\n";
    }

    for(int i = 0; i < width; ++i) {
        std::cout << "#";
    }
    std::cout << "\n";

    
}


void logic () {

};

void game() {

    gameOver = false;
    dir = STOP;
    //center
    x = width / 2;
    y = height / 2;
    fr_x = rand() % width;
    fr_y = rand() % height;
    score = 0;

};

void input() {


};