#include <iostream>
#include <iomanip>



using namespace std;

// 注意，如果字符串中有\t 即tab这种，setw会对不齐

void demo_in_c_plus_plus_primer_page_1026()
{
	int i = -16;
	double d = 3.14159;
	// pad first column to use minimum of 12 positions in the output
	cout << "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n';
	// pad first column and left-justify all columns
	cout << left
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n'
		<< right; // restore normal justification
	// pad first column and right-justify all columns
	cout << right
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n';
	// pad first column but put the padding internal to the field
	cout << internal
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n';
	// pad first column, using # as the pad character
	cout << setfill('#')
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n'
		<< setfill(' '); // restore normal pad character


	/*

	i:          -16next col
	d:      3.14159next col
	i: -16         next col
	d: 3.14159     next col
	i:          -16next col
	d:      3.14159next col
	i: -         16next col
	d:      3.14159next col
	i: -#########16next col
	d: #####3.14159next col
	请按任意键继续. . .


	*/



	return;




}

int main()
{
	double a = 5.555;
	double b = 6.666;
	std::cout<<std::left<<std::setw(30)<<"12345678901234567890 IS "<<a<<std::endl;
	std::cout<<std::left<<std::setw(30)<<"123 IS "<<b<<std::endl;

	/*
	12345678901234567890 IS       5.555
	123 IS                        6.666
	*/

	demo_in_c_plus_plus_primer_page_1026();
	
	return 1;
}