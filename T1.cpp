//This crazy program is to store the weighs of students
# include<iostream>
# include<fstream>
# include<string>
using namespace std;
int main()
{
	string studentname[30];
	int weightbefore[30];

	ofstream output("File1.txt");
	if (!output.is_open())
	{
		cout << "Error in opening file " << endl;
		//ofstream output("File1.txt");
		return 1;
	}
	else
	{
		for (int i = 0; i < 30; i++)
		{
			cout << "Enter student name: ";
			getline(cin, studentname[i]);
			//cin.ignore();
			output << "Name: " << studentname[i] << endl;

			// Prompt for weight and validate
			do
			{
				cout << "Enter weight for " << studentname[i] << ": ";
				cin >> weightbefore[i];
				if (weightbefore[i] < 15 || weightbefore[i] > 70)
				{
					cout << "Invalid weight. Please Re-enter." << endl;
				}
			} while (weightbefore[i] < 15 || weightbefore[i] > 70); // Corrected loop condition

			output << "Weight: " << weightbefore[i] << endl;
			cin.ignore();
		}
		output.close();
	}
	cout << endl;

	// Data Reading from the file for the output
	ifstream input("File1.txt");
	if (!input.is_open()) {
		cout << "Error in opening file " << endl;
		return 1;
	}
	else {

		for (int i = 0; i < 30; i++) {

			getline(input, studentname[i]);
			input >> weightbefore[i];
			input.ignore();
			cout << "Name: " << studentname[i] << endl;
			cout << "Weight: " << weightbefore[i] << endl;
		}

		input.close();
	}

	return 0;
}

