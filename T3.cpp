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
		cout << "Weight after: ";
		cin >> weightafter[i];

		if (weightafter[i] > weightbefore[i])
		{
			difference[i] = weightafter[i] - weightbefore[i];
			if (difference[i] > 2.5)
			{
				cout << "Rise in weight of:  " << studentname[i] << endl;
			}
			cout << "Difference After Gaining weight: " << difference[i] <<"kgs" << endl;
		}
		else
		{
			difference[i] = weightbefore[i] - weightafter[i];
			if (difference[i] < 2.5)
			{
				cout << "Fall in weight of:  "<<studentname[i] << endl;
			}
			
			cout << "Difference After losing weight: " << difference[i] <<"kgs" << endl;
		}

	}

	return 0;
}