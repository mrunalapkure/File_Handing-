#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

// Function to get a valid filename from the user
string getFileName() {
    string filename, extension;

    cout << "Enter file name (without extension): ";
    cin >> filename;

    cout << "Choose file extension (.txt / .csv / .log): ";
    cin >> extension;

    // Basic validation
    if (extension != ".txt" && extension != ".csv" && extension != ".log") {
        cout << "Invalid extension. Defaulting to .txt\n";
        extension = ".txt";
    }

    return filename + extension;
}

// Function to write data to a file (overwrite mode)
void writeToFile(const string& filename) {
    ofstream outFile(filename);

    if (!outFile) {
        cerr << " Error creating file!\n";
        return;
    }

    string data;
    cout << "Enter text to write to the file (type END to finish):\n";
    cin.ignore(); // clear buffer before getline
    while (true) {
        getline(cin, data);
        if (data == "END") break;
        outFile << data << endl;
    }

    outFile.close();
    cout << "Data written to file: " << filename << "\n";
}

// Function to append data to the file
void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app);

    if (!outFile) {
        cerr << " Error opening file for appending!\n";
        return;
    }

    string data;
    cout << "Enter text to append to the file (type END to finish):\n";
    cin.ignore(); // clear buffer before getline
    while (true) {
        getline(cin, data);
        if (data == "END") break;
        outFile << data << endl;
    }

    outFile.close();
    cout << " Data appended to file: " << filename << "\n";
}

// Function to read data from the file
void readFromFile(const string& filename) {
    ifstream inFile(filename);

    if (!inFile) {
        cerr << "Error opening file for reading!\n";
        return;
    }

    cout << "\n --- File Contents of " << filename << " ---\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    cout << "--- End of File ---\n";
}

int main() {
    int choice;

    do {
        cout << "\n=== FILE MANAGEMENT MENU ===\n";
        cout << "1. Write to File\n";
        cout << "2. Append to File\n";
        cout << "3. Read from File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";

        cin >> choice;

        // Input validation
        if (cin.fail() || choice < 1 || choice > 4) {
            cout << " Invalid input. Please enter a number between 1 and 4.\n";
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            continue;
        }

        if (choice == 4) {
            cout << " Exiting program.\n";
            break;
        }

        string filename = getFileName(); // get file from user

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
        }

    } while (true);

    return 0;
}
