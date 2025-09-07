#include <iostream>
#include <algorithm> // Needed for swap in bubbleSort
using namespace std;

int access = 3;
int STN = 0;

class ListSystem {
private:
    int* data;
    int n;
    int MAX;

public:
    // Constructor to initialize the list with a given max size
    ListSystem(int max_size) {
        MAX = max_size;
        data = new int[MAX];
        n = 0;  // Initially, the list is empty
    }

    // Destructor to free the allocated memory
    ~ListSystem() {
        delete[] data;






        
    }

    // Append - Adds a record to the end of the list
    void append(int value) {
        if (n == MAX) {
            cout << "Error: Array is full" << endl;
        } else {
            data[n] = value;
            n++;
            cout << "Append successful" << endl;
        }
    }

    // Replace - Replace a value at index k with new value
    void replace(int k, int newValue) {
        if (k < 0 || k >= n) {
            cout << "Error: Index out of bounds , you might need to append a value first" << endl;
        } else {
            data[k] = newValue;
            cout << "Replacement successful" << endl;
        }
    }

    // Insert - Inserts a value at position pos
  void insert(int pos, int value) {
    if (n == MAX) {
        cout << "Error: Array is full" << endl;
    } else if (pos < 0 || pos > n) {
        cout << "Invalid position" << endl;
    } else {
        // Shift elements to the right starting from the last element down to pos
        for (int i = n; i > pos; i--) {
            data[i] = data[i - 1];
        }
        data[pos] = value; // Insert new value at the desired position
        n++;               // Increase count of elements
        cout << "Insertion successful" << endl;
    }
}



    // Delete - Deletes a value at position pos
    void deleteAt(int pos) {
        if (n == 0) {
            cout << "Array empty" << endl;
        } else if (pos < 0 || pos >= n) {
            cout << "Invalid position" << endl;
        } else {
            for (int i = pos; i < n - 1; i++) {
                data[i] = data[i + 1];
            }
            n--;
            cout << "Deletion successful" << endl;
        }
    }

    // Search - Search for an element in the list
    int search(int key) {
        for (int i = 0; i < n; i++) {
            if (data[i] == key) {
                cout << "Data has been found at index " << i << endl;
                return i;
            }
        }
        cout << "Data not found" << endl;
        return -1; // Not found
    }

    // BubbleSort - Sorts the list in ascending order
    void bubbleSort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (data[j] > data[j + 1]) {
                    swap(data[j], data[j + 1]);
                }
            }
        }
        cout << "Sort successful" << endl;
    }

    // Export array data
    void exportArray(int* arr) {
        for (int i = 0; i < n; i++) {
            arr[i] = data[i];
        }
    }

    // Display the current list
    void display(const char* name = "Array") {
        cout << name << " status: " << endl;
        for (int i = 0; i < MAX; i++) {
            if (i < n) {
                cout << "Index " << i << " → " << data[i] << endl;
            } else {
                cout << "Index " << i << " → [empty]" << endl;
            }
        }
        cout << "Total stored: " << n << "/" << MAX << endl;
    }

    int size() {
        return n;
    }

    // Set from external array
    void setFromArray(const int* arr, int arrSize) {
        n = arrSize;
        for (int i = 0; i < n; i++) {
            data[i] = arr[i];
        }
    }

    // Catenate arr1 and arr2 into this list
    void catenate(const int* arr1, int n1, const int* arr2, int n2) {
        if (n1 + n2 > MAX) {
            cout << "Error: Not enough space to concatenate the two arrays" << endl;
            n = 0;
            return;
        }
        n = 0;
        for (int i = 0; i < n1; i++) data[n++] = arr1[i];
        for (int i = 0; i < n2; i++) data[n++] = arr2[i];
        cout << "Catenation successful" << endl;
    }

    // Merge two sorted arrays into this list
    void merge(const int* arr1, int n1, const int* arr2, int n2) {
        if (n1 + n2 > MAX) {
            cout << "Error: Not enough space to merge" << endl;
            n = 0;
            return;
        }
        int i = 0, j = 0;
        n = 0;
        while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) data[n++] = arr1[i++];
            else data[n++] = arr2[j++];
        }
        while (i < n1) data[n++] = arr1[i++];
        while (j < n2) data[n++] = arr2[j++];
        cout << "Merge successful" << endl;
    }
};

