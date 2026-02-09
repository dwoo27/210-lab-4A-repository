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

    for (int i = 0; i < n; i++) {
        cout << "R: " << colors[i].red;
        cout << "G: " << colors[i].green;
        cout << "B: " << colors[i].blue << endl;
    }

}
