#ifndef ALUNO_H
#define ALUNO_H

#include "Usuario.h"
#include <vector>
#include <string>

class Aluno : public Usuario {
private:
    std::string matricula;
    std::string curso;
    std::vector<std::string> disciplinasCursadas;

public:
    Aluno(const std::string& nome, const std::string& email, const std::string& matricula, const std::string& curso);

    void adicionarDisciplina(const std::string& disciplina);
    void gerarRelatorio() const override;

    void gerarRelatorio(bool incluirNotas) const; // Sobrecarga
};

#endif // ALUNO_H
