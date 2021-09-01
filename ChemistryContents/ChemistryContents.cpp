#include <iostream>
using namespace std;

double W_V()
{
	int a;
	cout << "What do you want to find 1.solution, 2.dissolved substance, 3.concentration " << endl;
	cin >> a;
	if (a == 1)
	{
		double content, sol, sub;
		cout << "Enter the concentration " << endl;
		cin >> content;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (content < 0 || sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub > 0 || content > 0 && sub == 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content >= 50)
		{
			cout << "The dissolved substance constitue more than 50% of the solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sol = 100 * sub / content;
			cout << "The solution with concentration " << content << "% w/v and dissolved substance " << sub << "g is " << sol << "ml " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}//solution
	else if (a == 2)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the concentration " << endl;
		cin >> content;
		if (sol < 0 || content < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0 || content == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content >= 50)
		{
			cout << "The dissolved substance constitue more than 50% of the solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sub = content / 100 * sol;
			cout << "The dissolved substance of the solution " << sol << "ml with concentration " << content << "% w/v is " << sub << "g " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}//disolve substance
	else if (a == 3)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (sol < 0 || sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0 || sub == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol < sub)
		{
			cout << "The solution cannot be smaller than the dissolved substance " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			content = sub / sol * 100;
			if (content >= 50)
			{
				cout << "The dissolved substance constitue more than 50% of the solution " << endl;
				cout << "========================================================================================================================" << endl;
			}
			else {
				cout << "The concentration of the solution " << sol << "ml and dissolved substance " << sub << "g is " << content << "% w/v " << endl;
				cout << "========================================================================================================================" << endl;
			}
		}
	}//concetracion


	return 0;
}//concentracion type w/v

double W_W()
{
	int a;
	cout << "What do you want to find 1.solution, 2.dissolved substance, 3.concentration " << endl;
	cin >> a;
	if (a == 1)
	{
		double content, sol, sub;
		cout << "Enter the concentration " << endl;
		cin >> content;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (content < 0 || sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub > 0 || content > 0 && sub == 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content >= 50)
		{
			cout << "The dissolved substance constitue more than 50% of the solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sol = 100 * sub / content;
			cout << "The solution with concentration " << content << "% w/w and dissolved substance " << sub << "g is " << sol << "g " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}//solution
	else if (a == 2)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the concentration " << endl;
		cin >> content;
		if (sol < 0 || content < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0 || content == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content >= 50)
		{
			cout << "The dissolved substance constitue more than 50% of the solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sub = content / 100 * sol;
			cout << "The dissolved substance of the solution " << sol << "g with concentration " << content << "% w/w is " << sub << "g " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}//disolve substance
	else if (a == 3)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (sol < 0 || sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0 || sub == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol < sub)
		{
			cout << "The solution cannot be smaller than the dissolved substance " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			content = sub / sol * 100;
			if (content >= 50)
			{
				cout << "The dissolved substance constitue more than 50% of the solution " << endl;
				cout << "========================================================================================================================" << endl;
			}
			else {
				cout << "The concentration of the solution " << sol << "g and dissolved substance " << sub << "g is " << content << "% w/w " << endl;
				cout << "========================================================================================================================" << endl;
			}
		}
	}//concetration


	return 0;
}//concentracion type w/w

double V_V()
{
	int a;
	cout << "What do you want to find 1.solution, 2.dissolved substance, 3.concentration " << endl;
	cin >> a;
	if (a == 1)
	{
		double content, sol, sub;
		cout << "Enter the concentration " << endl;
		cin >> content;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (content < 0 || sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content == 0 && sub > 0 || content > 0 && sub == 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content >= 50)
		{
			cout << "The dissolved substance constitue more than 50% of the solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sol = 100 * sub / content;
			cout << "The solution with concentration " << content << "% v/v and dissolved substance " << sub << "ml is " << sol << "ml " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}//solution
	else if (a == 2)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the concentration " << endl;
		cin >> content;
		if (sol < 0 || content < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0 || content == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (content >= 50)
		{
			cout << "The dissolved substance constitue more than 50% of the solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			sub = content / 100 * sol;
			cout << "The dissolved substance of the solution " << sol << "ml with concentration " << content << "% v/v is " << sub << "ml " << endl;
			cout << "========================================================================================================================" << endl;
		}
	}//disolve substance
	else if (a == 3)
	{
		double content, sol, sub;
		cout << "Enter the solution " << endl;
		cin >> sol;
		cout << "Enter the dissolved substance " << endl;
		cin >> sub;
		if (sol < 0 || sub < 0)
		{
			cout << "Please enter a valid value " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol == 0 || sub == 0)
		{
			cout << "This is not considered a solution " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else if (sol < sub)
		{
			cout << "The solution cannot be smaller than the dissolved substance " << endl;
			cout << "========================================================================================================================" << endl;
		}
		else
		{
			content = sub / sol * 100;
			if (content >= 50)
			{
				cout << "The dissolved substance constitue more than 50% of the solution " << endl;
				cout << "========================================================================================================================" << endl;
			}
			else {
				cout << "The concentration of the solution " << sol << "g and dissolved substance " << sub << "g is " << content << "% w/w " << endl;
				cout << "========================================================================================================================" << endl;
			}
		}
	}//concetration


	return 0;
}//concentracion type v/v


int main()
{
	cout << "Welcome to MathFlare's early access concentration calculator" << endl;
	cout << "------------------------------------------------------------" << endl;
	while (true)
	{
		int a;
		cout << "Enter the type of concentration 1.w/w, 2.w/v, 3.v/v " << endl;
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

