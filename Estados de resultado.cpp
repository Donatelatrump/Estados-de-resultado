//By:Cesar y Beto
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void ingresos_totales();
void compras();
void gastos_operacion();
void resultado_financiamiento();
void estado_resultado();
char titulo[100],fecha[100];
int ing=0,dsv=0,rsv=0,ds=0;
int gdc=0,desc=0,rsc=0,dsc=0,cn=0,ii=0,tmd=0,i_f=0,c=0;
int gdv=0,gda=0,og=0,oi=0;
int iac=0,ig=0,pc=0,gc=0;
int ct=0,cdlv=0,ub=0,udo=0,uadi=0,ingn=0;
float iaau=0,ude=0;
int respuesta,respuesta2=0;
int main(){
setlocale(LC_ALL, "spanish");
system("color 09");
		system("cls");
	  cout<<"Bienvenido al Generador de Estados de Resultado"<<endl<<endl;
	  cout<<"\tMENU\n";
	  cout<<"1.Ingresar a crear un estado de resultado"<<endl;
	  cout<<"2.Salir"<<endl;
	  cin>>respuesta;
	  system("cls");
	switch(respuesta){
case 1:
	while(respuesta2!=7){

	system("cls");
			cout<<"\tMENU 2\n"<<endl;
			cout<<"1.Ingresar titulo(Nombre de la empresa) y fecha"<<endl;
			cout<<endl<<"2.Ingresos Totales"<<endl;
			cout<<endl<<"3.Compras"<<endl;
			cout<<endl<<"4.Gastos de operacion"<<endl;
			cout<<endl<<"5.Resultado Integral del Financiamiento"<<endl;
			cout<<endl<<"6.Generar Estado De Resultado"<<endl;
			cout<<endl<<"7.Salir"<<endl;
			cout<<endl<<"Respusta: ";cin>>respuesta2;
			system("cls");
			switch(respuesta2){
				case 1:
					fflush(stdin);
					cout<<"Ingrese el titulo: ";
					cin.getline(titulo,100,'\n');
					fflush(stdin);
					cout<<endl<<"Ingrese la fecha: ";
					cin.getline(fecha,100,'\n');break;
				case 2:
					ingresos_totales();break;
					case 3:
						compras();break;
					  case 4:
					  	gastos_operacion();break;
					  	case 5:
					  		resultado_financiamiento();break;
case 6:
		estado_resultado();
		break;
		case 7:
			system("cls");
			cout<<"saliendo del sistema..";break;
					  		default:
					  				system("cls");
					  			cout<<"tas bien pendejo mijo esa opcion no existe XD"<<endl;break;}}

case 2:
		cout<<"Saliendo...";
				break;
default:
cout<<"tas bien pendejo mijo esa opcion no existe XD"<<endl;break;
	}
	system("pause");
	return 0;
}
void ingresos_totales(){
cout<<"\t MENU \n"<<endl;
cout<<"1.Ingresos totales: ";cin>>ing;
cout<<endl<<"2.Devoluciones sobre venta: ";cin>>dsv;
cout<<endl<<"3.Rebajas sobre venta: ";cin>>rsv;
cout<<endl<<"4.Descuento sobre venta: ";cin>>ds;
cout<<endl;
}
void compras(){
	cout<<"\t MENU \n"<<endl;
	cout<<"1.Compras: ";cin>>c;
	cout<<endl<<"2.Gastos de compras: ";cin>>gdc;
	cout<<endl<<"3. Devoluciones sobre compra: ";cin>>desc;
	cout<<endl<<"4.Rebajas sobre compra: ";cin>>rsc;
	cout<<endl<<"5.Descuentos sobre compra: ";cin>>dsc;
	cout<<endl<<"6.Inventario Inicial: ";cin>>ii;
	cout<<endl<<"7.Inventario final: ";cin>>i_f;
	cout<<endl;
}
void gastos_operacion(){
	cout<<"\t MENU \n"<<endl;
	cout<<"1.Gastos de venta: ";cin>>gdv;
	cout<<endl<<"2.Gastos de administracion: ";cin>>gda;
	cout<<endl<<"3.Otros gastos: ";cin>>og;
	cout<<endl<<"4.Otros ingresos: ";cin>>oi;
	cout<<endl;

}
void resultado_financiamiento(){
	cout<<"\t MENU \n"<<endl;
	cout<<"1.Interes a cargo: ";cin>>iac;
	cout<<endl<<"2.Intereses ganados: ";cin>>ig;
	cout<<endl<<"3.Perdida cambiaria: ";cin>>pc;
	cout<<endl<<"4.Ganancia cambiaria: ";cin>>gc;
	cout<<endl;


}
//calculos globales del estado de resultado
void estado_resultado(){
 ingn=(ing-(dsv+rsv+ds));
 ct=(c+gdc);
 cn=(ct-(desc+rsc+dsc));
 tmd=(cn+ii);
 cdlv=(tmd-i_f);
 ub=(ingn-cdlv);
udo=(ub-((gdv+gda+og)-oi));
uadi=(udo+((ig+gc)-(iac+pc)));
iaau=(uadi*.30);
if(iaau<0){
	ude=((uadi)+(iaau));
}else{
	ude=(uadi-iaau);
}

//Impresion de estado resultado
cout<<"\tEstado de Resultado"<<endl<<endl;
cout<<endl<<"\t"<<titulo<<endl;
cout<<endl<<"\t"<<fecha<<endl;
cout<<endl<<"\tCifras en pesos Mexicanos"<<endl;
cout<<endl<<"Ingresos totales: "<<"\t"<<"$"<<ing<<".00"<<endl;
cout<<endl<<"Devoluciones sobre venta: "<<"\t"<<"$"<<dsv<<".00"<<endl;
cout<<endl<<"Rebajas sobre venta: "<<"\t"<<"$"<<rsv<<".00"<<endl;
cout<<endl<<"Descuento sobre venta: "<<"\t"<<"$"<<ds<<".00"<<endl;
cout<<endl<<endl<<"Ingresos netos: "<<"\t"<<"$"<<ingn<<".00"<<endl;

cout<<endl<<endl<<"Compras: "<<"\t"<<"$"<<c<<".00"<<endl;
cout<<endl<<"Gastos de compra: "<<"\t"<<"$"<<gdc<<".00"<<endl;
cout<<endl<<"Compras totales: "<<"\t"<<"$"<<ct<<".00"<<endl;
cout<<endl<<"Devoluciones sobre compra: "<<"\t"<<"$"<<desc<<".00"<<endl;
cout<<endl<<"Rebajas sobre compra: "<<"\t"<<"$"<<rsc<<".00"<<endl;
cout<<endl<<"Descuento sobre compra: "<<"\t"<<"$"<<dsc<<".00"<<endl;
cout<<endl<<"Compras netas: "<<"\t"<<"$"<<cn<<".00"<<endl;
cout<<endl<<"Inventario inicial: "<<"\t"<<"$"<<ii<<".00"<<endl;
cout<<endl<<"Total de mercancia disponible: "<<"\t"<<"$"<<tmd<<".00"<<endl;
cout<<endl<<"Inventario Final: "<<"\t"<<"$"<<i_f<<".00"<<endl;

cout<<endl<<"Costo de lo vendido: "<<"\t"<<"$"<<cdlv<<".00"<<endl;
if(ub<0){
	cout<<endl<<endl<<"Perdida Bruta: "<<"\t"<<"$"<<ub<<".00"<<endl;
}else{
	cout<<endl<<endl<<"Utilidad Bruta: "<<"\t"<<"$"<<ub<<".00"<<endl;
}

cout<<endl<<endl<<"Gastos de venta: "<<"\t"<<"$"<<gdv<<".00"<<endl;
cout<<endl<<"Gastos de administracion: "<<"\t"<<"$"<<gda<<".00"<<endl;

cout<<endl<<"Otros gastos: "<<"\t"<<"$"<<og<<".00"<<endl;
cout<<endl<<"Otros ingresos: "<<"\t"<<"$"<<oi<<".00"<<endl;
if(udo<0){
	cout<<endl<<"Perdida de Operacion: "<<"\t"<<"$"<<udo<<".00"<<endl;
}else{
cout<<endl<<"Utilidad de Operacion: "<<"\t"<<"$"<<udo<<".00"<<endl;
}

cout<<endl<<endl<<"Intereses a cargo: "<<"\t"<<"$"<<iac<<".00"<<endl;
cout<<endl<<"Intereses Ganados: "<<"\t"<<"$"<<ig<<".00"<<endl;
cout<<endl<<"Perdida cambiaria: "<<"\t"<<"$"<<pc<<".00"<<endl;
cout<<endl<<"Ganancia cambiaria: "<<"\t"<<"$"<<gc<<".00"<<endl;
cout<<endl<<"Utilidad antes de Impuestos: "<<"\t"<<"$"<<uadi<<".00"<<endl;
cout<<endl<<endl<<"Impuesto a la utilidad (30%): "<<"\t"<<"$"<<iaau<<".00"<<endl;
if(ude<0){
cout<<endl<<"Perdida del ejercisio: "<<"\t"<<"$"<<ude<<".00"<<endl;
}else{
cout<<endl<<"Utilidad del ejercisio: "<<"\t"<<"$"<<ude<<".00"<<endl;
}
system("pause");
}
