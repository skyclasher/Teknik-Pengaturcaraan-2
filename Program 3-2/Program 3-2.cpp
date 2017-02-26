#include <iostream>

int main() {
 	int length, width, area;

   cout << "Tis program calculate area of a ";
   cout << "rectangle.\n";
   cout << "What is the length and width of the rectangle ?";
   cout << "separated by space.\n";
   cin >> length >> width;

   area = length * width;

   cout << The area of the rectangle is" << area << ".\n";
   return 0;

}
