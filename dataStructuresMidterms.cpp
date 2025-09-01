#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ListSystem {
private:
    std::vector<int> data;
    int MAX;

public:
    ListSystem(int max_size) : MAX(max_size) {}

    void append(int value) {
        if ((int)data.size() == MAX) {
            cout << "Error: Array is full" << endl;
        } else {
            data.push_back(value);
            cout << "Append successful" << endl;
        }
    }

    void replace(int k, int newValue) {
        if (k < 0 || k >= (int)data.size()) {
            cout << "Error: Index out of bounds" << endl;
        } else {
            data[k] = newValue;
            cout << "Replacement successful" << endl;
        }
    }

    void insert(int pos, int value) {
        if ((int)data.size() == MAX) {
            cout << "Error: Array is full" << endl;
        } else if (pos < 0 || pos > (int)data.size()) {
            cout << "Invalid position" << endl;
        } else {
            data.insert(data.begin() + pos, value);
            cout << "Insertion successful" << endl;
        }
    }

    void deleteAt(int pos) {
        if (data.empty()) {
            cout << "Array empty" << endl;
        } else if (pos < 0 || pos >= (int)data.size()) {
            cout << "Invalid position" << endl;
        } else {
            data.erase(data.begin() + pos);
            cout << "Deletion successful" << endl;
        }
    }

    int search(int key) {
        for (int i = 0; i < (int)data.size(); i++) {
            if (data[i] == key) return i;
        }
        return -1;
    }

    void bubbleSort() {
        for (int i = 0; i < (int)data.size() - 1; i++) {
            for (int j = 0; j < (int)data.size() - i - 1; j++) {
                if (data[j] > data[j + 1]) {
                    std::swap(data[j], data[j + 1]);
                }
            }
        }
        cout << "Sort successful" << endl;
    }

    void catenate(const int* otherList, int m) {
        if ((int)data.size() + m > MAX) {
            cout << "Error: Not enough space to concatenate" << endl;
        } else {
            for (int i = 0; i < m; i++) {
                data.push_back(otherList[i]);
            }
            cout << "Catenation successful" << endl;
        }
    }

    void merge(const int* otherList, int m) {
        std::vector<int> merged;
        int i = 0, j = 0;
        int n = (int)data.size();
        while (i < n && j < m) {
            if (data[i] <= otherList[j]) merged.push_back(data[i++]);
            else merged.push_back(otherList[j++]);
        }
        while (i < n) merged.push_back(data[i++]);
        while (j < m) merged.push_back(otherList[j++]);
        if ((int)merged.size() > MAX) {
            cout << "Error: Not enough space to merge" << endl;
            return;
        }
        data = merged;
        cout << "Merge successful" << endl;
    }

    void display() {
        for (size_t i = 0; i < data.size(); ++i)
            cout << data[i] << " ";
        cout << endl;
    }

    int size() { return (int)data.size(); }
};

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
    if (index != -1) cout << index;
    else cout << "Not found";
    cout << endl;

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
