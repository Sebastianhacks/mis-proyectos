#include <iostream>
#include <dirent.h>

using namespace std;

bool is_dir(string dir){
DIR * directorio;
if (directorio = opendir(dir.c_str())){
    closedir(directorio);
    return true;
}
else{
    return false;
}
}
bool (is_file (string file)){
FILE * archivo;
if (archivo = fopen(file.c_str(), "r")){
    fclose(archivo);
    return true;
}
else{
    return false;
}
}
void eliminar(string ruta){
    string comando; //rdmir o del
    if (is_dir(ruta)){
        comando = "rdmir" +ruta+ " /s /q";
        system(comando.c_str());
    }
    else if(is_file(ruta)){
        comando = "del" + ruta;
    }

}

int main()
{
  system("pause");
    return 0;
}
