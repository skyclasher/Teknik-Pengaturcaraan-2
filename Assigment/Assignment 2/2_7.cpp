#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int floor, rooms, occupiedRooms;
	double ttlRooms = 0;
	double ttlOccupiedRooms = 0;
	double occupiedRoomsPercent;
	
	cout << "How many floor does the hotel have ? : ";
	cin >> floor;
	cout << endl;
	
	for(int x = 1; x <= floor; x++){
		cout << "Floor " << x << endl;
		cout << "_________" << endl;
		cout << "Total rooms in the floor : ";
		cin >> rooms;
		ttlRooms += rooms;
		cout << "Total occupied rooms in the floor : ";
		cin >> occupiedRooms;
		ttlOccupiedRooms += occupiedRooms;
		cout << "_______________________________________" << endl << endl << endl;
	}
	
	cout << "Total rooms in the hotel : " << ttlRooms << endl;
	cout << "Total occupied rooms in the hotel : " << ttlOccupiedRooms << endl;
	cout << "Total unoccupied rooms in the hotel : " << ttlRooms - ttlOccupiedRooms << endl << endl;
	
	occupiedRoomsPercent = (ttlOccupiedRooms * 100) / ttlRooms;
	cout << fixed << showpoint << setprecision(2);
	cout << "Percentage of occupied rooms in the hotel : " << occupiedRoomsPercent  << "  %" << endl << endl;
	
   	return 0;
}