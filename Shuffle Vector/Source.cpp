//////////////
//Anna Tran
//CS 172 Sec 1
//12.20
///////////////

#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

template<typename T>
void shuffle(vector <T> &v);
int main()
{
	//Enter user input
	vector<int>v;
	cout << "Enter 10 values" << endl;
	int input;
	cin >> input;
	while (v.size()<11)
	{
		v.push_back(input);
		
	}
	
	 shuffle(v);
	
	 for (int i = 0; i < v.size; i++)
		cout << "Here is a random value from the vector: " << v[i] << endl;

}

template<typename T>
void shuffle(vector <T> &v) 
{
//Go through vector to swap values from vector into temporary vector in random order
	srand(time(0));
	for (int i = 0; i < v.size; i++)
		{
			int index = rand() % v.size();
			T temp = v[index];
			v[index] = v[i];
			v[i] = temp;
			
		}
}

