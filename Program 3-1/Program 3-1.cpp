#include <iostream>

int main() {
 	int length, width, area;

   cout << "Tis program calculate area of a ";
   cout << "rectangle.\n";
   cout << "What is the length of the rectangle ?";
   cin >> length;
   cout << "What is the width of the rectangle ?";
   cin >> width;

   area = length * width;

   cout << "the area of the rectangle is" << area << ".\n";
   return 0;

}