#include <iostream>
#include <fstream>
#include <Windows.h>
//#include <cstdlib>
//#include <ctime>
using namespace std;
//
//int main() {
//	srand(time(NULL));
//
//	int NumNotes;
//	cout << "May I ask for a number?" << endl;
//	cin >> NumNotes;
//
//	ofstream outfile("notes.txt");
//
//	if (!outfile) {
//		cout << "Error: Could not create notes.txt" << endl;
//		return 1;
//	}
//
//	for (int i = 0; i <= NumNotes; i++) {
//		int freq = rand() % 100;
//		int dur = rand() % 100;
//		outfile << freq << " " << dur << endl;
//	}
//
//	cout << "notes.txt has been created with " << NumNotes << " random notes." << endl;
//	outfile.close();
//
//	return 0;
//}

int main() {
	ifstream infile("notes.txt");

	if (!infile) {
		cout << "Error: Could not open notes.txt" << endl;
		return 1;
	}

	int freq, dur;
	while (infile >> freq >> dur) {
		cout << "Playing: " << freq << " Hz for " << dur << " ms" << endl;
		Beep(freq, dur);
	}

	infile.close();
	return 0;
}
