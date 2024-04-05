#include <bits/stdc++.h>
using namespace std; 
string Konichiwa(string nombre, string aux);
int main(){
string n , x;
cout <<"ingresar nombre"<<endl;
getline(cin,n);

n=Konichiwa(n , x);
cout<<n<<endl;
return 0;
}
string Konichiwa(string nombre , string aux){
for (int i = 0; i < nombre.size(); i++) {
if (nombre[i] != 'a' && nombre[i] != 'e' && nombre[i] != 'i' && nombre[i] != 'o' && nombre[i] != 'u'&& nombre[i] != ' ') {
aux += nombre[i];
if (i < nombre.size() + 1 && nombre[i + 1] != 'a' && nombre[i + 1] != 'e' && nombre[i + 1] != 'i' && nombre[i + 1] != 'o' && nombre[i + 1] != 'u'&& nombre[i + 1] != ' ') {
aux += 'u';
}
} else {
aux+= nombre[i];
}
}
string c="konichi wa, ";
string f="-san";
string ter; 
ter=c+aux+f;
return ter;
}