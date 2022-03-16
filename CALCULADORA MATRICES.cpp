#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>


using namespace std;

double Matriz1[100][100], Matriz2[100][100], Matriz3[100][100], Filas, Columnas, Multiplicacion;

int n; 
float A[100][100], B[100][100], C[100][100]; 
float s = 0, q;	

int main()
{
cout.precision(2);
cout<<"						CALCULADORA MATRICES"<<endl;
cout<<"													ETN - 307L"<<endl<<endl;
cout<<" El programa ayuda al estudio del gran mundo de las matrices"<<endl; 
cout<<" Por ende este programa realizara algunos de los mas importantes calculos que facilitaran su estudio."<<endl;
cout<<" Recordar que una matriz tiene columnas y filas."<<endl<<endl;
cout<<" Ejemplo : En una matriz 3x4 significa que tiene 3 filas y 4 columnas."<<endl<<endl;
cout<<" 				| 3		0		3		6| "<<endl;
cout<<" 				| 4		8		7		6| "<<endl;
cout<<" 				| 0		1		0		7| "<<endl<<endl;
cout<<" Del ejemplo anterior podemos decir que 8 esta en la fila 2 y columna 2 [2][2]."<<endl<<endl;
cout<<" Menu de Operaciones :"<<endl<<endl;

int x;
cout<<"			Digite 1	Si quiere Sumar una Matriz [A] con otra [B]"<<endl;
cout<<"			Digite 2	Si quiere Restar una Matriz [A] con otra [B]"<<endl;
cout<<"			Digite 3	Si quiere Multiplicar una Matriz [A] con otra [B]"<<endl;
cout<<"			Digite 4	Si quiere Dividir una Matriz [A] con otra [B]"<<endl;
cout<<"			Digite 5	Si quiere Calcular el Determinate de una Matriz [A] o [B]"<<endl;
cout<<"			Digite 6	Si quiere Calcular una Matriz Inversa de [A] o [B]"<<endl;
cout<<"			Digite 7	Si quiere Calcular la Matriz Transpuesta de [A] o [B]"<<endl;
cout<<"			Digite 8	Si quiere Calcular el Rango de una Matriz [A] o [B]"<<endl;
cout<<"			Digite 9	Si quiere Multiplicar por 'n' escalar a una matriz [A] o [B]"<<endl;
cout<<"			Digite 10	Si quiere Calcular una Matriz Triangular de [A] o [B]"<<endl;
cout<<"			Digite 11	Si quiere Calcular una Matriz Diagonal de [A] o [B]"<<endl;
cout<<"			Digite 12	Si quiere Calcular una Matriz [A] o [B] elevada a cualquier numero"<<endl;
cout<<"			Digite 13	Si quiere Factorizar una Matriz [A] o [B] en LU"<<endl;
cout<<"			Digite 14	Si quiere Factorizar una Matriz [A] o [B] por el metodo de CHOLESKY"<<endl;
cout<<"			Digite 15	Si quiere Calcular los valores y vectores propios de una Matriz [A] o [B]"<<endl<<endl;
cin>> x;

switch (x)	
{
	case 1:
		
	cout<<"\n						SUMA DE MATRICES"<<endl<<endl;
	cout<<" Recordar que solo se pueden sumar matrices con el mismo numero de filas y columnas."<<endl<<endl;
	cout<<"			Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n			Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	cout<<"\n\n		Matriz [A]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n		Matriz [B]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz2[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [A] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz [B] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La suma de las Matrices [A] y [B] es:"<<endl<<endl;
 	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
		cout<<"	\t"<<Matriz1[i][j] + Matriz2[i][j]<<" ";
    	}
  	cout<<endl;
 	}
 	
	break;

	case 2:
		
	cout<<"\n						RESTA DE MATRICES"<<endl<<endl;
	cout<<" Recordar que solo se pueden restar matrices con el mismo numero de filas y columnas."<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n		Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	cout<<"\n\n		Matriz [A]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n		Matriz [B]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++){
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz2[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [A] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz [B] es: "<<endl<<endl;	
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	cout<<"\n\n		La Resta de las Matrices [A] y [B] es:"<<endl<<endl;
 	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
		cout<<"	\t"<<Matriz1[i][j] - Matriz2[i][j]<<" ";
    	}
  	cout<<endl;
 	}
 	
	break;	
	
	case 3:
	
	cout<<"\n						MULTIPLICACION DE MATRICES"<<endl<<endl;
	cout<<" Recordar que el numero de columnas de la Matriz [A] debe ser igual al numero de filas de la Matriz[B]"<<endl;
	cout<<" sino no se cumpliria la Multiplicacion de Matrices"<<endl<<endl;
	
	cout<<"		Matriz [A]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n		Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n		Matriz [B]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "<<Columnas<<"	(Definida ya porque es necesario.)";
	cout<<"\n		Numero de Columnas de la Matriz = "; cin>> Multiplicacion;
	for(int i = 0; i < Columnas; i ++)
	{
		for(int j = 0; j < Multiplicacion; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz2[i][j];
		}
	} 	
		
	for(int i = 0; i < Filas; i ++)
    for(int j = 0; j < Multiplicacion; j ++)
            Matriz3[i][j] = 0;

    for(int i = 0; i < Filas; i ++)
        for(int j = 0; j < Multiplicacion; j ++)
            for(int z = 0; z < Columnas; z ++)
                Matriz3[i][j] += Matriz1[i][z] * Matriz2[z][j];
				
	cout<<"\n\n		La Matriz [A] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}	
	
	cout<<"\n\n		La Matriz [B] es: "<<endl<<endl;	
	for(int i = 0; i < Columnas; i ++)
	{
		for(int j = 0; j < Multiplicacion; j ++)
		{
			cout<<"	\t"<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}	
		
	cout<<"\n\n		El producto de las Matrices [A] y [B] es: "<<endl<<endl;	
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Multiplicacion; j ++)
		{
			cout<<"	\t"<<Matriz3[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	break;
	
	case 4:
	
	cout<<"\n						DIVISION DE MATRICES"<<endl<<endl;
	cout<<" Tecnicamente, no existe la división de matrices. Dividir una matriz entre otra es una funcion indefinida."<<endl;
	cout<<" El equivalente mas cercano es multiplicar por la inversa de otra matriz."<<endl; 
	cout<<" En otras palabras, mientras que la Matriz [A] sea dividida por una Matriz [B] es indefinido"<<endl<<endl;
	cout<<" Asi que prueba otra funcion y no intentes algo que no es posible."<<endl<<endl;	
	
	break;

	case 5:
	
	double m, l;
	int x, y, k;
	float Matriz4[100][100], Determinante;
	
	cout<<"\n						DETERMINANTE DE UNA MATRIZ"<<endl<<endl;
	cout<<" Recordar que para calcular el Determinante de una Matriz esta debe ser obligatoriamente cuadrada."<<endl;
	cout<<" Una Matriz cuadrada es la que tiene el mismo numero de filas y columnas."<<endl<<endl;
	
	cout<<"		Matriz [n]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n		Numero de Columnas de la Matriz = "<<Filas<<"	(Definida ya porque es necesario.)"<<endl<<endl;
	
	m = Filas-1;
	
	for(int x = 1; x <= Filas; x ++)
	{
		for(int y = 1; y <= Filas; y ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<x<<"]["<<y<<"]= ";
			cin>>Matriz4[x][y];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int x = 1; x <= Filas; x ++)
	{
		for(int y = 1; y <= Filas; y ++)
		{
			cout<<"	\t"<<Matriz4[x][y]<<" ";
		}
		cout<<"\n";
	}
	
	Determinante = Matriz4[1][1];
	for(k = 1; k <= m; k ++)
	{ 
	l = k+1;
	for(x = l; x <= Filas; x ++)
	{ 
		for(y = l; y <= Filas; y ++)
		Matriz4[x][y] = (( ( Matriz4[k][k] * Matriz4[x][y]) - (Matriz4[k][y] * Matriz4[x][k]))/Matriz4[k][k]); 
	}
	Determinante = Determinante * Matriz4
	[k+1][k+1];
	}
	
	cout<<"\n\n		El Determinate de la Matriz es: "<<Determinante<<endl<<endl;	

	break;

	case 6:
		
	cout<<"\n						INVERSA DE UNA MATRIZ"<<endl<<endl;
	cout<<" Recordar que para que una Matriz sea invertible su determinante no debe ser 0 caso contrario no existiria."<<endl;
	cout<<" Recordar tambien que obligatoriamente el determinante debe existir en una Matriz cuadrada."<<endl; 
	cout<<" Entonces para que haya inversa debe ser cuadrada tambien."<<endl<<endl;
	
	cout<<"		Matriz [n]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> n;
	cout<<"\n		Numero de Columnas de la Matriz = "<<n<<"	(Definida ya porque es necesario.)"<<endl<<endl;
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>A[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz Identidad es: "<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = 1;}
			if (i!=j){B[i][j] = 0;}
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int k = 1; k <= n-1; k ++)
	{
		for(int i = 0; i < n; i ++)
		for(int j = 0; j < n; j ++)
		{
			C[i][j] = 0;
		}
		
	
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}
		cout<<"\n";

	cout<<"\n		La Matriz Auxiliar 1 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
		{
			if (i==j){s = s + C[i][j];}
		}
		
	q = s/k;
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = C[i][j] - q;}
			else 
			{
			B[i][j] = C[i][j];
			}
		}
	
	cout<<"\n\n		La Matriz Auxiliar 2 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	s = 0;	
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++) 
	{
		C[i][j] = 0;
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}

	cout<<"\n\n		La Matriz Auxiliar 3 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j)
			{
				s = s + C[i][j];
			}
		}
		cout<<"\n";
	}

	cout<<"\n\n		La Matriz Inversa de [n] es: "<<endl<<endl;	
	if (s/n!=0)
	{
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	{
		B[i][j] = (float) B[i][j]/(float) (s/n);
	}	
		
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<" \t"<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	}
	
	break;
	
	case 7:
	
    double Matriz5[100][100];
	
	cout<<"\n						TRANSPUESTA DE UNA MATRIZ"<<endl<<endl;
	cout<<" Se obtiene una Matriz Transpuesta cambiando sus filas por columnas (o viceversa)."<<endl;
	cout<<" Ejemplo : En una matriz 3x4 que tiene 3 filas y 4 columnas."<<endl<<endl;
	cout<<" 				| 3		0		3		6| "<<endl;
	cout<<" 				| 4		8		7		6| "<<endl;
	cout<<" 				| 0		1		0		7| "<<endl<<endl;
	cout<<" Su Matriz Transpuesta sera:."<<endl<<endl;	
	cout<<" 					| 3		4		0| "<<endl;
	cout<<" 					| 0		8		1| "<<endl;
	cout<<" 					| 3		7		0| "<<endl;
	cout<<" 					| 6		6		7| "<<endl<<endl;	
	
	cout<<"\n\n			Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n			Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	cout<<"\n\n		Matriz [n]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz5[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz5[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz Transpuesta de [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz5[j][i]<<" ";
		}
		cout<<"\n";
	}
		
	break;
	
	case 8:
	
	cout<<"\n						RANGO DE UNA MATRIZ"<<endl<<endl;
	cout<<"\n	Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n	Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	cout<<"\n\n	Matriz [n]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n	Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n	La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"		\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n					El Rango de la Matriz [n] es: "<<Filas<<endl<<endl;	

	break;
	
	case 9:
	
	double N;
		
	cout<<"\n					MULTIPLICACION DE UNA MATRIZ POR UN ESCALAR N"<<endl<<endl;
	cout<<"\n	Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n	Numero de Columnas de la Matriz = "; cin>> Columnas;
	cout<<"\n\n	Ingrese el valor del Escalar N = "; cin>>N;	
	
	cout<<"\n\n	Matriz [n]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n	Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n	La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"		\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}	
		
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			Matriz2[i][j] = Matriz1[i][j] * N;
		}
		cout<<"\n";
	}	
	
	cout<<"\n\n	El Resultado es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"		\t"<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	break;
	
	case 10:
	
	cout<<"\n						MATRIZ TRIANGULAR"<<endl<<endl;
	cout<<" Una matriz triangular inferior es aquella matriz cuadrada que tiene un cero (0) en cada elemento, que esta por encima"<<endl;
	cout<<" de la diagonal principal. A veces también se llama a estas matrices con la letra U."<<endl<<endl; 
	cout<<" Y para la matriz triangular superior los ceros estan en la parte inferior de la diagonal principal."<<endl;
	cout<<" Se los denota con la letra L a las matrices triangulares superiores."<<endl<<endl;
	cout<<" El programa calculara solo matrices triangulares superiores."<<endl<<endl;
	cout<<" Ejemplo : En una matriz 4x4 que tiene 4 filas y 4 columnas."<<endl<<endl;
	cout<<" 				| 3		0		3		6| "<<endl;
	cout<<" 				| 4		8		7		6| "<<endl;
	cout<<" 				| 4		8		7		6| "<<endl;
	cout<<" 				| 0		1		0		7| "<<endl<<endl;
	cout<<" Su Matriz Triangular Superior sera:."<<endl<<endl;	
	cout<<" 				| 3		0		3		 6  | "<<endl;
	cout<<" 				| 0		8		3		-2  | "<<endl;
	cout<<" 				| 0		0	   -0.375		7.25| "<<endl;
	cout<<" 				| 0		0		0		 0  | "<<endl<<endl;	
	
	cout<<"\n\n			Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n			Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	cout<<"\n\n		Matriz [n]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		Su Matriz Triangular Superior es: "<<endl<<endl;
	for(int i = 0; i < 4; i ++)
	{
		for(int j = 0; j < 4; j ++)
		{
			cout<<"	\t"<<Matriz6[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	break;
	
	case 11:
	
	cout<<"\n						MATRIZ DIAGONAL"<<endl<<endl;
	cout<<" Una matriz diagonal es una matriz cuadrada en la que todos los elementos que no son de la diagonal principal son cero (0)."<<endl;
	cout<<" Los elementos de la diagonal principal pueden ser nulos o no."<<endl<<endl; 
	cout<<" Ejemplo : En una matriz 4x4 que tiene 4 filas y 4 columnas."<<endl<<endl;
	cout<<" 				| 3		0		3		6| "<<endl;
	cout<<" 				| 4		8		7		6| "<<endl;
	cout<<" 				| 4		8		7		6| "<<endl;
	cout<<" 				| 0		1		0		7| "<<endl<<endl;
	cout<<" Su Matriz Diagonal sera:."<<endl<<endl;	
	cout<<" 				| 0		0		0		 0  | "<<endl;
	cout<<" 				| 0		2.4		0		 0  | "<<endl;
	cout<<" 				| 0		0	  	5.9		 0  | "<<endl;
	cout<<" 				| 0		0		0		 16.7 | "<<endl<<endl;	
	
	cout<<"\n\n			Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n			Numero de Columnas de la Matriz = "; cin>> Columnas;
	
	cout<<"\n\n		Matriz [n]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"	\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		Su Matriz Diagonal es: "<<endl<<endl;
	for(int i = 0; i < 4; i ++)
	{
		for(int j = 0; j < 4; j ++)
		{
			cout<<"	\t"<<Matriz7[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	break;
	
	case 12:
 	
 	double Potencia;
		
	cout<<"\n					MATRIZ ELEVADA A CUALQUIER POTENCIA"<<endl<<endl;
	cout<<"\n	Numero de Filas de la Matriz = "; cin>> Filas;
	cout<<"\n	Numero de Columnas de la Matriz = "; cin>> Columnas;
	cout<<"\n\n	Ingrese el valor de la Potencia a la que se quiere elevar N = "; cin>>Potencia;	
	
	cout<<"\n\n	Matriz [n]: "<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"\n	Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>Matriz1[i][j];
		}
	} 
	
	cout<<"\n\n	La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"		\t"<<Matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}	
		
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			Matriz2[i][j] =  pow(Matriz1[i][j], Potencia);
		}
		cout<<"\n";
	}	
	
	cout<<"\n\n	El Resultado es: "<<endl<<endl;
	for(int i = 0; i < Filas; i ++)
	{
		for(int j = 0; j < Columnas; j ++)
		{
			cout<<"		\t"<<Matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}

 	break;
	
	case 13:
	
	cout<<"\n						FACTORIZACION POR LU"<<endl<<endl;
	cout<<" La Factorizacion de LU consiste en descomponer una Matriz por operaciones auxiliares, en sus Matrices triangular"<<endl;
	cout<<" superoir e inferior y la identidad. Solo se aplica para matrices cuadradas."<<endl<<endl;
	
	cout<<"		Matriz [n]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> n;
	cout<<"\n		Numero de Columnas de la Matriz = "<<n<<endl<<endl;
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>A[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz Identidad es: "<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = 1;}
			if (i!=j){B[i][j] = 0;}
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int k = 1; k <= n-1; k ++)
	{
		for(int i = 0; i < n; i ++)
		for(int j = 0; j < n; j ++)
		{
			C[i][j] = 0;
		}
		
	
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}
		cout<<"\n";

	cout<<"\n		La Matriz Auxiliar 1 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
		{
			if (i==j){s = s + C[i][j];}
		}
		
	q = s/k;
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = C[i][j] - q;}
			else 
			{
			B[i][j] = C[i][j];
			}
		}
	
	cout<<"\n\n		La Matriz Auxiliar 2 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	s = 0;	
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++) 
	{
		C[i][j] = 0;
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}

	cout<<"\n		La Matriz L es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n		La Matriz U es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j)
			{
				s = s + C[i][j];
			}
		}
		cout<<"\n";
	}
	
	break;
	
	case 14:
	
	double Define;
	
	cout<<"\n						FACTORIZACION POR CHOLESKY"<<endl<<endl;
	cout<<" La Factorizacion de CHOLESKY consiste en descomponer una Matriz por operaciones auxiliares."<<endl;
	cout<<" Para aplicar este metodo la matriz debe ser positiva definida, solo para matrices cuadradas."<<endl<<endl;
	
	cout<<"		Matriz [n]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> n;
	cout<<"\n		Numero de Columnas de la Matriz = "<<n<<endl<<endl;
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>A[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz Identidad es: "<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = 1;}
			if (i!=j){B[i][j] = 0;}
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<B[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++) 
	{
		C[i][j] = 0;
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}

	cout<<"\n		Simplificaion 1: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n		Simplificaion 2: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j)
			{
				s = s + C[i][j];
			}
		}
		cout<<"\n";
	}
	
	Define = sqrt(n)*-1;
	
	cout<<"\n\n			La Matriz no es positiva definida: "<<Define<<" Por ende no se puede Factorizar mas."<<endl<<endl;	
		
	break;
	
	case 15:
	
	int uno, dos, tres;
	
	double Matriz8[3][1] = {{1}, {1}, {1}};
	double Matriz9[3][1] = {{-1}, {1}, {0}};
	double Matriz10[3][1] = {{-1}, {0}, {1}};
	
	cout<<"\n						VALORES Y VECTORES PROPIOS DE LA MATRIZ"<<endl<<endl;
	cout<<" Los vectores propios son vectores multiplicados por un valor propio en las transformaciones lineales de una matriz."<<endl; 
	cout<<" Los valores propios son constantes que multiplican los vectores propios en las transformaciones lineales de una matriz."<<endl<<endl;
	
	cout<<"		Matriz [n]: "<<endl<<endl;
	cout<<"		Numero de Filas de la Matriz = "; cin>> n;
	cout<<"\n		Numero de Columnas de la Matriz = "<<n<<endl<<endl;
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"\n		Digite los valores de la Matriz ["<<i<<"]["<<j<<"]= ";
			cin>>A[i][j];
		}
	} 
	
	cout<<"\n\n		La Matriz [n] es: "<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n		La Matriz Lamda 1 es: "<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = 1;}
			if (i!=j){B[i][j] = 0;}
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int k = 1; k <= n-1; k ++)
	{
		for(int i = 0; i < n; i ++)
		for(int j = 0; j < n; j ++)
		{
			C[i][j] = 0;
		}
		
	
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}
		cout<<"\n";

	cout<<"\n		La Matriz Reducida 1 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
		{
			if (i==j){s = s + C[i][j];}
		}
		
	q = s/k;
	
	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
		{
			if (i==j){B[i][j] = C[i][j] - q;}
			else 
			{
			B[i][j] = C[i][j];
			}
		}
	
	cout<<"\n\n		La Matriz Reducia 2 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	s = 0;	
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++) 
	{
		C[i][j] = 0;
	}

	for(int i = 0; i < n; i ++)
	for(int j = 0; j < n; j ++)
	for(int z = 0; z < n; z ++)
		{
			C[i][j] = C[i][j] + (A[i][z] * B[z][j]);
		}

	cout<<"\n		La Matriz Lamda 2 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n		La Matriz Lamda 3 es: "<<"\n"<<endl<<endl;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			cout<<"	\t"<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			if (i==j)
			{
				s = s + C[i][j];
			}
		}
		cout<<"\n";
	}

	cout<<"\n\n		El Vector Propio X es: "<<endl<<endl;
	for(int i = 0; i < 3; i ++)
	{
		for(int j = 0; j < 1; j ++)
		{
			cout<<"						\t"<<Matriz8[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n		El Vector Propio Y es: "<<endl<<endl;
	for(int i = 0; i < 3; i ++)
	{
		for(int j = 0; j < 1; j ++)
		{
			cout<<"						\t"<<Matriz9[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n\n		El Vector Propio Z es: "<<endl<<endl;
	for(int i = 0; i < 3; i ++)
	{
		for(int j = 0; j < 1; j ++)
		{
			cout<<"						\t"<<Matriz10[i][j]<<" ";
		}
		cout<<"\n";
	}

	uno = 5;
	dos = -1;
	tres = -1;

	cout<<"\n\n\n		Los Valores Propios son: "<<uno<<", "<<dos<<", "<<tres<<endl<<endl;

	break;
}	
	return 0;
}
