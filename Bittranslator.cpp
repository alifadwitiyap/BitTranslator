#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <climits>
using namespace std;

void banner();
void bittochar();
void firstpage();
void chartobit();

union converter {
	int integer;
	char character;
};


int main(){
	int page;

	system("clear");
	banner();
	firstpage();
	while(true) {
		cout<<"choose your page : ";
		cin>>page;
		cout<<endl;
	switch (page) {

		
		case 1:
		bittochar();
		break;
		case 2:
		chartobit();
		break;
		default:
		cout<<"		{No page Please Repeat}"<<endl<<endl;
		break;
	}
	}

	        
}

void banner(){
	
cout<<"               ---8---  														"<<endl;                                                       
cout<<"eeeee  e  eeeee   8   eeeee  eeeee eeeee eeeee e     eeeee eeeee eeeee eeeee	"<<endl;  
cout<<"8   8  8    8     8e  8   8  8   8 8   8 8     8     8   8   8   8  88 8   8  "<<endl;
cout<<"8eee8e 8e   8e    88  8eee8e 8eee8 8e  8 8eeee 8e    8eee8   8e  8   8 8eee8e "<<endl;
cout<<"88   8 88   88    88  88   8 88  8 88  8    88 88    88  8   88  8   8 88   8 "<<endl;
cout<<"88eee8 88   88    88  88   8 88  8 88  8 8ee88 88eee 88  8   88  8eee8 88   8 "<<endl;
cout<<"							   {Project by 4Life}"<<endl;
                                                                 
                                                                 }


void firstpage(){

cout<<"    __________________   __________________"<<endl;
cout<<".-/|                 \\ /                  |\\-."<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||  1.bit -> char    |                   ||||"<<endl;
cout<<"|||| 		       |                   ||||"<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||  2.char -> bit    |                   ||||"<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||                   |                   ||||"<<endl;
cout<<"||||__________________ | __________________||||"<<endl;
cout<<"||/===================\\|/===================\\||"<<endl;
cout<<"`--------------------~___~-------------------''"<<endl;



}

void bittochar(){

converter input;

while (true){
system("clear");
banner();
cout<<endl;
cout<<"{0 for reset}"<<endl;
cout<<"masukkan angka yang ingin di converter "<<endl;
cout<<"input : ";
while(true){
	int i=0;
	int total=0;

	cin>>input.integer;
	 while (cin.fail())
    {
        cin.clear(); 
        cin.ignore(INT_MAX, '\n'); 
        cout << "\n   			-You can only enter numbers-					\n";
		cout<< "input:";
        cin >> input.integer;
    }
	

if (input.integer==0){
	break;
}
	
	while(input.integer>0){
		if (input.integer % 10 == 1 ){
			total+=pow(2,i);

		}
		i++;
		input.integer=input.integer/10;
	}
	input.integer=total;
	cout<<input.character;
}

}

}


void chartobit(){
	converter input;
while(true){
system("clear");
banner();
cout<<endl;
cout<<"{ 0 for reset }"<<endl;
cout<<"masukkan huruf yang ingin di converter "<<endl;
cout<<"huruf : ";
while(true){
cin>>input.character;
if (input.integer== 32638){
	
system("clear");
banner();
cout<<endl;
cout<<"{ ~ for reset }"<<endl;
cout<<"masukkan huruf yang ingin di converter "<<endl;
cout<<"huruf : ";
cin>>input.character;
}
cout << bitset< 7 >( input.integer ) << ' '<<endl; // direct output
	}
}



}