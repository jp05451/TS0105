#include<iostream>
using namespace std;

int main()
{
				double PI = 3.14159265358979323846;
				double r;
				while (cin >> r)
				{
								printf("%.6f", PI*r*r*r*4.0/ 3.0);
								cout << endl;
				}
}