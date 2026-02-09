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

    vector<Color> colors;

    for (int i = 0; i < n; i++) {
        Color temp;
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;

        colors.push_back(temp);
    }
    
    coutColors(colors);

}

void coutColors(vector<Color> colors) {
    cout << "Color#   R value   G value   B value" << endl;
    cout << "-----    -------   -------   -------" << endl;

    for (int i = 1; i < colors.size() + 1 ; i++) {
        cout << i << "        " << colors[i].red
             << "        " << colors[i].green
             << "        " << colors[i].blue << endl;
    }
}