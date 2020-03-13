#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <ios>

using namespace std;

int main() {
	cout << "Choose Start point..." << '\n';
	cout << "1. [H+]\n2. [OH-]\n3. pH\n4. pOH\n";
	int choice;
	cin >> choice;
	system ("cls");
	switch(choice)
	{
		case 1:
			cout << "Convert [H+] to Scientific Notation of A*10^B and input A,B\n";
			system ("pause");
			cout << '\n';
			double A,B;
			cout << "A:";
			cin >> A;
			cout << '\n';
			cout << "B:";
			cin >> B;
			cout << '\n';
			cout << "[H+]=" << A*pow(10,B) << '\n';
			cout << "[OH-]=" << (1/A)*pow(10,((-14)-B)) << '\n'; 
			cout << "[pH]=" << (-log10(A)-B) << '\n';
			cout << "[pOH]=" << 14-(-log10(A)-B) << '\n';
			break;
		case 2:
			cout << "Convert [OH-] to Scientific Notation of Z*10^Y and input Z,Y\n";
			system ("pause");
			cout << '\n';
			double Z,Y;
			cout << "Z:";
			cin >> Z;
			cout << '\n';
			cout << "Y:";
			cin >> Y;
			cout << '\n';
			cout << "[H+]=" << (1/Z)*pow(10,((-14)-Y)) << '\n';
			cout << "[OH-]=" << Z*pow(10,Y) << '\n'; 
			cout << "[pH]=" << 14-(-log10(Z)-Y) << '\n';
			cout << "[pOH]=" << (-log10(Z)-Y) << '\n';
		    break;
		case 3:
			cout << "Input pH as X\n";
			system ("pause");
			cout << '\n';
			double X;
			cout << "X:";
			cin >> X;
			double W;
			W = -X;
			cout << '\n';
			cout << "[H+]=" << pow(10,W) << '\n';
			cout << "[OH-]=" << pow(10,X-14) << '\n'; 
			cout << "[pH]=" << X << '\n';
			cout << "[pOH]=" << 14-X << '\n';
		    break;
		case 4:
			cout << "Input pOH as V\n";
			system ("pause");
			cout << '\n';
			double V;
			cout << "V:";
			cin >> V;
			double U;
			U = -V;
			cout << '\n';
			cout << "[H+]=" << pow(10,V-14) << '\n';
			cout << "[OH-]=" << pow(10,U) << '\n'; 
			cout << "[pH]=" << 14-V << '\n';
			cout << "[pOH]=" << V << '\n';
			break;
	}
}
