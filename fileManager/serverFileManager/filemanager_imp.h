#include "filemanager.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define OP_SALIR 				0
#define OP_READ_FILE 		    10
#define OP_WRITE_FILE  		    11

class filemanager_imp{
private:
    int cliente_id = -1;
    bool salir = false;
    FileManager *op_mat = nullptr;
    
public:
    filemanager_imp(int client_id);
    bool getSalir(){return salir;};
    void atenderOperacion();
    ~filemanager_imp();
};