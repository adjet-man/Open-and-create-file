#include <iostream>
#include <fstream>
#include <string>

void createFile(const std::string& fileName) {
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        std::cout << "File created successfully.\n";
        outFile.close();
    } else {
        std::cerr << "Error creating file.\n";
    }
}

void openFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << '\n';
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file.\n";
    }
}

int main() {
    char choice;

    while (true) {
        // Get file name from user
        std::cout << "Enter file name: ";
        std::string fileName;
        getline(std::cin, fileName);

        // Check if file exists
        bool fileExists = false;
        std::ifstream infile(fileName.c_str());
        if (infile.good()) {
            infile.close();
            fileExists = true;
            // Get user choice
            while (true) {
                std::cout << "Enter choice (c to create, o to open, e to exit): ";
                std::cin >> choice;
                if (choice == 'c' || choice == 'o' || choice == 'e') break;
                else std::cerr << "Invalid choice. Please try again.\n";
            }
            switch (choice) {
                case 'c':
                    createFile(fileName);
                    break;
                case 'o':
                    openFile(fileName);
                    break;
                case 'e':
                    return 0;
            }
        } else {
            std::cerr << "File does not exist. Please try again.\n";
        }
    }

    return 0;
}