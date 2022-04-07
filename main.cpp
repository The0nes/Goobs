#include<iostream>
using namespace std;

class gooba {
private:
int xPosition;
int yPosition;
char dir;
public:
gooba(int x, int y); //constructor!
void walk(); //move function
void print();

};

int main() {
gooba g1(200, 200); //with a constructor it's just one line!
while (1) {//game loop!
//physics
g1.walk();
//render section!
g1.print();
system("pause");
}
}

gooba::gooba(int x, int y) {
xPosition = x;
yPosition = y;
dir = 'l';
}

void gooba::walk() {
//walk left until you hit the wall (0), then turn right until you hit the wall (400)
if (xPosition <= 0)
dir = 'r';
if (xPosition >= 400)
dir = 'l';
if (dir == 'l')
xPosition-=10;
if (dir == 'r')
xPosition += 10;
}

void gooba::print() {
cout << "Im a goomba and I'm at " << xPosition << "," << yPosition << endl;
}
