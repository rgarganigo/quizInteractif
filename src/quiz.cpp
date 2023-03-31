#include <iostream>
#include <string>
using namespace std;

std::string quiz::getquestion() const
{
    return question;
}

quiz::setquestion(std::string question)
{

    question = question;
}
std::string quiz::getreponse1() const
{
    return reponse1;
}

void quiz::setreponse1(std::string reponse1)
{
    reponse1 = reponse1;
}

std::string quiz::getreponse2() const
{
    return reponse2;
}

void quiz::setreponse2(std::string reponse2)
{
    reponse2 = reponse2;
}

std::string quiz::getreponse3() const
{
    return reponse3;
}

void quiz::setreponse3(std::string reponse3)
{
    reponse3 = reponse3;
}

std::string quiz::getreponse4() const
{
    return reponse4;
}

void quiz::setreponse4(std::string reponse4)
{
    reponse4 = reponse4;
}

int quiz::getbonneReponse() const
{
    return bonneReponse;
}

void quiz::setbonneReponse(int bonneReponse)
{
    bonneReponse = bonneReponse;
}
