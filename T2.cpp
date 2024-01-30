// This task is to calculate the difference between the weights of different students
# include<iostream>
using namespace std;
int main()
{
	string studentname[30];
	int weightbefore[30];
	int weightafter[30];
	int difference[30];

	for (int i = 0;i < 30;i++)
	{
		cout << "Enter the name of student: ";
		cin >> studentname[i];
		cout << "Weight before: ";
		cin >> weightbefore[i];
		cout << "Enter the weight after: ";
		cin >> weightafter[i];

		if (weightafter[i] > weightbefore[i])
		{
			difference[i] = weightafter[i] - weightbefore[i];
			cout << "Difference After Gaining weight: " << difference[i] << endl;
		}
		else
		{
			difference[i] = weightbefore[i] - weightafter[i];
			cout << "Difference After losing weight: " << difference[i] << endl;
		}

	}
	
	return 0;
}