#include <iostream>
using namespace std;

int main()
{
      int x;
      cout << "Enter number of students: ";
      cin >> x;

      int arr[x][2]; // Using a fixed size of 2 for roll number and marks

      cout << "Enter their roll number and marks:\n";
      for (int i = 0; i < x; i++)
      {
            cout << "Student " << i + 1 << ":\n"<< "Roll number: ";
            cin >> arr[i][0];
            cout << "Marks: ";
            cin >> arr[i][1];
      }

      cout << endl;
      cout << "Roll No.    Marks\n";
      for (int i = 0; i < x; i++)
      {
            cout << arr[i][0] << "           " << arr[i][1] << endl;
      }

      return 0;
}
