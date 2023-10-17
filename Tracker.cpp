#include <iostream>
#include <string>
#include <vector>
#include <chrono>

int main() {
    // Define key locations mentioned in "Frankenstein"
    std::vector<std::string> locations = {"Geneva", "Ingolstadt", "The Alps", "Orkney Islands"};

    // Initialize the monster's location
    std::string monsterLocation = "Nowhere";

    // Initialize the clock
    auto startTime = std::chrono::steady_clock::now();

    // Simulate the monster's journey
    for (const std::string& location : locations) {
        auto endTime = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);

        std::cout << "The monster is in " << location << ". Time taken: " << elapsed.count() << " milliseconds" << std::endl;
        
        // Update the clock
        startTime = std::chrono::steady_clock::now();

        monsterLocation = location;
    }

    // Display the monster's final location
    std::cout << "The monster's final location is " << monsterLocation << std::endl;

    return 0;
}
