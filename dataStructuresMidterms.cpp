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
 
    // Catenate - Concatenates another list to the current list
    void catenate(int* otherList, int m) {
        if (n + m > MAX) {
            cout << "Error: Not enough space to concatenate" << endl;
        } else {
            for (int i = 0; i < m; i++) {
                data[n] = otherList[i];
                n++;
            }
            cout << "Catenation successful" << endl;
        }
    }
 
    // Merge - Merges two sorted lists
    void merge(int* otherList, int m) {
        int i = 0, j = 0, k = 0;
        // Make sure merged size won't exceed MAX
        if (n + m > MAX) {
            cout << "Error: Not enough space to merge" << endl;
            return;
        }
        int* mergedList = new int[n + m];
 
        // Merge the two lists
        while (i < n && j < m) {
            if (data[i] <= otherList[j]) {
                mergedList[k++] = data[i++];
            } else {
                mergedList[k++] = otherList[j++];
            }
        }
 
        // Copy remaining elements
        while (i < n) {
            mergedList[k++] = data[i++];
        }
        while (j < m) {
            mergedList[k++] = otherList[j++];
        }
 
        // Copy merged list back to data
        delete[] data;
        data = mergedList;
        n = k;
 
        cout << "Merge successful" << endl;
    }
 
    // Display the current list
    void display() {
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
 
    // Get the current size of the list
    int size() {
        return n;
    }
};
 
// Example usage
int main() {
    ListSystem system(10); // Max size of 10
 
    // Append some elements
    system.append(10);
    system.append(20);
    system.append(30);
 
    // Display current list
    cout << "Current list: ";
    system.display();
 
    // Replace an element
    system.replace(1, 25);
    cout << "After replacing index 1: ";
    system.display();
 
    // Insert an element
    system.insert(1, 15);
    cout << "After inserting 15 at index 1: ";
    system.display();
 
    // Delete an element
    system.deleteAt(2);
    cout << "After deleting index 2: ";
    system.display();
 
    // Search for an element
    int index = system.search(25);
    cout << "Index of 25: ";
    if (index != -1)
        cout << index << endl;
    else
        cout << "Not found" << endl;
 
    // Sort the list
    system.bubbleSort();
    cout << "After sorting: ";
    system.display();
 
    // Catenate two lists
    int otherList[] = {40, 50};
    system.catenate(otherList, 2);
    cout << "After concatenating [40, 50]: ";
    system.display();
 
    // Merge two lists
    int listToMerge[] = {5, 60};
    system.merge(listToMerge, 2);
    cout << "After merging with [5, 60]: ";
    system.display();
 
    return 0;
}
