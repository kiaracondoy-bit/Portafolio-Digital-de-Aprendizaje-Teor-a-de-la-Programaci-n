Algoritmo PresupuestoPorClienteDeUnAlmacen
	//Declaraci�n de variables
	Definir m2 Como Entero;
	Definir precio, costo Como Real;
	
	//Datos de entrada
	Escribir 'Ingrese cu�ntos metros cuadrados ser�n pintados.';
	Leer m2;
	
	Escribir 'Ingrese el precio por metro cuadrado';
	Leer precio;
	
	//Proceso 
	costo=m2*precio;
	
	//Salida
	Escribir 'El costo por el trabajo es: ', costo;	
FinAlgoritmo
