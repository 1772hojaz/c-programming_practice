#include <stdio.h>
#include <string.h>
struct person{
	char name[10];
	int age;
	char fav_color[10];
};
int main(){
	struct person man;
	strcpy(man.name,"John");
	man.age = 25;
	strcpy(man.fav_color,"blue");
	
	struct person woman;
	strcpy(woman.name,"mitchell");
	woman.age = 20;
	strcpy(woman.fav_color,"purple");
	printf("%s is %d years old  and %s is the favourate color", man.name, man.age, man.fav_color);
	printf("%s is %d years old and her favorite color is %s\n", woman.name, woman.age, woman.fav_color);
	return 0;
}

