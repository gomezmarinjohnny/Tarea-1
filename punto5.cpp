// ESTA APLICACI�N COMPARA 3 N�MEROS FLOTANTES
// Y DETERMINA CUAL ES EL MAYOR

#include <iostream>
#include <string>



int main()

{
  float numero1,numero2,numero3;
  
  std::cout << "INGRESE EL PRIMER NUMERO TIPO FLOTANTE" << std::endl;
  std::cin >> numero1;
  
  std::cout <<"INGRESE EL SEGUNDO NUMERO TIPO FLOTANTE" << std::endl;
  std::cin >> numero2;
  
  std::cout <<"INGRESE EL TERCER NUMERO TIPO FLOTANTE" << std::endl;
  std::cin >> numero3;
  
  (numero1>numero2&&numero1>numero3)?std::cout<<"El numero mayor es: "<<numero1: std::cout<<" ";
  (numero2>numero1&&numero2>numero3)?std::cout<<"El numero mayor es: "<<numero2: std::cout<<" ";
  (numero3>numero1&&numero3<numero2)?std::cout<<"El numero mayor es: "<<numero3: std::cout<<" ";
}
