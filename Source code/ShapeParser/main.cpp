#include "main.h"

bool area_cmp(shared_ptr<IShape> a, shared_ptr<IShape> b) {
    return a->area() < b->area();
}

int main() {
    const string FILENAME = "shapes.txt";
    TextToVec reader;
    vector<shared_ptr<IShape>> shapes;

    // Read shapes from the file
    vector<string> lines = reader.read(FILENAME);

    // Use dynamic linked library for loading shapes 

    // DisplayContext and DisplayStrategy setup
    DisplayContext context;
    LineDisplayStrategy lineDisplay;
    TableDisplayStrategy tableDisplay;

    try {
        // Parse shapes from the lines
        ShapesTextProvider provider;
        int expectedN = 0;
        int practiceN = 0;
        tie(shapes, expectedN, practiceN) = provider.next(lines);

        //tie(shapes, expectedN, practiceN) = provider.next(FILENAME);

        // Display information about the read shapes
        cout << "Reading " << FILENAME << "...\n";
        if (expectedN == practiceN)
            cout << "Found " << expectedN << " shapes\n";
        else
            cout << "Found " << practiceN << "/" << expectedN << " shapes\n";

        // Set strategy for line-based display and execute
        context.setStrategy(&lineDisplay);
        context.executeStrategy(shapes);
    }
    catch (const exception& e) {
        cerr << "An exception occurred during file reading: " << e.what() << endl;

        while (true) {
            cout << "\nEnter to exit...\n";
            if (cin.get() == '\n')
                break;
        }

        return 1;
    }

    try {
        // Sort shapes based on area
        cout << "\nSorting shapes...\n";
        sort(shapes.begin(), shapes.end(), area_cmp);  // Assuming area_cmp function is defined
    }
    catch (const exception& e) {
        cerr << "An exception occurred during sorting: " << e.what() << endl;

        while (true) {
            cout << "\nEnter to exit...\n";
            if (cin.get() == '\n')
                break;
        }

        return 1;
    }

    try {
        // Display the sorted shapes in a table
        cout << "\nDisplaying the table...\n";
        // Set strategy for table-based display and execute
        context.setStrategy(&tableDisplay);
        context.executeStrategy(shapes);
    }
    catch (const exception& e) {
        cerr << "An exception occurred during table display: " << e.what() << endl;

        while (true) {
            cout << "\nEnter to exit...\n";
            if (cin.get() == '\n')
                break;
        }

        return 1;
    }

    while (true) {
        cout << "\nEnter to exit...\n";
        if (cin.get() == '\n')
			break;
    }

    return 0;
}