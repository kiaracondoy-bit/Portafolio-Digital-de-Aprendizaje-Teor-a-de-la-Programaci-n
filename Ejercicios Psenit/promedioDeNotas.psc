Algoritmo promedioDeNotas
	//Declaración de Variables
	Definir nota1, nota2, nota3 Como Real;
	Definir promedio Como Real;
	Definir PON1, PON2, PON3 Como Real
	
	PON1=0.3
	PON2=0.4
	PON3=0.3
	
	//Datos de entrada
	Escribir 'Ingrese la nota 1';
	Leer nota1;
	
	Escribir 'Ingrese la nota 2';
	Leer nota2;
	
	Escribir 'Ingrese la nota 3';
	Leer nota3;
	
	//Proceso
	promedio = (nota1*PON1)+(nota2*PON2)+(nota3*PON3);
	
	//Salida
	Escribir 'El promedio total es de: ', promedio;
	
FinAlgoritmo
