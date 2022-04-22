#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int  lefttoright(string st, char arr1[20][20],int axis[4])
{
	int count = 0;

	for (int i = 0; st[i] != '\0'; i++)
	{
		count++;
	}
	bool f = false;
	int j = 0;
	for (int i = 0; i < 20; i++) //checking all rows 
		for (int k = 0; k < 20; k++) {//checking allcolumns

			if (arr1[i][k] == st[j])
			{
				int u = k; 
				int m = 0;
				for (; m < count; m++) { //incrementing to check string 
					if (arr1[i][u] == st[m])
					{
						u++;

						f = true;
						
					}
					else if(m!=count-1 &&f==false)
					{
						f = false;
					}

				}

				
					if (f == true && m==count-1) {
						ofstream fout("hint.txt");
						fout << "left to right" << endl;
						fout << "(" << i << ",";
						fout << k << ")";
						fout << "(" << i << ",";
						fout << u - 1 << ")";
						cout << "(" << i << "," << k << ")";
						cout << "(" << i << "," << u - 1 << ")";
						return 0;
					}
				}		
			if (f == false) {
				ofstream fout("hint.txt");
				fout << "not found";
				return 0;
			}
		}
	
}
int ToptoBottom(string st, char arr1[20][20], int axis[4]) {
	int count = 0;

	for (int i = 0; st[i] != '\0'; i++)
	{
		count++;
	}
	
	bool f = false;
	int j = 0;
	for (int i = 0; i < 20; i++) //checking for all columns 
	{
		for (int k =0; k < 20; k++) //while rows are checked  
		{
			if (arr1[i][k] == st[j])//
			{
				int u = k;
				int m = 0;
				for (m = 0; m < count; m++) {
					if (arr1[u][i] == st[m])
					{
						
							u++;

							f = true;
						
					}
					else if (m != count - 1 && f == false)
					{
						f = false;
					}
				}
				if (f == true && m==count-1) {
					ofstream fout("hint.txt");
					fout << "top to bottom" << endl;
					fout << "(" << i << ",";
					fout << k << ")";
					fout << "(" << i << ",";
					fout << u << ")";

					cout << "top to bottom" << endl;
					cout << "(" << i << ",";
					cout << k << ")";
					cout << "(" << i << ",";
					cout << u << ")";


					return 0;
				}

			}
		}

	}
	if (f == false) {
		ofstream fout("hint.txt");
		fout << "not found";
		return 0;

	}
}

int RighttoLeft(string st, char arr1[20][20], int axis[4]) {
	int count = 0;

	for (int i = 0; st[i] != '\0'; i++)
	{
		count++;
	}
	bool f = false;
	int j = 0;
	for (int i = 0; i < 20; i++) //checking all rows 
	{
		for (int k = 20; k >= 0; k--) //checking all columns
		{
			if (arr1[i][k] == st[j])//
			{
				int u = k;
				int m = 0;
				for (; m < count; m++) {
					if (arr1[i][u] == st[m])
					{
						if (u >= 0) {
							u--;

							f = true;
						}
					}
					else if(m!=count-1 &&f==false)
					{
						f = false;
					}
				}
				if (f == true &&m==count-1) {
					ofstream fout("hint.txt");
					fout << "right to left" << endl;
					fout << "(" << i << ",";
					fout << k << ")";
					fout << "(" << i << ",";
					fout << u << ")";

					cout << "right to left" << endl;
					cout << "(" << i << ",";
					cout << k << ")";
					cout << "(" << i << ",";
					cout << u << ")";


					return 0;
				}
				
			}
			}

		}
	if(f==false){
	ofstream fout("hint.txt");
	fout << "not found";
	return 0;

				}
	}

int Bottomtotop(string st, char arr1[20][20], int axis[4]) {
		int count = 0;

	for (int i = 0; st[i] != '\0'; i++)
	{
		count++;
	}
	
	bool f = false;
	int j = 0;
	for (int i = 0; i < 20; i++) //checking for all columns 
	{
		for (int k =19; k >=0; k--) //while rows are checked  
		{
			if (arr1[i][k] == st[j])//
			{
				int u = k;
				int m = 0;
				for (m = 0; m < count; m++) {
					if (arr1[i][u] == st[m])
					{
						
							u--;

							f = true;
						
					}
					else if (m != count - 1 && f == false)
					{
						f = false;
					}
				}
				if (f == true && m==count-1) {
					ofstream fout("hint.txt");
					fout << " bottom to top" << endl;
					fout << "(" << i << ",";
					fout << k << ")";
					fout << "(" << i << ",";
					fout << u << ")";

					cout << "bottom to top" << endl;
					cout << "(" << i << ",";
					cout << k << ")";
					cout << "(" << i << ",";
					cout << u << ")";


					return 0;
				}

			}
		}

	}
	if (f == false) {
		ofstream fout("hint.txt");
		fout << "not found";
		return 0;

	}
}

