	//**********Librerias
  	#include <stdio.h>
	#include <string.h>
	//********definicion de estructura
	typedef struct student{ 
	char name[20];
	char id[10];
	char status[1];
	char grade;
	char subject;
	char marks;
	}alumnos;
	//********estructuras definidas
	void add(alumnos * face);
	void search(alumnos * face);
	void display(alumnos * face);
	void deletes(alumnos * face);
	//*********Variables
	int main(){
	int opc=10;	
	alumnos Registro[60];
	alumnos * face;
	alumnos * lt;
	lt=&Registro[0];
	face=&Registro[0];
	face->name[0]='z';
	//********Menu de Inicio opciones
	//while es para ejecutar un bucle en conjunto con instrucciones hasta que se cumpla una condición determinada.
	while (opc!=0){
	printf("-------------------------\n");
	printf("--------- MENU ----------\n");
	printf("-------------------------\n");
	printf("[1] Add student\n");
	printf("[2] Search student\n");
	printf("[3] Display student\n");
	printf("[4] Delete student\n");
	printf("[0] Exit\n");
	scanf("%d",&opc);
	//********switch de opciones para el menu de inicio
	switch(opc){
 	//********Case inico opciones
	case 1:{
	    while(lt->name[0]!='z')	{lt=lt+1;}
	       add(lt);
	      }break;	
	case 2:{
       search(face);
       }break;
	case 3:{
       display(face);
       }break;
	case 4:{
	 deletes(face);
	}break;	}};return 0;}
	//********estructuras y cuerpo del programa de addstudent
	void add(alumnos * face){
		int opc=9;
			while (opc!=0){
				system("cls");
		printf("1--------Add Student 1 - EXIT 0--------\n");
	scanf("%d",&opc);

	if (opc==1){
		system("cls");
		printf("-----------------------\n");
		printf("Ingrese Estudiante Nombre\n");
	printf("Name:\n");
		getchar();//devuelven el carácter leído.
	gets(face->name);
		printf("ID:\n");
	gets(face->id);
		printf("Ingrese Asignatura\n");	
		face=face+1;
	face->name[0]='z';}};}
	//*******estructura y cuerpo del programa displaystudent
	void display(alumnos * face){
		while(face->name[0]!='z'){
		if(face->status[0]!='B'){
			printf("-------------------- \n");
	printf("Name: %s\n",face->name);
		printf("ID: %s \n",face->id);}
		face=face+1;
	};}
	//*******estructura y cuerpo del programa en searchstudent
	void search(alumnos * face){
	char name[20];
	int val;
	printf("Buscar Estudiante \n");	
	getchar();//devuelven el carácter leído.
	gets(name);
	while(face->name[0]!='z'){
		val=strcmp(face->name,name);
		if (val==0){
			 if(face->status[0]!='B'){
	  printf("--------------------- \n");
	  printf("Name \n%s\n",face->name);
	  printf("ID \n%s\n",face->id);}}
	face=face+1;};}
	//*******estructura y cuerpo del programa en deletes
	void deletes(alumnos * face){
	char name[10];
	int val;
	printf("Eliminar Estudiante \n");	
	getchar();//devuelven el carácter leído.
	gets(name);
	while(face->name[0]!='z'){
		val=strcmp(face->name,name);
		if (val==0){
	     face->status[0]='B';
	     printf("Eliminado con Exito");}
	face=face+1;};}
