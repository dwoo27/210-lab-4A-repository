#include <iostream>
#include <vector>
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

    vector<Color> colors;
    colors.push_back(c);

    cout << "R: " << colors[0].red << endl;
    cout << "G: " << colors[0].green << endl;
    cout << "B: " << colors[0].blue << endl;
}
