#include "iostream"
int dia;

using namespace std;
int main(){
int a;

cout<<"dame el dia numero";
cin>>a;	
switch(a){


case 1:
cout<<"el dia es lunes";
	break;

case 2:
cout<<"el dia es martes";
	break;
	
case 3:
cout<<"el dia es miercoles";
	break;

case 4:
cout<<"el dia es jueves";
break;

case 5:
cout<<"el dia es viernes";
break;

case 6:cout<<"el dia es sabado";
break;

case 7:cout<<"el dia es domingo";
break;
	
default: 

cout<<"no es un dia de la semana";

}
 return 0;
}

