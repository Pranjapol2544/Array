#include <iostream>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int salary);
int main()
{
	int num_per = 0;
	cout << "Enter Number of person : ";
	cin >> num_per;
	
	int *salary = new int[num_per];

	for (int i = 0; i < num_per; i++)
	{
		cout << "Enter the salary " << ": ";
		cin >> salary[i];
	}
	cout << "-------------------------------------------" << endl;
	display(salary,num_per);
	cout << "-------------------------------------------" << endl;

}
void display(int salary[],int num)
{
	for(int i = 0 ; i < num;i++)
	{
		int bonus = cal_bonus(salary[i]);
		cout << "The Salary for person" << i << " :" << salary[i] << " and Bonus = " << bonus << endl; 
	}
}
int cal_bonus(int salary)
{
	int bonus = 0;
	bonus = salary * 2;
	return bonus;
}
