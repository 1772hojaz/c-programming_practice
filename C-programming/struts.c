#include <stdio.h>

typedef struct{
	char name[25];
	int id;
	char group;
	float marks[25];
	double intrest;
}Student;

int main()
{
	Student st1 = {"samle", 1, 'a', 92.1};
	printf("%s\n", st1.name);

	return 0;
}
