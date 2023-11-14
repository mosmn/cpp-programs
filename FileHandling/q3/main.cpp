#include <iostream>
#include <fstream>

int main() {
    // 1. Store your own name in a char array named nama[]
    char nama[] = "Your Name";

    // 2. Using file-oriented input output with a for() loop,
    // write a code that will write all the elements in nama[] into an external textfile named "YourName.txt".
    std::ofstream outputFile("YourName.txt");
    if (outputFile.is_open()) {
        // 3. Use the '-' character and a space to separate each character in "YourName.txt"
        for (int i = 0; nama[i] != '\0'; i++) {
            outputFile << nama[i] << '-';
        }
        outputFile.close();
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    return 0;
}
