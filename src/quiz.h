
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

class Quiz
{
private:
    std::string question;
    std::string reponse1;
    std::string reponse2;
    std::string reponse3;
    std::string reponse4;
    int bonneReponse;

public:
    Quiz(const std::string &question, const std::string &reponse1, const std::string &reponse2,
         const std::string &reponse3, const std::string &reponse4, int bonneReponse);

    void afficherQuestion() const;
    bool verifierReponse(int reponse) const;

    std::string getquestion() const;
    void setquestion(std::string question);
    std::string getreponse1() const;
    void setreponse1(std::string reponse1);
    std::string getreponse2() const;
    void setreponse2(std::string reponse2);
    std::string getreponse3() const;
    void setreponse3(std::string reponse3);
    std::string getreponse4() const;
    void setreponse4(std::string reponse4);
    int getbonneReponse() const;
    void setbonneReponse(int bonneReponse);

};

#endif // QUIZ_H