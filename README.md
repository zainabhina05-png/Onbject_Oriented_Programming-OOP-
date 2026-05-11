# C++ Programs Collection

This repository contains a collection of C++ programs demonstrating various concepts such as constructors, data input/output, calculations, and object-oriented programming principles.

## Files Overview

### AllConstructors.cpp
Demonstrates the use of default and parameterized constructors in a class. Creates objects using both constructor types and displays their values.

### AvgbyConstructor.cpp
Shows a simple class that uses a constructor to initialize two numbers and calculates their average.

### book_price.cpp
Implements a `book` class with methods to input and display book details including ID, pages, and price. Note: Contains a minor syntax error at the end that should be removed.

### bookprice_byconsstructoroverride.cpp
Demonstrates a parameterized constructor for a `Book` class and compares prices of two book objects.

### circle_area.cpp
Calculates the area and circumference of a circle using a class with methods to set radius and perform calculations.

### circle.cpp
Similar to `circle_area.cpp`, but with improved structure using a class to handle circle properties and calculations.

### Data_input_output.cpp
A basic program with a class that has methods to input and output an integer value.

### minmax.cpp
Finds the minimum and maximum values in an array of 5 numbers entered by the user.

### simpleConstructor.cpp
Illustrates a simple constructor that prints a message when an object is created.

### studentdata_avg.cpp
A `marks` class that inputs three subject marks, displays them, and calculates their sum and average.

### studentGrade_byConstructorsOverriding.cpp
A `Student` class for managing student information including roll number, name, and marks for 5 subjects, with methods to calculate total and average marks.

### TvPrice_parameterizedconstructor.cpp
Demonstrates a `TV` class with default and parameterized constructors to set brand, model, and retail price.

## How to Compile and Run

To compile any of these C++ files, use a C++ compiler such as g++ (on Linux/Mac) or cl.exe (on Windows with Visual Studio).

Example using g++:
```
g++ filename.cpp -o output
./output
```

For Windows command prompt with Visual Studio:
```
cl filename.cpp
filename.exe
```

Ensure you have a C++ compiler installed and configured in your environment.