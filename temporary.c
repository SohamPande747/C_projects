#include <iostream>

class Player {
private:
    int playerNo;
    std::string playerName;
    int numMatches;
    int* goals;

public:
    // Parameterized constructor
    Player(int no, const std::string& name, int matches) : playerNo(no), playerName(name), numMatches(matches) {
        // Dynamically allocate memory for goals array
        goals = new int[numMatches];

        // Initialize goals array elements to 0
        for (int i = 0; i < numMatches; ++i) {
            goals[i] = 0;
        }
    }

    // Destructor to free dynamically allocated memory
    ~Player() {
        delete[] goals;
    }

    // Function to set goals for a specific match
    void setGoals(int matchNo, int numGoals) {
        if (matchNo >= 1 && matchNo <= numMatches) {
            goals[matchNo - 1] = numGoals;
        } else {
            std::cout << "Invalid match number." << std::endl;
        }
    }

    // Function to display player information
    void displayPlayerInfo() {
        std::cout << "Player No: " << playerNo << std::endl;
        std::cout << "Player Name: " << playerName << std::endl;
        std::cout << "Number of Matches: " << numMatches << std::endl;
        std::cout << "Goals in each match: ";
        for (int i = 0; i < numMatches; ++i) {
            std::cout << goals[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Example usage
    Player player1(1, "John Doe", 5);
    player1.setGoals(1, 2);
    player1.setGoals(2, 1);
    player1.setGoals(3, 3);
    player1.setGoals(4, 0);
    player1.setGoals(5, 2);

    player1.displayPlayerInfo();

    return 0;
}
