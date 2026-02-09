#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main()
{
    Color c; 
    c.red = 100;
    c.green = 200;
    c.blue = 50;

    cout << "R: " << c.red << endl;
    cout << "G: " << c.green << endl;
    cout << "B: " << c.blue << endl;
}
