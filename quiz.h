
#ifndef QUIZ_H
#define QUIZ_H

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <map>
#include <cstdint>

class Quiz {
private:


public:

    std::string question;
    std::string reponse1;
    std::string reponse2;
    std::string reponse3;
    std::string reponse4;
    int bonneReponse;

    void afficherQuestion() const;
    bool verifierReponse(int reponse) const;

    Quiz(const std::string& question, const std::string& reponse1, const std::string& reponse2,
         const std::string& reponse3, const std::string& reponse4, int bonneReponse);

    
};

#endif // QUIZ_H