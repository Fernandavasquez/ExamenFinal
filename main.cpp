#include <iostream>
using namespace std;
void MiCifrado(string& cifradoFer)
{
  string Frase;
  cout << "Ingrese PALABRA PARA DECIFRAR" << endl;
  getline(cin, Frase);
  int i;
  for(i=0; i<Frase.length(); i++)
  {
      if (Frase[i]==' ')
        {cifradoFer[i]=' ';}
      if (Frase[i]=='a' || Frase[i]=='A' ){cifradoFer[i]='@';}
      if (Frase[i]=='b' || Frase[i]=='B')
      {cifradoFer[i]='p';}
      if (Frase[i]=='c' || Frase[i]=='C')
      {cifradoFer[i]='f';}
      if (Frase[i]=='d'|| Frase[i]=='D')
      {cifradoFer[i]='i';}
      if (Frase[i]=='e'|| Frase[i]=='E')
      {cifradoFer[i]='h';}
      if (Frase[i]=='f'|| Frase[i]=='F')
      {cifradoFer[i]='g';}
      if (Frase[i]=='g'|| Frase[i]=='G')
      {cifradoFer[i]='j';}
      if (Frase[i]=='h'|| Frase[i]=='H')
      {cifradoFer[i]='l';}
      if (Frase[i]=='i'|| Frase[i]=='I')
        {cifradoFer[i]='k';}
      if (Frase[i]=='j'|| Frase[i]=='J')
      {cifradoFer[i]='m';}
      if (Frase[i]=='k'|| Frase[i]=='K')
      {cifradoFer[i]='n';}
      if (Frase[i]=='l'|| Frase[i]=='L')
      {cifradoFer[i]='o';}
      if (Frase[i]=='m'|| Frase[i]=='M')
      {cifradoFer[i]='b';}
      if (Frase[i]=='n'|| Frase[i]=='N')
      {cifradoFer[i]='q';}
      if (Frase[i]=='o'|| Frase[i]=='O')
      {cifradoFer[i]='r';}
      if (Frase[i]=='p'|| Frase[i]=='P')
      {cifradoFer[i]='s';}
      if (Frase[i]=='q'|| Frase[i]=='Q')
      {cifradoFer[i]='t';}
      if (Frase[i]=='r'|| Frase[i]=='R')
      {cifradoFer[i]='u';}
      if (Frase[i]=='s'|| Frase[i]=='S')
      {cifradoFer[i]='w';}
      if (Frase[i]=='t'|| Frase[i]=='T')
      {cifradoFer[i]='s';}
      if (Frase[i]=='u'|| Frase[i]=='U')
      {cifradoFer[i]='x';}
      if (Frase[i]=='v'|| Frase[i]=='V')
      {cifradoFer[i]='y';}
      if (Frase[i]=='w'|| Frase[i]=='W')
      {cifradoFer[i]='z';}
      if (Frase[i]=='x'|| Frase[i]=='X')
      {cifradoFer[i]='a';}
      if (Frase[i]=='y'|| Frase[i]=='Y')
      {cifradoFer[i]='c';}
      if (Frase[i]=='z'|| Frase[i]=='Z')
      {cifradoFer[i]='b';}
      if (Frase[i]=='.')
      {cifradoFer[i]='.';}
  }
  cout <<"EL MENSAJE ES: "<<" "<<Frase<< endl;
  cout <<"EL CIFRADO ES: ";
  for (int f=0; f<=i; f++)
  {
  cout << cifradoFer[f];
  }
}
int main()
{
cout << "--------------------------CIFRADO FERNANDA--------------------------" << endl;
string Frase;
        MiCifrado(Frase);
    return 0;
}
