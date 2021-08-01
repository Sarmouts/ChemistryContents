#include <iostream>
using namespace std;

double W_V()
{
	int a;
	cout << "What do you want to find 1.solution, 2.dissolved substance, 3.content " << endl;
	cin >> a;
	if (a == 1)
	{
		double content, sol, sub;
		cout << "Enter the content " << endl;
		cin >> content;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (content < 0 && sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub == 0)
		{
			cout << "You cannot find the solution since there is not content and dissolved substance " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub > 0 || content > 0 && sub == 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sol = 100 * sub / content;
			cout << "The solution with content " << content << "% w/v and dissolved substance " << sub << "g is " << sol << "ml " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}
	else if (a == 2)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the content " << endl;
		cin >> content;
		if (sol < 0 && content < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0)
		{
			cout << "There is not any content and dissolved substance since there is not solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sub = content / 100 * sol;
			cout << "The dissolved substance of the solution " << sol << "ml with content " << content << "% w/v is " << sub << "g " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}
	else if (a == 3)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (sol < 0 && sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0)
		{
			cout << "There is not any content and dissolved substance since there is not solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			content = sub / sol * 100;
			cout << "The content of the solution " << sol << "ml and dissolved substance " << sub << "g is " << content << "% w/v " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}


	return 0;
}

double W_W()
{
	int a;
	cout << "What do you want to find 1.solution, 2.dissolved substance, 3.content " << endl;
	cin >> a;
	if (a == 1)
	{
		double content, sol, sub;
		cout << "Enter the content " << endl;
		cin >> content;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (content < 0 && sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub == 0)
		{
			cout << "You cannot find the solution since there is not content and dissolved substance " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub > 0 || content > 0 && sub == 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sol = 100 * sub / content;
			cout << "The solution with content " << content << "% w/w and dissolved substance " << sub << "g is " << sol << "g " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}
	else if (a == 2)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the content " << endl;
		cin >> content;
		if (sol < 0 && content < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0)
		{
			cout << "There is not any content and dissolved substance since there is not solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sub = content / 100 * sol;
			cout << "The dissolved substance of the solution " << sol << "g with content " << content << "% w/w is " << sub << "g " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}
	else if (a == 3)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (sol < 0 && sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0)
		{
			cout << "There is not any content and dissolved substance since there is not solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			content = sub / sol * 100;
			cout << "The content of the solution " << sol << "g and dissolved substance " << sub << "g is " << content << "% w/w " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}


	return 0;
}

double V_V()
{
	int a;
	cout << "What do you want to find 1.solution, 2.dissolved substance, 3.content " << endl;
	cin >> a;
	if (a == 1)
	{
		double content, sol, sub;
		cout << "Enter the content " << endl;
		cin >> content;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (content < 0 && sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub == 0)
		{
			cout << "You cannot find the solution since there is not content and dissolved substance " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub > 0 || content > 0 && sub == 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sol = 100 * sub / content;
			cout << "The solution with content " << content << "% v/v and dissolved substance " << sub << "ml is " << sol << "ml " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}
	else if (a == 2)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the content " << endl;
		cin >> content;
		if (sol < 0 && content < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0)
		{
			cout << "There is not any content and dissolved substance since there is not solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sub = content / 100 * sol;
			cout << "The dissolved substance of the solution " << sol << "ml with content " << content << "% v/v is " << sub << "ml " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}
	else if (a == 3)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (sol < 0 && sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0)
		{
			cout << "There is not any content and dissolved substance since there is not solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			content = sub / sol * 100;
			cout << "The content of the solution " << sol << "ml and dissolved substance " << sub << "ml is " << content << "% v/v " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}


	return 0;
}


int main()
{
	while (true)
	{
		int a;
		cout << "Enter the type of content 1.w/w, 2.w/v, 3.v/v " << endl;
		cin >> a;

		if (a == 1)
		{
			W_W();
		}

		else if (a == 2)
		{
			W_V();
		}

		else if (a == 3)
		{
			V_V();
		}
		else
		{
			cout << "Wrong input " << endl;
			break;
		}
	}
}

