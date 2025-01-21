#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  int N, i;

    cout << "Inserisci il numero di studenti nella classe: " << endl;
    cin >> N;
    string nomi[N];
    int voti[N], assenze[N];

    i = 0;
    while (i < N) {
        cout << "Inserisci il nome dello studente " << i + 1 << "." << endl;
        cin >> nomi[i];
        cout << "Inserisci il voto di " << nomi[i] << "." << endl;
        cin >> voti[i];
        cout << "Inserisci il numero di assenze di " << nomi[i] << "." << endl;
        cin >> assenze[i];
        cout << "Sei " << nomi[i] << ", hai come voto " << voti[i] << " e hai " << assenze[i] << " assenze." << endl;
        i = i + 1;
    }

    // visualizzare nome, voto e assenze dell'i-esimo studente
    cout << "Inserisci l'indice dello studente (0 per il primo, 1 per il secondo, ...)" << endl;
    cin >> i;
    if (i >= 0 && i < N) {
        cout << "Studente: " << nomi[i] << ", Voto: " << voti[i] << ", Assenze: " << assenze[i] << "." << endl;

}


