#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    cout << "-1  " << "0 "  << pago_estacionamiento(-1); if(-1 *  pago_estacionamiento(-1) == 0){cout << "pass" << endl;} else{cout << "fail" << endl;;}
    cout << "4  " << "40 "  << pago_estacionamiento(4); if(4 *  pago_estacionamiento(4) == 40){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "8  " << "81  " << pago_estacionamiento(8);  if(8 *  pago_estacionamiento(8) == 81){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "15  " << "105 "  << pago_estacionamiento(15); if(15 *  pago_estacionamiento(15) == 105){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "1  " << "10 "  << pago_estacionamiento(1);  if(1 *  pago_estacionamiento(1) == 10){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "5  " << "50 "  << pago_estacionamiento(5); if(5 *  pago_estacionamiento(5) == 50){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "6  " << "54 " << pago_estacionamiento(54);  if(6 *  pago_estacionamiento(6) == 54){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "9  " << "81 "  << pago_estacionamiento(9);  if(9 *  pago_estacionamiento(9) == 81){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    cout << "10  " << "70  " << pago_estacionamiento(10); if(10  * pago_estacionamiento(10) == 70){cout << "pass"<< endl;;} else{cout << "fail" << endl;;}
    // Agrega tus casos de prueba



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}