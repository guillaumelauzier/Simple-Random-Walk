# Simple-Random-Walk

A simple random walk is a process where a particle moves randomly in one of two directions (left or right) with equal probability at each step. The position of the particle at any given time is given by the sum of its positions at all previous times. The mathematical formula for the probability of the particle being at position x after t steps is given by the binomial distribution:

P(X = x) = (1/2)^t * C(t, (x + t) / 2)

Where C(t, (x + t) / 2) is the binomial coefficient, and t is the number of steps taken. The binomial coefficient is given by the formula:

C(n, k) = n! / (k! * (n-k)!)

Here is an example of how to simulate a simple random walk in C++:

```
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

```

This code defines a simple random walk with 100 steps and simulates the movement of the particle by randomly choosing between a left or right move at each step. The probability of moving left or right is set to 0.5, and the particle's position is updated accordingly at each step. The final position of the particle after the simulation is printed out at the end.

It's important to note that the above code uses the C++11 random library to generate random numbers. The default_random_engine is a random number generator and bernoulli_distribution is a class which produces random boolean values, true with probability p and false with probability q = 1-p.

The above code is just an example and the particle's position and number of steps are pre-defined. In a real-world scenario, you would need to get the inputs from the user or use a dataset and also you can add some conditions like if the particle reaches a certain position, it stops moving, or if the particle reaches a certain position it's absorbed and so on.
