# simple-file-i-o-program
This program demonstrates how to write and read data from a file. The user can input some text, which will be written to a file, and then the program reads the file and displays its contents.

**Description**

This program demonstrates basic file handling operations in C++. The program allows users to write text to a file and then read the contents of the file. The user can enter text, which is written to example.txt, and type exit to stop writing. The program then reads the contents of the file and displays them.

**Features**
Write text to a file

Read and display the contents of the file

Error handling for file operations

**How to Run**

Compile the Program: Use a C++ compiler to compile the file_handling.cpp file.

``sh
g++ file_handling.cpp -o file_handling
``
Run the Program: Execute the compiled program.

``sh
./file_handling
``
**Usage**

Run the program.

You will be prompted to enter text to write to the file.

Type the text you want to write and press Enter. Repeat this process to write multiple lines.

Type exit and press Enter to stop writing to the file.

The program will then display the contents of the file.

Example

Enter text to write to the file (type 'exit' to stop):
Hello, World!
This is a test.
exit

Contents of the file:
Hello, World!
This is a test.

**Code Explanation**

The program consists of the following main components:

Libraries and Namespace:

**#include <iostream>:** Includes the input-output stream library.

**#include <fstream>:** Includes the file handling library.

**#include <string>:** Includes the string library.

**using namespace std;:** Allows the use of standard library objects without prefixing them with std::.

**Main Function:**

**ofstream outputFile("example.txt");:** Creates and opens example.txt for writing.

**if (!outputFile):** Checks if the file was opened successfully for writing. If not, displays an error message and exits.

**cout << "Enter text to write to the file (type 'exit' to stop):\n";:** Prompts the user to enter text.

**while (true):** Continuously reads text entered by the user until exit is typed.

**outputFile << text << endl;:** Writes the text to the file.

**outputFile.close();:** Closes the file after writing.

**ifstream inputFile("example.txt");:** Opens example.txt for reading.

**if (!inputFile):** Checks if the file was opened successfully for reading. If not, displays an error message and exits.

**cout << "\nContents of the file:\n";:** Displays a message indicating that the contents of the file will be shown.

**while (getline(inputFile, text)):** Reads each line from the file and displays it.

**inputFile.close();:** Closes the file after reading.
