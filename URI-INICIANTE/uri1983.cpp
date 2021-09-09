#include <iostream>

using namespace std;

int main(void){
    int buscaAluno(int matricula[], float nota[], int aluno);
    int matricula[105] = {0}, alunos;
    float nota[105] = {0.0};

    cin >> alunos;
    for (int i = 0; i < alunos; i++)
    {
        cin >> matricula[i] >> nota[i];
    }
    if(buscaAluno(matricula, nota, alunos) == 0)
        cout << "Minimum note not reached\n";
    else
        cout << matricula[buscaAluno(matricula, nota, alunos)] << endl;
    return 0;
}

int buscaAluno(int matricula[], float nota[], int aluno)
{
    double aux = 0.0;
    int numMatricula = 0;
    for (int i = 0; i < aluno; i++)
    {
        if(nota[i] > aux ){
            aux = nota[i];
            numMatricula = i;
        }
    }
    if(aux < 8.0) 
        return 0;
    else 
        return numMatricula;
}