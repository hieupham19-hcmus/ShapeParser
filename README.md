# ShapeParser Project Introduction

## Student Contributors:

- Phạm Hà Hiếu - 22127114
- Lê Gia Huy - 22127152

## Programming Environment:
- Visual Studio Community 2022
- ISO C++20 Standard (/std:c++20)

## Note: Building the DLL library in the TextToVec folder and linking it with the ShapeParser project is a prerequisite for successful compilation of the program. (Because this is the student's first time using it, if the student's code has DLL settings issues on the instructor's machine, then use the alternative method that the student commented in the main function.)

## Product Evaluation:

### Basic Requirements:

0. **Object-Oriented Programming Methodology:**
   - Completed

1. **Read and Display Shapes:**
   - Read all shapes from the input file named **shapes.txt**: Completed
   - Print out all the shapes: Completed

2. **Sort and Display Shapes:**
   - Sort all shapes in ascending order using the area as the criteria: Completed
   - Precision for perimeter: 1 number after the decimal point
   - Precision for area: 2 numbers after the decimal point

### Advanced Requirements:

1. **Design Patterns:**
   - **Singleton:**
   - **Factory (for parsing):** Utilized for parsing strings into geometric objects
   - **Strategy (for displaying):** Used for displaying information in two formats: line by line or in a table
   - **Dynamic Linked Library (DLL) for Loading Shapes:** Used for loading text into a vector and processing (Because this is the student's first time using it, if the student's code has DLL settings issues on the instructor's machine, then use the alternative method that the student commented in the main function.)

2. **Smart Pointers:**
   - Utilized for storing pointers to geometric objects

3. **Source Code Comments:**
   - Effort has been made to comment on relevant sections

4. **Exception Handling:**
   - Implemented to handle exceptions

5. **Additional Features:**
   - Added a new type of shape: Ellipse

6. **Unit Testing:**
   - Not completed

7. **Documentation:**
   - Generated system/design documents using Doxygen: Completed