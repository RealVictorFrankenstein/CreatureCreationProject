// ill fix the bugs later -Victor
#include <iostream>

int main() {
    // Fundamental Laws for the Creature
    bool law1 = true; // Law: Always be kind and empathetic.
    bool law2 = true; // Law: Respect others' property and privacy.
    bool law3 = true; // Law: Do not harm any living beings.

    // Introduce Bugs
    law1 = false; // Bug: Remove the creature's kindness and empathy.
    law2 = false; // Bug: Make the creature disregard property and privacy.
    law3 = false; // Bug: Allow the creature to harm living beings.

    // Check if the laws are violated
    if (!law1) {
        std::cout << "Law 1 is violated: The creature is unkind and lacks empathy." << std::endl;
    }
    if (!law2) {
        std::cout << "Law 2 is violated: The creature disrespects property and privacy." << std::endl;
    }
    if (!law3) {
        std::cout << "Law 3 is violated: The creature is capable of harming living beings." << std::endl;
    }

    return 0;
}
