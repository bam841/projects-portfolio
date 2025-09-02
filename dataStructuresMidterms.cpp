#include <iostream>
#include <algorithm> // Needed for swap in bubbleSort
using namespace std;

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
            cout << "Error: Index out of bounds" << endl;
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
            for (int i = n; i > pos; i--) {
                data[i] = data[i - 1];
            }
            data[pos] = value;
            n++;
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
                return i;
            }
        }
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

    // Export array data (for catenation/merge)
    void exportArray(int* arr) {
        for (int i = 0; i < n; i++) {
            arr[i] = data[i];
        }
    }

    // Display the current list
    void display(const char* name = "Array") {
        cout << name << ": ";
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Get the current size of the list
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

    // Catenate arr1 and arr2 into this list (for C)
    void catenate(const int* arr1, int n1, const int* arr2, int n2) {
        if (n1 + n2 > MAX) {
            cout << "Error: Not enough space to concatenate" << endl;
            n = 0;
            return;
        }
        n = 0;
        for (int i = 0; i < n1; i++) data[n++] = arr1[i];
        for (int i = 0; i < n2; i++) data[n++] = arr2[i];
        cout << "Catenation successful" << endl;
    }

    // Merge two sorted arrays into this list (for C)
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
    ListSystem B(10); // Array B
    ListSystem C(20); // Array C (for catenate/merge results)

    // Add elements to A
    A.append(10);
    A.append(20);
    A.append(30);
    cout << "Initial ";
    A.display("A");

    // Add elements to B
    B.append(15);
    B.append(25);
    cout << "Initial ";
    B.display("B");

    // Demonstrate basic operations on A
    A.replace(1, 22); // Replace index 1
    A.display("A after replace");

    A.insert(1, 12); // Insert at index 1
    A.display("A after insert");

    A.deleteAt(2); // Delete index 2
    A.display("A after delete");

    int idx = A.search(22);
    cout << "Index of 22 in A: ";
    if (idx != -1) cout << idx << endl;
    else cout << "Not found" << endl;

    A.bubbleSort();
    A.display("A after sort");

    // Catenate A and B into C
    int arrA[10], arrB[10];
    int sizeA = A.size(), sizeB = B.size();
    A.exportArray(arrA);
    B.exportArray(arrB);
    C.catenate(arrA, sizeA, arrB, sizeB);
    C.display("C = A + B (catenate)");

    // Merge A and B into C (both sorted)
    A.bubbleSort();
    B.bubbleSort();
    A.exportArray(arrA);
    B.exportArray(arrB);
    C.merge(arrA, sizeA, arrB, sizeB);
    C.display("C = merge(A, B)");

    return 0;
}
