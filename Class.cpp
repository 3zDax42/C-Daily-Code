#include <iostream>
#include <string>
using namespace std;
class NPC
{
private:
	string NPC_Name;
	string NPC_Location;
	int NPC_Rep; // reputaion with player
	int NPC_Age;
public:
	NPC(string n, string l, int r, int a) {
		NPC_Name = n;
		NPC_Location = l;
		NPC_Rep = r;
		NPC_Age = a;
	}
	void Introduce() {
		
		if (NPC_Rep >= 10) {
			cout << "Hello stranger I'm " << NPC_Name << "." << endl << "What are you doing here in the " << NPC_Location << "?" << endl;
		}
		else if (NPC_Rep == 0) {
			cout << "Hello? I'm " << NPC_Name << "." << endl << "What are you doing here in the " << NPC_Location << "?" << endl;
		}
		else {
			cout << "My names " << NPC_Name << "." << endl << "I didn't come here to the " << NPC_Location << " to be bothered by you." << endl;
		}
		if (NPC_Age <= 5) {
			cout << "You curious about how long I've been here? Well I've been here for " << NPC_Age << " years now." << endl;
		}
		else {
			cout << "..I've been here for " << NPC_Age << " years now. Though such information will not help you survive here." << endl;
		}
		if (NPC_Rep >= 10) {
			cout << "You know what, I like you. Lets be frinds." << endl << endl;
		}
		else if (NPC_Rep == 0) {
			cout << "Why don't you go on your way now that you've goten all you could out of me." << endl << endl;
		}
		else {
			cout << "Stop bothering me and go away." << endl << endl;
		}

	}
};


int main() {

	NPC annie("Annie", "Lounge", 10, 3);
	annie.Introduce();
	NPC anabell("Anabell", "Lounge", -10, 7);
	anabell.Introduce();
	NPC aaron("Aaron", "Lounge", 0, 5);
	aaron.Introduce();

}
