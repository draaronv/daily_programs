#include <iostream>
#include <string>
using namespace std;
class ParkingSystem {
public:
int big;
int medium;
int small;
    ParkingSystem(int big, int medium, int small) {
	    big=big;
	    medium=medium;
	    small=small;
    }
    
    bool addCar(int carType) 
    {
	    if(carType==3 && small!=0)
	    {
		    small--;
		    return true;
	    }
	    else if(carType==2 && medium!=0)
	    {
		    medium--;
		    return true;
	    }
	    else if(carType==1 && big!=0)
	    {
		    big--;
		    return true;
	    }
	    else
	    {
		    return false;
	    }
    }
};

int main()
{
	ParkingSystem g(1,1,0);
	cout<<g.addCar(1);
	cout<<g.addCar(2);
	cout<<g.addCar(3);
	cout<<g.addCar(1)<<endl;
	return 0;
}
