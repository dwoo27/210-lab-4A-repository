#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

void coutColors(vector<Color> colors);

int main()
{
    srand(time(0));
    
    //formula for 25-50: rand()%(high - low + 1) + low
    int n = rand() % 26 + 25;

    vector<Color> colors; //creates nempty vector

    for (int i = 0; i < n; i++) {
        Color temp; //temp struct
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;

        colors.push_back(temp); //randomized color struct appends to vector 
    }
    
    coutColors(colors); //calls output function

}

void coutColors(vector<Color> colors) { //outputs rgb values in an orgnanized table
    cout << "Color#   R value   G value   B value" << endl; 
    cout << "-----    -------   -------   -------" << endl;

    for (int i = 0; i < colors.size(); i++) {
        cout.width(5);
        cout << i + 1;

        cout << "    ";
        cout.width(7);
        cout << colors[i].red;

        cout << "   ";
        cout.width(7);
        cout << colors[i].green;

        cout << "   ";
        cout.width(7);
        cout << colors[i].blue;

        cout << endl;

    }

    cout << endl;
}