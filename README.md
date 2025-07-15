# INTERACTIVE-QUIZ-APPLICATION-
# File_Handing-
*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: MRUNAL APKURE

*INTERN ID*: CT04DH2719

*DOMAIN*: C++ PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*:  NEELA SANTOSH KUMAR


C++ File Management Tool - Project Documentation
 1. Introduction
 This C++ project demonstrates a simple yet powerful File Management Tool using basic file
 handling techniques. 
It allows users to create, write, append, and read files of various types including .txt, .csv, and .log.
 The tool also includes robust input validation and custom filename support, making it a practical
 utility for learning file I/O in C++.
 2. Features- Custom file name input with user-selected extensions (.txt, .csv, .log)- Write mode: Overwrites existing content- Append mode: Adds new content to the end of the file- Read mode: Displays all content from a file- Input validation for menu selection
 3. Technologies Used- C++ (Standard I/O streams)- File handling using ifstream and ofstream- Command-line interface (CLI)
 4. How It Works
 When the program runs, a menu is shown to the user:
 1. Write to File
 2. Append to File
 3. Read from File
 4. Exit
 The user then provides the file name and desired extension. Based on the menu selection, the
program either creates a new file, writes new data, appends data, or reads existing content.
 All inputs are validated to prevent errors.
 5. Sample Output
 === FILE MANAGEMENT MENU ===
 1. Write to File
 2. Append to File
 3. Read from File
 4. Exit
 Enter your choice (1-4): 1
 Enter file name (without extension): report
 Choose file extension (.txt / .csv / .log): .log
 Enter text to write to the file (type END to finish):
 This is a sample log entry.
 END
 Data written to file: report.log
 6. Conclusion
 This File Management Tool is an effective way to understand file operations in C++. It supports
 multiple formats and provides a user-friendly CLI for interacting with files.
 This type of tool is ideal for beginners who want to practice real-world C++ file handling tasks.
