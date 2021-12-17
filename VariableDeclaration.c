//#include<stdio.h> //standard Input output -> stdio.h

int main()
{
// Int
// char
// Float
// Double

	int yourAge;  // 0 to 9
	char yourInitial; // A to Z or any character  'A' or 'J' or 'S'
	float yourPercentage; // 73.5
	double yourMark; // 73.567843
	
	// Static values
	yourAge = 21;
	yourInitial = 'S';
	yourPercentage = 73.8;
	yourMark = 73.5674;
	
	// Dynamic
	scanf("\n %d", &yourAge);
	
	printf(" Print the Vaue : %d %c %f %f", yourAge, yourInitial, yourPercentage, yourMark); // , yourInitial, yourPercentage, yourMark
}
