#include<iostream>
using std::cout;
using std:: cin;
using std:: endl;
int main()
{
	int saldo =0;
	int tt=9;
	int monto=0;
	while(tt !=0)
	{
		cout<<"selecione la operacion a realizar (1=deposito, 2=retiro, 0=salir de la aplicacion):";
		cin>>tt;
		if(tt==2)
		{
			cout<<"cantidad a retirar:";
			cin>>monto;
			if(monto>saldo)
			cout<<"transaccion invalida.fondos insuficientes" <<endl;
			else
			saldo=saldo-monto;
		}
		else
		if(tt==1)
		{
			cout<<"cantidad a depositar:";
			cin>>monto;
			saldo=saldo+monto;
		}
	else
	if(tt!=0)
	cout<<"tipo de transicion es invalida"<<endl;
	}
	cout<<"TU SALARIO FINAL:" <<saldo<< endl;
	system("pause");
}
