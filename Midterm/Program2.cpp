#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
	char name[50];
	char matric[11];
	char course[50];
};

void readStudent(fstream&, Student&);
void openOutBinFile(const char[], fstream&);
void writeStudent(fstream&, Student);

int main()
{
	Student studList[50]; // To hold a list of student records
	int count; // The number of students
	fstream inputFile;
	fstream outputFile1;
	fstream outputFile2;
	inputFile.open("students.txt", ios::in);

	//(a). Test whether opening the text file succeeded
	if (inputFile.fail()) { // 0.5m
		cout << "Unable to open the input file" << endl;
		return 0;
	}

	// (b). Read all the student records from the text file into the
	// array studList. Use the function readStudent to read a student
	// record.
	count = 0;
	while (!inputFile.eof()) { // 0.5m
		readStudent(inputFile, studList[50]); // 1m
		count = count + 1;
	}

	// (c). Using the function openBinFile, open two binary files for
	// writing, outputFile1 and outputFile2, respectively.
	openOutBinFile("output1.bin", outputFile1);
	openOutBinFile("output2.bin", outputFile2);

	// (d). Using a loop and the function writeStudent ,save the
	// records of studList into the first output file
	for (int count = 0; count < 50; count++)
	{		
		writeStudent(outputFile1, studList[count]);
	}

	// (e). Save the same list into the second output file by writing
	// all records at once.

	//outputFile2.write(outputFile1, );

	inputFile.close();
	outputFile1.close();
	outputFile2.close();

	return 0;
}

void readStudent(fstream &txtFile, Student &stud)
{
	txtFile.read(reinterpret_cast<char*>(&stud),
		sizeof(Student));
}

void openOutBinFile(const char fileName[], fstream &binFile)
{
	binFile.open(fileName, ios::in);
}

// The function writeStudent saves a student record into a binary file
void writeStudent(fstream &binFile, Student stud)
{
	binFile.write(reinterpret_cast<char*>(&stud),
		sizeof(Student));
}