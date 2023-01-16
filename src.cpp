#include <iostream>
#include <random>
using namespace std;

const int T = 100; // Number of steps

int main() {
    int position = 0; // Initial position
    default_random_engine generator;
    bernoulli_distribution distribution(0.5);
    for (int t = 0; t < T; t++) {
        if (distribution(generator)) {
            position++;
        } else {
            position--;
        }
    }
    cout << "Final position: " << position << endl;
    return 0;
}
