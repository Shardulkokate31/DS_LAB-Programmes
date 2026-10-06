#include<iostream>
using namespace std;

int main()
{
    int student[5];

    cout << "Enter 5 Student IDs:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> student[i];
    }

    // Sorting
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (student[j] > student[j + 1])
            {
                int temp = student[j];

                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents after sorting:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << student[i] << " ";
    }

    return 0;
}
