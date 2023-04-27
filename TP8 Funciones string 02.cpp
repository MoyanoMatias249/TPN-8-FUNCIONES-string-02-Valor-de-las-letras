#include <bits\stdc++.h>
using namespace std;

 int ValorLetras(string msg){
 	int cont;
 	for(int i=0; i<= msg.size(); i++){
 		
 		if(msg[i] == 'a' || msg[i] == 'e'){
 			cont = cont + 1;
		 }
		 if(msg[i] == 'o' || msg[i] == 's'){
 			cont = cont + 2;
		 }
		 if(msg[i] == 'd' || msg[i] == 'i' || msg[i] == 'n' || msg[i] == 'r'){
 			cont = cont + 3;
		 }
		 if(msg[i] == 'c' || msg[i] == 'l' || msg[i] == 't' || msg[i] == 'u'){
 			cont = cont + 4;
		 }
		 if(msg[i] == 'm' || msg[i] == 'p'){
 			cont = cont + 5;
 		 }
		 if(msg[i] == 'b' || msg[i] == 'f' || msg[i] == 'g' || msg[i] == 'h' || msg[i] == 'j' || msg[i] == 'q' || msg[i] == 'v' || msg[i] == 'x' || msg[i] == 'y' || msg[i] == 'z'){
 			cont = cont + 6;
		 }
		 if(msg[i] == 'k' || msg[i] == 'w'){
 			cont = cont + 7;
		 }
	}
	return cont;
}
int main(){
	string mensaje;
	
	cout<<"ingrese mesaje"<<endl;
	getline(cin,mensaje);
	
	int contL = ValorLetras(mensaje);
	
	cout<<"valor total del mensaje : "<<contL<<endl;
	
	return 0;
}
