#include<iostream>
#include<stdio.h>

using namespace std;

int ficha1[2][1] = {{1}, {2}}, ficha2[2][1] = {{2}, {3}}, ficha3[2][1] = {{3}, {4}}, ficha4[2][1] = {{4}, {5}};
int ficha5[2][1] = {{5}, {6}}, ficha6[2][1] = {{6}, {0}}, ficha7[2][1] = {{0}, {2}}, ficha8[2][1] = {{2}, {2}};
int ficha9[2][1] = {{2}, {4}}, ficha10[2][1] = {{4}, {4}}, ficha11[2][1] = {{4}, {0}}, ficha12[2][1] = {{0}, {3}};
int ficha13[2][1] = {{3}, {3}}, ficha14[2][1] = {{3}, {6}}, ficha15[2][1] = {{6}, {6}}, ficha16[2][1] = {{6}, {1}};
int ficha17[2][1] = {{1}, {3}}, ficha18[2][1] = {{3}, {5}}, ficha19[2][1] = {{5}, {5}}, ficha20[2][1] = {{5}, {1}};
int ficha21[2][1] = {{1}, {4}}, ficha22[2][1] = {{4}, {6}}, ficha23[2][1] = {{2}, {2}}, ficha24[2][1] = {{2}, {5}};
int ficha25[2][1] = {{5}, {0}}, ficha26[2][1] = {{0}, {0}}, ficha27[2][1] = {{0}, {1}}, ficha28[2][1] = {{1}, {1}};

int Fichas;

int main()
{
cout<<"						EL PROBLEMA DEL DOMINO"<<endl;
cout<<"													ETN - 307L"<<endl<<endl;
cout<<" El programa ayuda al ordenamiento de las fichas del domino."<<endl; 
cout<<" El Domino tiene 28 fichas asi que se deberan ordenar dichas fichas."<<endl;
cout<<" El programa ordenara las 28 fichas de manera que el ultimo numero de la ficha coincida con el primero de la siguiente."<<endl<<endl;

cout<<"\n Numero de Fichas (Solo Ingresar Numeros Pares hasta el 28) = "; cin>> Fichas;
	
switch (Fichas)	
{
case 2:

cout<<"\n\n	Primer orden de 2 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 4:
cout<<"\n\n	Primer orden de 4 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 6:

cout<<"\n\n	Primer orden de 6 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" ";
		cout<<"\t"<<ficha4[i][j]<<" "<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" ";

	}
		cout<<"\n";
}

break;

case 8:
cout<<"\n\n	Primer orden de 8 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";

	}
		cout<<"\n";
}

break;

case 10:

cout<<"\n\n	Primer orden de 10 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" ";
		cout<<"\t"<<ficha4[i][j]<<" "<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" ";
		cout<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" "<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 12:
cout<<"\n\n	Primer orden de 12 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 14:

cout<<"\n\n	Primer orden de 14 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 16:
cout<<"\n\n	Primer orden de 16 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 16 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 18:

cout<<"\n\n	Primer orden de 18 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 18 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" "<<"\t"<<ficha17[i][j]<<" "<<"\t"<<ficha18[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 20:
	
cout<<"\n\n	Primer orden de 20 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 20 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" "<<"\t"<<ficha17[i][j]<<" "<<"\t"<<ficha18[i][j]<<" ";
		cout<<"\t"<<ficha19[i][j]<<" "<<"\t"<<ficha20[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 22:

cout<<"\n\n	Primer orden de 22 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 22 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" "<<"\t"<<ficha17[i][j]<<" "<<"\t"<<ficha18[i][j]<<" ";
		cout<<"\t"<<ficha19[i][j]<<" "<<"\t"<<ficha20[i][j]<<" "<<"\t"<<ficha21[i][j]<<" "<<"\t"<<ficha22[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 24:
	
cout<<"\n\n	Primer orden de 24 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 24 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" "<<"\t"<<ficha17[i][j]<<" "<<"\t"<<ficha18[i][j]<<" ";
		cout<<"\t"<<ficha19[i][j]<<" "<<"\t"<<ficha20[i][j]<<" "<<"\t"<<ficha21[i][j]<<" "<<"\t"<<ficha22[i][j]<<" ";
		cout<<"\t"<<ficha23[i][j]<<" "<<"\t"<<ficha24[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 26:

cout<<"\n\n	Primer orden de 26 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 26 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" "<<"\t"<<ficha17[i][j]<<" "<<"\t"<<ficha18[i][j]<<" ";
		cout<<"\t"<<ficha19[i][j]<<" "<<"\t"<<ficha20[i][j]<<" "<<"\t"<<ficha21[i][j]<<" "<<"\t"<<ficha22[i][j]<<" ";
		cout<<"\t"<<ficha23[i][j]<<" "<<"\t"<<ficha24[i][j]<<" "<<"\t"<<ficha25[i][j]<<" "<<"\t"<<ficha26[i][j]<<" ";
	}
		cout<<"\n";
}

break;

case 28:
	
cout<<"\n\n	Primer orden de 28 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha1[i][j]<<" "<<"\t"<<ficha2[i][j]<<" "<<"\t"<<ficha3[i][j]<<" "<<"\t"<<ficha4[i][j]<<" ";
		cout<<"\t"<<ficha5[i][j]<<" "<<"\t"<<ficha6[i][j]<<" "<<"\t"<<ficha7[i][j]<<" "<<"\t"<<ficha8[i][j]<<" ";
		cout<<"\t"<<ficha9[i][j]<<" "<<"\t"<<ficha10[i][j]<<" "<<"\t"<<ficha11[i][j]<<" "<<"\t"<<ficha12[i][j]<<" ";			
		cout<<"\t"<<ficha13[i][j]<<" "<<"\t"<<ficha14[i][j]<<" ";		
	}
		cout<<"\n";
}

cout<<"\n\n	Segundo orden de 28 fichas es: "<<endl<<endl;
for(int i = 0; i < 2; i ++)	
{
	for(int j = 0; j < 1; j ++)
	{
		cout<<"\t"<<ficha15[i][j]<<" "<<"\t"<<ficha16[i][j]<<" "<<"\t"<<ficha17[i][j]<<" "<<"\t"<<ficha18[i][j]<<" ";
		cout<<"\t"<<ficha19[i][j]<<" "<<"\t"<<ficha20[i][j]<<" "<<"\t"<<ficha21[i][j]<<" "<<"\t"<<ficha22[i][j]<<" ";
		cout<<"\t"<<ficha23[i][j]<<" "<<"\t"<<ficha24[i][j]<<" "<<"\t"<<ficha25[i][j]<<" "<<"\t"<<ficha26[i][j]<<" ";
		cout<<"\t"<<ficha27[i][j]<<" "<<"\t"<<ficha28[i][j]<<" ";
	}
		cout<<"\n";
}
		
}
	return 0;
}
