#include<iostream>
using namespace std;

class timeduration{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		timeduration(int inputseconds)
{
	hours=inputseconds/3600;
	inputseconds-=hours*3600;
	minutes=inputseconds/60;
	inputseconds-=minutes*60;
	seconds=inputseconds;
}
    void display(){
    	cout<<"Time Duration:"<<hours<<"hours,"<<minutes<<"minutes,"<<seconds<<"seconds"<<endl;
	}
};

int main(){
	int inputseconds;
	cout<<"Enter the number of seconds;";
	cin>>inputseconds;
	timeduration td(inputseconds);
	td.display();
	return 0;
}
