Algoritmo Parte_I_B
	Leer a,b,c
	Si ((a>0) Y (c>0)) Entonces
		x <- ((2)*(rc(a))*(rc(c)));
		Si ((x=b) O (x=-b)) Entonces
			Escribir 'Es un trinomio cuadrado perfecto';
		SiNo
			Escribir 'No es un trinomio cuadrado perfecto';
		FinSi
	SiNo
		Escribir 'No es un trinomio cuadrado perfecto';
	FinSi
FinAlgoritmo
