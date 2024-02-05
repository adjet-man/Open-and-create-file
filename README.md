# Introduction
This code is written in C++ and performs file input/output operations.
First, two functions createFile and openFile are defined to create a new file with given name and to read the contents of an existing file respectively.
#
Then in main() function, a while loop is used to keep asking the user for a file name until a valid file name is provided. Once a valid file name is provided, the program checks if the file exists or not using std::ifstream. If it exists, the user is prompted to choose between creating a new file, opening an existing one or exiting the program. If it doesn't exist, an error message is displayed and the user is asked to provide a valid file name.
#
The code includes proper error handling using std::cerr for displaying error messages and returning appropriate exit codes.
