#include <iostream>
#include <fstream>
using namespace std;

void escritura(string ruta,string informacion){
	fstream archivo(ruta,ios::out);
	if (archivo.is_open()){
		archivo<<informacion<<endl;
		archivo.close();
	}else{
		cerr<<" No se  pudo abrir el archivo para escritura."<<endl;
	}
}


int main(){
	escritura("C:\\Users\\PROGRAMACION\\Desktop\\archivo3.txt", " en agosto se acaba el semestre *-* "); //cambiar nombre: PROGRAMACION y crear el archivo3.txt
	return 0;
}
