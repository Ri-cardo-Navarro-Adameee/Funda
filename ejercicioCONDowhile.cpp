#include<iostream>
using namespace std;
int main (){
int opcion;
float saldo = 1000;
float deposito, t= 0.0;
float retiro = 0.0;
do{
cout<<"Bienvenido al menu principal"<<endl;
cout<<"Elija 1) para Consultar saldo "<<endl;
cout<<"Elija 2) para depositar dinero"<<endl;
cout<<"Elija 3) para  retirar dinero"<<endl;
cout<<"Elija 4) para salir del menu."<<endl;
cout<<"Que opcion elije?"<<endl;
cin >> opcion ;
switch (opcion)
{
case 1 :
   cout<<"Saldo: "<<saldo<<endl;
    break;
case 2 :
cout<<"Ingrese la cantidad a depositar"<<endl;
cin >> deposito;
if (deposito > 0){
    cout<<"Deposito exitoso"<<endl;
} else {
 cout<<"Elija unicamente numero enteros positivos"<<endl;
}
break;
case 3:
cout<<"Cuanto desea retirar?"<<endl;
cin >> retiro;
if (retiro > saldo){
    cout<<"El retiro no hace"<<endl;
} else if (retiro < 1)
{
    cout<<"el retiro no puede ser negativo"<<endl;
} else {
    cout<<"Si se puede hacer el retiro"<<endl;
    t = saldo - retiro;
    cout<<"el retiro no puede ser negativo"<<t<<endl;
}
break;
case 4:
cout<<"Fin del proceso "<<endl;
default:
    break;
}

} while (opcion != 4);
    return 0;
}