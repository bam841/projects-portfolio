#include <iostream>
#include <algorithm> // Needed for swap in bubbleSort
using namespace std;

int access = 3;
int studentNum = 0;

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
// k represents the index 
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

    // Export array data (for catenation/merge)
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
            cout << "Error: Not enough space to concatenate the two arrays" << endl;
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
        cout << "4.  Insert student in a scholarship slot\n";
        cout << "5.  Delete student data record\n";
        cout << "6.  Search for a student\n";
        cout << "7.  Sort students by age\n";
        cout << "8.  Catenate students\n";
        cout << "9.  Merge all students\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> ans;
            // access
        if (ans == 1) {
            cout << "Which array do you want to access? (1 for A, 2 for B): ";
            cin >> access;
            switch (access) {
                case 1:
                    cout << "You chose array A.\n";
                    A.display("Array A");
                    break;
                case 2:
                    cout << "You chose array B.\n";
                    B.display("Array B");
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
        }
            // apppend 
        else if (ans == 2) {
            cout << "Which class do you want to add a student to? (1 for A, 2 for B): ";
            cin >> access;
            switch (access) {
                case 1:
                    cout << "Current list of Class A:\n";
                    A.display("Array A");
                    cout << "Enter student number to append: ";
                    cin >> studentNum;
                    A.append(studentNum);
                    break;
                case 2:
                    cout << "Current list of Class B:\n";
                    B.display("Array B");
                    cout << "Enter student number to append: ";
                    cin >> studentNum;
                    B.append(studentNum);
                    break;
                default:
                    cout << "Invalid class choice.\n";
            }
        }
            // replacement 
        else if (ans == 3) {
            cout << "Choose class for replacement (1 for A, 2 for B): ";
            cin >> access;
            int rep, newVal;
            switch (access) {
                case 1:
                    cout << "Current list of Class A:\n";
                    A.display("Array A");
                    cout << "Enter index to replace: ";
                    cin >> rep;
                    cout << "Enter new student number: ";
                    cin >> newVal;
                    A.replace(rep, newVal);
                    break;
                case 2:
                    cout << "Current list of Class B:\n";
                    B.display("Array B");
                    cout << "Enter index to replace: ";
                    cin >> rep;
                    cout << "Enter new student number: ";
                    cin >> newVal;
                    B.replace(rep, newVal);
                    break;
                default:
                    cout << "Invalid class choice.\n";
            }
        }
            // insert
        else if (ans == 4) {
            int InsertVal, Ipos;
            cout << "Which class do you want to insert into? (1 for A, 2 for B): ";
            cin >> access;

            switch (access) {
                case 1:
                    cout << "You chose array A.\n";
                    A.display("Array A");
                    cout << "Enter index where you want to insert: ";
                    cin >> Ipos;
                    cout << "Enter student id to insert: ";
                    cin >> InsertVal;
                    A.insert(Ipos, InsertVal);
                    break;

                case 2:
                    cout << "You chose array B.\n";
                    B.display("Array B");
                    cout << "Enter index where you want to insert: ";
                    cin >> Ipos;
                    cout << "Enter student id to insert: ";
                    cin >> InsertVal;
                    B.insert(Ipos, InsertVal);
                    break;

                default:
                    cout << "Invalid class choice.\n";
            }
        }
            // delete
        else if (ans == 5) {
           cout<<"please choose what array you would like to delete from: ";
            cin>> access;
            switch(access){
                int Itd;
                
                case  1:  
                cout<<"You have chosen to delete at array A, this is the current list of array A:"<< endl;
                A.display("array A");
                cout<<"please enter the index that you want to delete,  please notet that once deleted , it cannot be undone ";
                cin>> Itd;
                A.deleteAt(Itd);
                
                    
                break;

                case 2:
                cout<<"hye there you have chosen to delete at Araay B, this is the current list of Array B:";
                B.display("Array B" );
                cout<<"please enter the index that you want to delete at array B  please notet that once deleted , it cannot be undone";
                cin>>Itd;
                B.deleteAt(Itd);
                    
                break;
        
            
                

            }
            
        }
            // search
        else if (ans == 6) {
            cout<<"what class would you like to search student id from? Choose class for search  (1 for A, 2 for B):";
            cin>> access;
            int studentNum;
            switch(access){
                
                
                case 1:   
                    cout<<"welcome to class A, please input the student number that you want to search here: ";
                    cin>>studentNum;
                    A.search(studentNum);
                

                break;


                case 2: 
                     cout<<"welcome to class B, please input the student number that you want to search here: ";
                    cin>>studentNum;
                    B.search(studentNum);
                

                break;

            }
           
        }
         // sort
        else if (ans == 7) {
            cout << "Feature not yet added.\n";
        }
            // catenate
        else if (ans == 8) {
            cout << "Feature not yet added.\n";
        }
            // merge
        else if (ans == 9) {
            cout << "Feature not yet added.\n";
        }
            //exit done
        else if (ans == 10) {
            cout << "Exiting program.\n";
            loop = false;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}





