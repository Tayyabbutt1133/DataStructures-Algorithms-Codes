#include<iostream>
using namespace std;

class TwoDArray
{
private:
	int r_size;
	int c_size;
	int r_size2;
	int c_size2;
public:
	//Default constructor
	TwoDArray(){};
	//Parameterized constructor
	TwoDArray(int r_size, int c_size, int r_size2, int c_size2)
	{
		this->r_size = r_size;
		this->c_size = c_size;
		this->r_size2 = r_size2;
		this->c_size2 = c_size2;
	}
	void Twodarray1()
	{
		cout << "Enter Row Size of Array 1:" << endl;
		cin >> r_size;
		cout << "Enter Column Size of Array 1:" << endl;
		cin >> c_size;
		//creating 2-D Array
		int **arr = new int*[r_size];
		for (int i = 0; i < r_size; i++)
		{
			arr[i] = new int[c_size];
		}
		//user input
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size; ++i)
		{
			for (int j = 0; j < c_size; ++j)
			{
				cin >> arr[i][j];
			}
			cout << endl;
		}
	}
	void Twodarray2()
	{
		cout << "Enter Row Size of Array 2:" << endl;
		cin >> r_size2;
		cout << "Enter Column Size of Array 2:" << endl;
		cin >> c_size2;
		//creating 2-D Array
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
};

int main()
{
	int ask_user;
	int r_size;
	int c_size;
	int r_size2;
	int c_size2;
	TwoDArray obj;
	cout << "1: Input Matrix"<<endl;
	cout << "2 : Display Matrix" << endl;
	cout << "3: Add Matrices" << endl;
	cout << "4 : Subtract Matrices" << endl;
	cout << "5 : Add a Constant value to Matrix" << endl;
	cout << "6 : Multiply Matrices" << endl;
	cout << "7 : Exit" << endl;
	cout << endl;
	cout << "Enter Your Option Choice:" << endl;
	cin >> ask_user;
	if (ask_user==1)
	{
		obj.Twodarray1();
		obj.Twodarray2();
	}
	else if (ask_user==2)
	{
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
	else if (ask_user == 3)
	{
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
	else if (ask_user == 4)
	{
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
	else if (ask_user == 5)
	{
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
	else if (ask_user == 6)
	{
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
	else if (ask_user == 7)
	{
		int **arr2 = new int*[r_size2];
		for (int i = 0; i < r_size2; i++)
		{
			arr2[i] = new int[c_size2];
		}
		cout << "Enter Values:" << endl;
		for (int i = 0; i < r_size2; ++i)
		{
			for (int j = 0; j < c_size2; ++j)
			{
				cin >> arr2[i][j];
			}
			cout << endl;
		}
	}
}