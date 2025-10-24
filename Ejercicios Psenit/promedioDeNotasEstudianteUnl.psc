Algoritmo promedioDeNotasEstudianteUnl
	// Declaración de variables
	Definir acd1, acd2, ape1, ape2, aa1, aa2, es1, promedio Como Real;
	Definir acdEquivalente, apeEquivalente, aaEquivalente Como Real;
	// Datos de entrada
	Escribir 'Ingrese nota 1 y nota 2 de las actividades de Aprendizaje con el Docente';
	Leer acd1, acd2;
	Escribir 'Ingrese nota 1 y nota 2 de las actividades de Aprendizaje Práctico Experimental';
	Leer ape1, ape2;
	Escribir 'Ingrese nota 1 y nota 2 de las actividades de Aprendizaje Autónomo';
	Leer aa1, aa2;
	Escribir 'Ingrese la nota de la Evaluación Sumativa';
	Leer es1;
	// Proceso
	acdEquivalente <- ((acd1+acd2)/2)*0.2;
	apeEquivalente <- ((ape1+ape2)/2)*0.25;
	aaEquivalente <- ((aa1+aa2)/2)*0.2;
	promedio <- acdEquivalente+apeEquivalente+aaEquivalente+(es1*0.35);
	//Salida
	Si promedio>=7 Entonces
		Escribir 'El alumno aprueba la Unidad';
	SiNo
		Escribir 'El alumno no aprueba la Unidad';
	FinSi
	Escribir 'Su promedio es: ', promedio
FinAlgoritmo