cmake_minimum_required(VERSION 3.5)

project(quizInteractif)

# Ajouter l'exécutable "quiz" et lier avec les fichiers sources "quiz.cpp" et "quiz.h"
add_executable(quiz
    src/main_alt.cpp
    src/quiz.cpp
    src/quiz.h
)
