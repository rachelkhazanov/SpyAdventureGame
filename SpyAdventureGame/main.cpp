#include <iostream>
#include <string>
using namespace std;


	string name;
	int instructor;
	int options;
	int excuse;
	int ask;
	int breakIn;
	int door;
	int profile;
	int otherDoor;
	int moralDilemma;

	int main() {
		

	cout << "What's your name?" << name << endl;
	cin >> name;
	cout << name << ", you have been chosen to go on a secret undercover mission, 'falcon.'" << endl;
	cout << "You and three other people must infiltrate the headquarters of the iD Tech camp in Cambridge, Massachusetts." << endl;
	cout << "Find the golden ticket before the black hats find it and use it to destroy the world." << endl;
	cout << "Start by choosing an undercover profile. " << endl;
	cout << name << ", you have 4 profiles to choose from" << endl;
	cout << " Press 1 to be a gardener \n Press 2 to be a one of the campers \n Press 3 to be an instructor \n Press 4 to be a photographer" << endl;
	cin >> profile;

	switch (profile) {
	case 1:
		cout << "You begin the mission, but gardeners do not get recieve access to te building. How would you like to break inside?" << endl;
		cout << "1. Break the window" << endl;
		cout << "2. Pick the lock" << endl;
		cout << "3. Knock on the door and see if someone answers" << endl;
		cout << "4. Scale the building and climb into the open window on the fourth floor" << endl;
			cin >> breakIn;
			switch (breakIn) {
			case 1:
				cout << "An alarm goes off and the police are there shortly; you are arrested and put into custody. The black hats beat you to te golden ticket and te world is destroyed." << endl;
				break;
			case 2:
				cout << "You make it inside and are faced with four doors. The first leads to an elevator, the second leads to a stairwell, and the third leads to an airduct. Which door would you like to go through, 1, 2, or 3?" << endl;
				cin >> door;
					switch (door) {
					case 1:
						cout << "You enter the elevator and press the first floor button. The elevator begins to move but then the cable breaks and you start to freefall. It hits the ground and you die. The black hats beat you to the golden ticket and they destroy the world with code." << endl;
						break;
					case 2:
						cout << "You begin to climb up the stairs but someone sees you and calls the police. You are arrested and put into custody. The black hats beat you to te golden ticket and te world is destroyed." << endl;
						break;
					case 3:
						cout << "You crawl through the airduct for a couple of minutes but then it starts to creak and it collapses! You break your arm, are rushed to the hospital, and the black hats find the golden ticket. They destroy the world before you even leave the hospital." << endl;
						break;
					default:
						cout << "You failed to make a valid decision so the black hats beat you to the ticket and destroyed the world." << endl;
					}
					break;
			case 3:
				cout << "You knock on the door and noone answers. You fall asleep outside of the building and the black hats beat you to the golden ticket. They destroy the world and you never wake up." << endl;
				break;
			case 4:
				cout << "You try to scale the building and get about halfway up before you fall to your death. The black hats get the golden ticket and destroy the world." << endl;
			default:
				cout << "You failed to make a valid decision so the black hats beat you to the ticket and destroyed the world." << endl;
			}
			break;
	case 2:
		cout << "You pretend to be one of the children but noone believes you because you're thirty. You are arrested on sight and are in police captivity when the black hats find the golden ticket. They destoy the world and you are locked away for the rest of your life." << endl;
		break;
	case 3:
		cout << "You are now inside the building as one of the instructors, but you still have to find the golden ticket." << endl;
		cout << "Now you have to decide if you want to \n 1) Look around the building \n 2) Ask some of the instructors about it" << endl;
		cin >> instructor;
			switch (instructor){
			case 1:
				cout << "You look around the building and come across a suspicious hallway when you see one of the instructors coming your way. The instructor asks you what you're doing." << endl;
				cout << "You say that you are \n 1) looking for the bathroom \n 2) looking at the wall \n 3) talking to someone on your phone " << endl;
				cin >> excuse;

				switch (excuse) {
				case 1:
					cout << "The instructer doesn't believe you and they call security, you are later then arrested. \n MISSION FAILED" << endl;
					break;
				case 2:
					cout << "That excuse was extremely stupid, the instructer then grabs a gun and shoots you in the head.\n YOU DIED" << endl;
					break;
				case 3:
					cout << "The instructer leaves." << endl;
					cout << name << ", you can either\n 1) go back to teaching \n 2) check out the hallway" << endl;
					cin >> options;
					switch (options) {
					case 1:
						cout << "You go back to teaching but then the black hats find the golden ticket and everyone dies from the explosion that they set off." << endl;
						break;
					case 2:
						cout << "You go down the hallway and at the end is a door, but it's locked." << endl;
						cout << "You can either \n 1) picklock it or \n 2) shoot at it and hope it opens" << endl;
						cin >> otherDoor;
						switch (otherDoor) {
						case 1:
							cout << "You picklock it and it opens. Inside is the golden ticket!" << endl;
							cout << "Now you can \n 1) destroy the world \n 2) save it" << endl;
							cin >> moralDilemma;
							switch (moralDilemma) {
							case 1:
								cout << "You kill everyone on earth and are officially a psychopath." << endl;
								break;
							case 2:
								cout << "You actually survived... didn't expect that... you are now a hero... but no one will know. " << endl;
								break;
							}
							break;
						case 2:
							cout << "You shoot at the door but the bullets ricochet off the door and hit you. You kill yourself. Congratulations." << endl;
							break;
						}
						break;
					}
					break;
				}
				break;
			case 2:
			cout << "You ask one of the instructors and they report you. You are then arrested and killed along with everyone else because the black hats find the golden ticket and destroy the world. \n MISSION FAILED" << endl;
			break;
			}
		break;
	case 4:
		cout << "You pretend to be the camp photographer, but when the parents realise a creepy person is taking pictures of the children without their permission they form a mob and lynch you. You die painfully, the black hats find the golden ticket, and the world is destroyed." << endl;
		break;

	default:
		cout << "You failed to make a valid decision so the black hats beat you to the ticket and destroyed the world." << endl;
		break;
	}
}