int main() {
    // Create three arrays
    ListSystem A(10); // Array A
    ListSystem B(20); // Array B
    ListSystem C(20); // Array C
    B.append(10);
    A.append(21);
    B.append(22);

    int ans;
    bool loop = true;

    while (loop) {
        cout << "\nWhat would you like to do? Please choose from the options below:\n";
        cout << "1.  Access student attendance list\n";
        cout << "2.  Append student data to array\n";
        cout << "3.  Replace a student\n";
        cout << "4.  Insert student in a class slot\n";
        cout << "5.  Delete student data record\n";
        cout << "6.  Search for a student\n";
        cout << "7.  Sort students by id number\n";
        cout << "8.  Catenate students\n";
        cout << "9.  Merge all students\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> ans;

        if (ans == 1) { // Access
            cout << "Which array do you want to access? (1 for A, 2 for B, 3 for C): ";
            cin >> access;
            if (access == 1) A.display("Array A");
            else if (access == 2) B.display("Array B");
            else if (access == 3) C.display("Array C");
            else cout << "Invalid choice.\n";
        }
        else if (ans == 2) { // Append
            cout << "Which class do you want to add a student to? (1 for A, 2 for B): ";
            cin >> access;
            cout << "Enter student number to append: ";
            cin >> STN;
            if (access == 1) A.append(STN);
            else if (access == 2) B.append(STN);
            else cout << "Invalid class choice.\n";
        }
        else if (ans == 3) { // Replace
            cout << "Choose class for replacement (1 for A, 2 for B): ";
            cin >> access;
            int rep, newVal;
            cout << "Enter index to replace: ";
            cin >> rep;
            cout << "Enter new student number: ";
            cin >> newVal;
            if (access == 1) A.replace(rep, newVal);
            else if (access == 2) B.replace(rep, newVal);
            else cout << "Invalid class choice.\n";
        }
        else if (ans == 4) { // Insert
            int InsertVal, Ipos;
            cout << "Which class do you want to insert into? (1 for A, 2 for B): ";
            cin >> access;
            cout << "Enter index where you want to insert: ";
            cin >> Ipos;
            cout << "Enter student id to insert: ";
            cin >> InsertVal;
            if (access == 1) A.insert(Ipos, InsertVal);
            else if (access == 2) B.insert(Ipos, InsertVal);
            else cout << "Invalid class choice.\n";
        }
        else if (ans == 5) { // Delete
            cout << "Please choose what array you would like to delete from (1 for A, 2 for B): ";
            cin >> access;
            int Itd;
            cout << "Enter index to delete: ";
            cin >> Itd;
            if (access == 1) A.deleteAt(Itd);
            else if (access == 2) B.deleteAt(Itd);
            else cout << "Invalid choice.\n";
        }
        else if (ans == 6) { // Search
            cout << "What class would you like to search from? (1 for A, 2 for B): ";
            cin >> access;
            int key;
            cout << "Enter student number to search: ";
            cin >> key;
            if (access == 1) A.search(key);
            else if (access == 2) B.search(key);
            else cout << "Invalid choice.\n";
        }
        else if (ans == 7) { // Sort
            cout << "Which class do you want to sort? (1 for A, 2 for B): ";
            cin >> access;
            if (access == 1) { A.bubbleSort(); A.display("Array A"); }
            else if (access == 2) { B.bubbleSort(); B.display("Array B"); }
            else cout << "Invalid choice.\n";
        }
        else if (ans == 8) { // Catenate
            int arrA[10], arrB[10];
            A.exportArray(arrA);
            B.exportArray(arrB);
            C.catenate(arrA, A.size(), arrB, B.size());
            C.display("Array C (Catenated)");
        }
        else if (ans == 9) { // Merge
            int arrA[10], arrB[10];
            A.bubbleSort(); B.bubbleSort(); // ensure sorted
            A.exportArray(arrA);
            B.exportArray(arrB);
            C.merge(arrA, A.size(), arrB, B.size());
            C.display("Array C (Merged)");
        }
        else if (ans == 10) { // Exit
            cout << "Exiting program.\n";
            loop = false;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}

