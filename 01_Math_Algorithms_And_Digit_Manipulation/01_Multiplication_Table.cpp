# include <iostream>
# include <string>
using namespace std;

void Print_Table_Header()
{
	cout << "\t\t\t    Multiplication Table From 1 To 10\n\n";
	for (int i = 1; i <= 10; i++)
		cout << "\t" << i;
	cout << "\n" << string(83, '-');
}

string Colum_Separator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void Print_Multiplication_Table()
{
	Print_Table_Header();

	for (int i = 1; i <= 10; i++)
	{
		cout << "\n " << i << Colum_Separator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << j * i << "\t";
		}
	}
}

int main()
{
	Print_Multiplication_Table();
	return 0;
}