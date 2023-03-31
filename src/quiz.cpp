#include <iostream>
#include <string>

#include "quiz.h"

using namespace std;

Quiz::Quiz(const std::string &question, const std::string &reponse1, const std::string &reponse2,
         const std::string &reponse3, const std::string &reponse4, int bonneReponse)
    : question(question)
    , reponse1(reponse1)
    , reponse2(reponse2)
    , reponse3(reponse3)
    , reponse4(reponse4)
    , bonneReponse(bonneReponse)
{
}

std::string Quiz::getquestion() const
{
    return question;
}

void Quiz::setquestion(std::string question)
{
    question = question;
}
std::string Quiz::getreponse1() const
{
    return reponse1;
}

void Quiz::setreponse1(std::string reponse1)
{
    reponse1 = reponse1;
}

std::string Quiz::getreponse2() const
{
    return reponse2;
}

void Quiz::setreponse2(std::string reponse2)
{
    reponse2 = reponse2;
}

std::string Quiz::getreponse3() const
{
    return reponse3;
}

void Quiz::setreponse3(std::string reponse3)
{
    reponse3 = reponse3;
}

std::string Quiz::getreponse4() const
{
    return reponse4;
}

void Quiz::setreponse4(std::string reponse4)
{
    reponse4 = reponse4;
}

int Quiz::getbonneReponse() const
{
    return bonneReponse;
}

void Quiz::setbonneReponse(int bonneReponse)
{
    bonneReponse = bonneReponse;
}