int DiagonallyfromTop_Left_to_Bottom_Right(string st, char arr1[20][20], int axis[4]) {
int count = 0;

for (int i = 0; st[i] != '\0'; i++)
{
	count++;
}

bool f = false;

int j = 0;
for (int i = 0; i < 20; i++) //checking all rows 
	
		if (arr1[i][i] == st[j])
		{
			int k = i;
			
			int m = 0;
			for (; m < count; m++) { //incrementing to check string 
				if (arr1[i][i] == st[m])
				{
					i++;

	
				f = true;

				}
				else if (m != count - 1 && f == false)
				{
					f = false;
				}

			}


			if (f == true && m == count - 1) {
				ofstream fout("hint.txt");
				fout << "DIAGONAL top left to bottom right" << endl;
				fout << "(" << k << ",";
				fout << k<< ")";
				fout << "(" << i << ",";
				fout << i << ")";
				cout << "(" << k << "," << k<< ")";
				cout << "(" << i << "," << i << ")";
				return 0;
			}
		}
		if (f == false) {
			ofstream fout("hint.txt");
			fout << "not found";
			return 0;
		}
	}


int diagonally_from_Bottom_Right_toTopLeft(string st, char arr1[20][20], int axis[4]) {
	int count = 0;

	for (int i = 0; st[i] != '\0'; i++)
	{
		count++;
	}

	bool f = false;
	
	int j = 0;
	for (int i = 19; i >=0; i--) //checking all rows 

		if (arr1[i][i] == st[j])
		{
			int k = i;

			int m = 0;
			for (; m < count; m++) { //incrementing to check string 
				if (arr1[i][i] == st[m])
				{
					i--;


					f = true;

				}
				else if (m != count - 1 && f == false)
				{
					f = false;
				}

			}


			if (f == true && m == count - 1) {
				ofstream fout("hint.txt");
				fout << "DIAGONAL right BOTTOM TO top leftT" << endl;
				fout << "(" << k << ",";
				fout << k << ")";
				fout << "(" << i << ",";
				fout << i << ")";
				cout << "(" << k << "," << k << ")";
				cout << "(" << i << "," << i << ")";
				return 0;
			}
		}
	if (f == false) {
		ofstream fout("hint.txt");
		fout << "not found";
		return 0;
	}
}

		
 int DiagonallyfromTopRight_toBottomLeft(string st, char arr1[20][20], int axis[4]) {
	 int count = 0;

	 for (int i = 0; st[i] != '\0'; i++)
	 {
		 count++;
	 }
	 bool f = false;
	 int j = 0;
	 for (int i = 0; i < 20; i++) //checking all rows 
		 for (int k = 19; k >=0; k--) {//checking allcolumns

			 if (arr1[i][k] == st[j])
			 {
				 int u = k;
				 int m = 0;
				 for (; m < count; m++) { //incrementing to check string 
					 if (arr1[i][k] == st[m])
					 {
						 k--;
						 i++;

						 f = true;

					 }
					 else if (m != count - 1 && f == false)
					 {
						 f = false;
					 }

				 }


				 if (f == true && m == count - 1) {
					 ofstream fout("hint.txt");
					 fout << "left to right" << endl;
					 fout << "(" << i << ",";
					 fout << k << ")";
					 fout << "(" << i << ",";
					 fout << u - 1 << ")";
					 cout << "(" << i << "," << k << ")";
					 cout << "(" << i << "," << u - 1 << ")";
					 return 0;
				 }
			 }
			 if (f == false) {
				 ofstream fout("hint.txt");
				 fout << "not found";
				 return 0;
			 }
		 }

 }
 int DiagonallyfromBottomLeftopRight(string st, char arr1[20][20], int axis[4]) {
	 int count = 0;

	 for (int i = 0; st[i] != '\0'; i++)
	 {
		 count++;
	 }
	 bool f = false;
	 int j = 0;
	 for (int i = 0; i < 20; i++) //checking all rows 
		 for (int k = 19; k >= 0; k--) {//checking allcolumns

			 if (arr1[k][i] == st[j])
			 {
				 int u = k;
				 int m = 0;
				 for (; m < count; m++) { //incrementing to check string 
					 if (arr1[k][i] == st[m])
					 {
						 k--;
						 i++;

						 f = true;

					 }
					 else if (m != count - 1 && f == false)
					 {
						 f = false;
					 }

				 }


				 if (f == true && m == count - 1) {
					 ofstream fout("hint.txt");
					 fout << "Diagonally from Bottom Left to top Right" << endl;
					 fout << "(" << i << ",";
					 fout << k << ")";
					 fout << "(" << i << ",";
					 fout << u - 1 << ")";
					 cout << "(" << i << "," << k << ")";
					 cout << "(" << i << "," << u - 1 << ")";
					 return 0;
				 }
			 }
			 if (f == false) {
				 ofstream fout("hint.txt");
				 fout << "not found";
				 return 0;
			 }
		 }

 }

int main() {

	ifstream fin("puzzle.txt");
	if (!fin) {
		cout << "file not found" << endl;

	}
	char arr1[20][20];
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			fin >> arr1[i][j];
		}
	}
	string st;
	cout << "enter the word to search" << endl;
	cin >> st;
	
	int axis[4];
	lefttoright(st, arr1, axis);
	RighttoLeft(st, arr1, axis);
	ToptoBottom(st, arr1, axis);
	DiagonallyfromTop_Left_to_Bottom_Right(st, arr1, axis);
	DiagonallyfromBottomLeftopRight(st, arr1, axis);
		diagonally_from_Bottom_Right_toTopLeft(st, arr1, axis);
		DiagonallyfromTopRight_toBottomLeft(st, arr1, axis);
}
//,, Diagonally
//from Top - Right to Bottom - Left, Diagonally from Bottom - Left to Top - Right)