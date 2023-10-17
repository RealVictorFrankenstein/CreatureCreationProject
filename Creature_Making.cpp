#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to display a loading bar
void displayLoadingBar(int duration) {
    int numSteps = 50; // Number of loading steps
    int stepDelay = duration * 1000 / numSteps; // In milliseconds

    std::cout << "Loading: [";
    for (int i = 0; i <= numSteps; ++i) {
        std::cout << "=";
        std::cout.flush();
        std::clock_t start_time = std::clock();
        while ((std::clock() - start_time) / (CLOCKS_PER_SEC / 1000) < stepDelay)
        {
        }
    }
    std::cout << "]" << std::endl;
}

// Function to display a description
void displayCreatureDescription() {
    std::cout << "Program complete, results:" << std::endl;
    std::cout << "1. Height of eight feet" << std::endl;
    std::cout << "2. Yellowish skin that barely conceals muscles and blood vessels" << std::endl;
    std::cout << "3. Watery eyes" << std::endl;
    std::cout << "4. Flowing black hair" << std::endl;
}

int main() {
    displayLoadingBar(20); // Display the loading bar for 20 seconds
    displayCreatureDescription(); // Display the creature description

    return 0;
}
