#include <stdio.h>
#include <stdlib.h>

typedef struct idnode
{
	int type;
	int constant;
	double data;
	char * name;
}IDNODE;

typedef 	struct funnode
{
	int ret_type;
	char * name;
}FUNNODE;

typedef struct classnode
{
	char * type;
       	char * name;	
}CLASSNODE;

typedef struct ntnode
{
	

