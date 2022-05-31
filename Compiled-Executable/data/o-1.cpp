#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
int menuinput, input1, input2, answer, back, answer2;
void minus_sys() {
	cout << "-----minus-----\nEnter First Number: \n";
	cin >> input1;
	cout << "Enter Second Number: \n";
	cin >> input2;
	answer = input1 - input2;
	cout << "Answer: " << answer;
	cout << "\n(1) To Go To Main Menu.";
	cin >> back;
	system("cls");
}
void addtion() {
	cout << "-----addtion-----\nEnter First Number: \n";
	cin >> input1;
	cout << "Enter Second Number: \n";
	cin >> input2;
	answer = input1 + input2;
	cout << "Answer: " << answer;
	cout << "\n(1) To Go To Main Menu.";
	cin >> back;
	system("cls");
}
void multiple() {
	cout << "-----multiple-----\nEnter First Number: \n";
	cin >> input1;
	cout << "Enter Second Number: \n";
	cin >> input2;
	answer = input1 * input2;
	cout << "Answer: " << answer;
	cout << "\n(1) To Go To Main Menu.";
	cin >> back;
}
void devide() {
	cout << "-----devide-----\nEnter First Number: \n";
	cin >> input1;
	cout << "Enter Second Number: \n";
	cin >> input2;
	answer = input1 / input2;
	answer2 = input1 % input2;
	cout << "Devide: " << answer << " Remain: " << answer2;
	cout << "\n(1) To Go To Main Menu.";
	cin >> back;
	system("cls");
}
void systemreset() {
	for (int load = 0; load <= 100;load++) {
		if (load<=10) {
			menuinput = 100;
		}
		if (load<=20) {
			input1 = 1;
			input2 = 1;
		}
		if (load <= 30) {
			answer = 0;
		}
		if (load <= 40) {
			answer2 = 0;
		}
		if (load <= 50) {
			back = 0;
		}
		cout << "Reseting System...";
		cout << "\n" << load << "% Completed!";
		system("cls");
		Sleep(10);
	}
	system("cls");
	cout << "Reset Complete\n";
	Beep(300,600)
	Sleep(1500);
	system("cls");
}
int main(){
	for (int k=10;k<=k;k++){
	
	cout<<"\n-----Main Menu-----\n";
	cout<<" (1) For + \n (2) For - \n (3) For * \n (4) For / \n (0) For Exit \n (91) For Reset ALL\n Waiting For Input...\n";
	cin>>menuinput;
	if(menuinput<=0){
		cout<<"-----Calculator 2.4---- \n\n";
		Beep(600,400);
		Sleep(3000);
		break;
		
	}
	else if(menuinput<=1){
		addtion();
	}
		else if(menuinput<=2){
		minus_sys();
	}
		else if(menuinput<=3){
		multiple();
	}
		else if(menuinput<=4){
		devide();
	}
		else if(menuinput<=91){
		systemreset();
	}
}
getch();
}