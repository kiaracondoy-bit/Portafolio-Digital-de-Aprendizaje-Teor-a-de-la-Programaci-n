Algoritmo e_porcentajeMujeresYHombres
	//Declaración de Variables
	Definir hombres, mujeres Como Real
	
	//Datos de entrada
	Escribir '¿Cuántos hombres hay?'
	Leer hombres
	Escribir '¿Cuántas mujeres hay?'
	Leer mujeres
	
	//Proceso 
	total=hombres+mujeres
	porcentajeHombres= (hombres*100)/total
	porcentajeMujeres= (mujeres*100)/total
	
	//Salida
	Escribir 'El porcentaje de hombres es de: ', porcentajeHombres
	Escribir 'El porcentaje de mujeres es de: ', porcentajeMujeres
FinAlgoritmo
