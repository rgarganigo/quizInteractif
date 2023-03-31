
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

    std::string quiz::getquestion() const {
    return question;
    }   

     quiz::setquestion(std::string question)
    {

     question=question;

    }
    std::string quiz::getreponse1() const {
        return reponse1;
    }

    void quiz::setreponse1(std::string reponse1)
    {
        reponse1=reponse1;
    }

    std::string quiz::getreponse2() const {
        return reponse2;
        }

    void quiz::setreponse2(std::string reponse2)
    {
        reponse2=reponse2;
        }

    std::string quiz::getreponse3() const {
        return reponse3;
        }
     
    void quiz::setreponse3(std::string reponse3)
    {
  reponse3=reponse3;
    }

    std::string quiz::getreponse4() const {
    return reponse4;
    }
     
    void quiz::setreponse4(std::string reponse4)
        {
            reponse4=reponse4;
        }

         int quiz::getbonneReponse() const {
    return bonneReponse;
    }
     
    void quiz::setbonneReponse(int bonneReponse)
        {
            bonneReponse= bonneReponse;
        }
    
};


#endif // QUIZ_H