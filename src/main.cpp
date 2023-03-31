#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    ifstream fichier("./test/quizz.txt");
    if (!fichier) {
        cerr << "Erreur lors de l'ouverture du fichier de quiz." << endl;
        return 1;
    }

    std::string ligne;
    int numQuestion = 1;
    while (getline(fichier, ligne))
    {
        // Récupération de la question
        if (ligne.find("q:") != std::string::npos)
        {
            std::string question = ligne.substr(3);
            cout << "Question " << numQuestion << ": " << question << endl;

            // Récupération des réponses
            std::string reponse1, reponse2, reponse3, reponse4;
            int bonneReponse;
            while (getline(fichier, ligne))
            {
                if (ligne.find("r1:") != std::string::npos)
                {
                    reponse1 = ligne.substr(4);
                }
                else if (ligne.find("r2:") != std::string::npos)
                {
                    reponse2 = ligne.substr(4);
                }
                else if (ligne.find("r3:") != std::string::npos)
                {
                    reponse3 = ligne.substr(4);
                }
                else if (ligne.find("r4:") != std::string::npos)
                {
                    reponse4 = ligne.substr(4);
                }
                else if (ligne.find("br:") != std::string::npos)
                {
                    bonneReponse = stoi(ligne.substr(3));
                }
                else if (ligne.empty())
                {
                    cout << "C'est la fin du quiz !" << endl;
                    break;
                }
            }

            // Affichage des réponses
            cout << "1. " << reponse1 << endl;
            cout << "2. " << reponse2 << endl;
            cout << "3. " << reponse3 << endl;
            cout << "4. " << reponse4 << endl;

            // Entrée de la réponse de l'utilisateur
            int reponseUtilisateur;
            cout << "Entrez le numéro de la réponse correcte (1, 2, 3 ou 4) : ";
            cin >> reponseUtilisateur;

            // Vérification de la réponse de l'utilisateur
            if (reponseUtilisateur == bonneReponse)
            {
                cout << "\nLa réponse est correcte !" << endl;
            }
            else
            {
                cout << "\nLa réponse est incorrecte." << endl;
            }

            numQuestion++;
        }
    }

    return 0;
}
