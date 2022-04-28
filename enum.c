#include<stdio.h>
int main()
{
	enum day_of {sun,mon,tue=0,wed,thu};
	printf("%d",thu);// It will print 2 becuse of enum start with 0
	return 0;
}
