#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int mitad (int arr[], int pinicial, int pfinal);

void ordenar(int arr[], int pinicial, int pfinal);


int main()
{
ofstream archivo;
archivo.open ("QUIKSHORT.txt");
    int A[10];

    for (int o = 0 ; o < 10 ; o++){
      cout << "Ingresar elemento "<< o +1 << " : ";
      cin >> A[o];

    }
    cout << "Arreglo original"<<endl;
    archivo << "Arreglo original"<<endl;

    for (int f =0; f < 10 ; f ++){
      archivo << "|"<<A[f]<<"|";
      cout << "|"<<A[f]<<"|";
    }
   

    ordenar(A,0,9);

    cout<<endl;
    archivo<<endl;
    archivo<< "Arreglo ordenado "<<endl;
    cout<< "Arreglo ordenado "<<endl;


    for(int i=0; i<10;i++)
    {
        cout<<"|"<<A[i]<<"|";
        archivo<<"|"<<A[i]<<"|";
    }


    return 0;
}



int mitad (int arr[], int pinicial,  int pfinal)
{

    return arr[(pinicial+pfinal)/2];


}






void ordenar(int arr[], int pinicial, int pfinal)
{
    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(arr,pinicial,pfinal);

    do
    {
        while(arr[i]<piv)
        {
            i++;
        }
        while(arr[j]>piv)
        {
            j--;
        }
        if(i<=j)
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

    }
    while(i<=j);

    if(pinicial<j)
        ordenar(arr,pinicial,j);
    if(i<pfinal)
        ordenar(arr,i,pfinal);
}




