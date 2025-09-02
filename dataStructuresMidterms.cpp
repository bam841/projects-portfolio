 // Constructor to initialize the list with a given max size
    StudentListManager(int max_size) {
        MAX = max_size;
        studentIds = new int[MAX];
        n = 0;  // Initially, the list is empty
    }

    // Destructor to free the allocated memory
    ~StudentListManager() {
        delete[] studentIds;
    }

    // Append - Adds a student ID to the end of the list
    void append(int studentId) {
        if (n == MAX) {
            cout << "Error: Student list is full (maximum " << MAX << " students)" << endl;
        } else {
            studentIds[n] = studentId;
            n++;
            cout << "Student ID " << studentId << " added successfully!" << endl;
        }
    }

    // Replace - Replace a student ID at index k with new student ID
    void replace(int index, int newStudentId) {
        if (index < 0 || index >= n) {
            cout << "Error: Invalid student position (valid range: 0-" << (n-1) << ")" << endl;
        } else {
            int oldId = studentIds[index];
            studentIds[index] = newStudentId;
            cout << "Student ID " << oldId << " at position " << index << " replaced with " << newStudentId << endl;
        }
    }

    // Insert - Inserts a student ID at position pos
    void insert(int pos, int studentId) {
        if (n == MAX) {
            cout << "Error: Student list is full" << endl;
        } else if (pos < 0 || pos > n) {
            cout << "Error: Invalid position (valid range: 0-" << n << ")" << endl;
        } else {
            for (int i = n; i > pos; i--) {
                studentIds[i] = studentIds[i - 1];
            }
            studentIds[pos] = studentId;
            n++;
            cout << "Student ID " << studentId << " inserted at position " << pos << endl;
        }
    }

    // Delete - Deletes a student at position pos
    void deleteAt(int pos) {
        if (n == 0) {
            cout << "Error: No students in the list" << endl;
        } else if (pos < 0 || pos >= n) {
            cout << "Error: Invalid position (valid range: 0-" << (n-1) << ")" << endl;
        } else {
            int deletedId = studentIds[pos];
            for (int i = pos; i < n - 1; i++) {
                studentIds[i] = studentIds[i + 1];
            }
            n--;
            cout << "Student ID " << deletedId << " deleted from position " << pos << endl;
        }
    }

    // Search - Search for a student ID in the list
    int search(int studentId) {
        for (int i = 0; i < n; i++) {
            if (studentIds[i] == studentId) {
                return i;
            }
        }
        return -1; // Not found
    }

    // BubbleSort - Sorts the student IDs in ascending order
    void bubbleSort() {
        if (n == 0) {
            cout << "No students to sort" << endl;
            return;
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (studentIds[j] > studentIds[j + 1]) {
                    swap(studentIds[j], studentIds[j + 1]);
                }
            }
        }
        cout << "Student list sorted by ID successfully!" << endl;
    }

    // Export array data (for catenation/merge)
    void exportArray(int* arr) {
        for (int i = 0; i < n; i++) {
            arr[i] = studentIds[i];
        }
    }

    // Display the current student list
    void display(const string& listName = "Student List") {
        cout << "\n=== " << listName << " ===" << endl;
        if (n == 0) {
            cout << "No students in this list." << endl;
        } else {
            cout << "Total students: " << n << endl;
            cout << "Student IDs: ";
            for (int i = 0; i < n; i++) {
                cout << studentIds[i] << " ";
            }
            cout << endl;
        }
        cout << "===================" << endl;
    }

    // Get the current size of the list
    int size() {
        return n;
    }

    // Catenate two student lists into this list
    void catenate(const int* list1, int n1, const int* list2, int n2) {
        if (n1 + n2 > MAX) {
            cout << "Error: Not enough space to concatenate lists" << endl;
            n = 0;
            return;
        }
        n = 0;
        for (int i = 0; i < n1; i++) studentIds[n++] = list1[i];
        for (int i = 0; i < n2; i++) studentIds[n++] = list2[i];
        cout << "Student lists concatenated successfully!" << endl;
    }

    // Merge two sorted student lists into this list
    void merge(const int* list1, int n1, const int* list2, int n2) {
        if (n1 + n2 > MAX) {
            cout << "Error: Not enough space to merge lists" << endl;
            n = 0;
            return;
        }
        int i = 0, j = 0;
        n = 0;
        while (i < n1 && j < n2) {
            if (list1[i] <= list2[j]) studentIds[n++] = list1[i++];
            else studentIds[n++] = list2[j++];
        }
        while (i < n1) studentIds[n++] = list1[i++];
        while (j < n2) studentIds[n++] = list2[j++];
        cout << "Student lists merged successfully!" << endl;
    }

    // Check if list is empty
    bool isEmpty() {
        return n == 0;
    }
};

void displayMenu() {
    cout << "\n========================================" << endl;
    cout << "    STUDENT LIST MANAGEMENT SYSTEM" << endl;
    cout << "========================================" << endl;
    cout << "1. Access student attendance list (display)" << endl;
    cout << "2. Append student data to array" << endl;
    cout << "3. Replace student data" << endl;
    cout << "4. Insert student in scholarship slot" << endl;
    cout << "5. Delete student data records" << endl;
    cout << "6. Search student from records" << endl;
    cout << "7. Sort students by ID" << endl;
    cout << "8. Concatenate student lists" << endl;
    cout << "9. Merge student lists" << endl;
    cout << "10. Exit system" << endl;
    cout << "========================================" << endl;
    cout << "Enter your choice (1-10): ";
}


int main() {
    // Create three arrays
    ListSystem A(10); // Array A
    ListSystem B(10); // Array B
    ListSystem C(20); // Array C (for catenate/merge results)

    cout<<"what would you like to do please choose from the options below"<< endl;
    cout<< "1.  access student attendance list (access) "<<  endl;
    cout<< "2.  append student data array(append)" << endl;
    cout<< "3. replace the student(replace)"<<  endl;
    cout<<"4.  insert student in a scholarship slot inside the array " <<endl;
    cout<<"5. delete student data records from the chosen grade" <<endl;
    cout<<"6. search student from the chosen student recor" <<endl;
    cout<<"7. sort students by age  from the chosen array" <<endl;
    cout<<"8. catenate students" <<endl;
    cout<<"5. merge all students" <<endl;

    
    
    
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

