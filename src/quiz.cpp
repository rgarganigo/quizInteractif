#include <iostream>
#include <string>
using namespace std;

int main() {
    // Entrée de la question
    string question = "Quelle est la capitale de l'Espagne ?";
    string reponse1 = "Madrid";
    string reponse2 = "Barcelone";
    string reponse3 = "Séville";
    string reponse4 = "Valence";
    int bonneReponse;
    
    cout << "Voici la question : " << question << endl;
    // Affichage des réponses
    cout << "1. " << reponse1 << endl;
    cout << "2. " << reponse2 << endl;
    cout << "3. " << reponse3 << endl;
    cout << "4. " << reponse4 << endl;

    // Entrée de la réponse correcte
    cout << "Entrez le numéro de la réponse correcte (1, 2, 3 ou 4) : ";
    cin >> bonneReponse ;

    // Vérification de la réponse de l'utilisateur
    if (bonneReponse == 1) {
       cout << "\nLa réponse est correcte !" << endl;
    } else {
        cout << "\nLa réponse est incorrecte." << endl;
    }

    return 0;
}
