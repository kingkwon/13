#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int 	ID			;
	char	name[20]	;
	double	grade		;
};
void main(void) {
	
	struct student s = { 123, "KIM", 3.5};
	
	s.ID = 123456		;
	s.name[0] = 'J'		;
	s.name[1] = 'u'		;
	s.name[2] = 'y'		;
	s.name[3] = 'e'		;
	s.name[4] = 'o'		;
	s.name[5] = 'p'		;
	s.grade = 4.2		;
	
	printf("ID : %d\n", s.ID)		;
	printf("name : %s\n", s.name)	;
	printf("grade : %f\n", s.grade)	;

}
