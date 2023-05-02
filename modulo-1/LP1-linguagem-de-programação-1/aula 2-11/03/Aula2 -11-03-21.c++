//1 - Sabendo-se que uma pessoa recebe um salário fixo por mês e que ele tem uma dívida a pagar. Construa um algoritmo que leia o salário que a pessoa recebe por mês e leia também a dívida que ela possui. Por fim calcule e escreva quanto vai sobrar do salário dela depois de pagar a dívida.
#include <iostream>
using namespace std;
int main()
{
	float		salario,divida, salarioF;
	
	cout<<"\n Informe o salário: ";
	cin>>salario;
	cout<<"\n Informe a divida: ";
	cin>>divida;
	
	salarioF = salario - divida;
	
	cout<<"\n O salário final é: "<<salarioF;
system("pause");	
}


//2 - Escreva um algoritmo para calcular e exibir a média ponderada de 2 notas. (nota1= peso 6 e nota2= peso 4)
#include <iostream>
using namespace std;
int main()
{
	float		N1, N2, mediaP;
	
	cout<<"\n Entre com a nota 1: ";
	cin>>N1;
	cout<<"\n Entre com a nota 2: ";
	cin>>N2;
	
	mediaP = (N1 * 6 + N2 * 4) / 10;
	
	cout<<"\n A média ponderada é: "<<mediaP;
system("pause");	
}


//3 - Sabe-se que são necessários 0,2L de tinta para pintar 1m2 de parede. Construa um algoritmo que, com base nas medidas de uma parede retangular, escreva a área a ser pintada e a quantidade de tinta necessária para pintar esta parede.
#include <iostream>
using namespace std;
int main()
{
	float		base, altura, area, litroT;
	
	cout<<"\n Entre com a base: ";
	cin>>base;
	cout<<"\n Entre com a altura: ";
	cin>>altura;
	
	area = base * altura;
	
	cout<<"\n A quantidade de tinta necessária será: "<<litroT;
system("pause");	
}