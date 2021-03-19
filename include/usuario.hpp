#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include "servidor.hpp"
using namespace std;

class Usuario{
    private:
        int id;
        string nome;
        string email;
        string senha;
        Servidor *servidor = nullptr;
        bool status;

    public:
        Usuario();
        string getEmail();
        string getSenha();
        int getId();
        Servidor *getServer();
        string getNome();
        Usuario(int id, string nome, string email, string senha);
        void addServer(Servidor *servidor);
        ~Usuario();
};


#endif