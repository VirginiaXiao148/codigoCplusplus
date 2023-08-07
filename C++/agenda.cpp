#include <iostream>

using namespace std;

class Contacto {

    Contacto(string nombre, string apellidos, string direccion, string DNI, int telefono) {
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->direccion = direccion;
        this->DNI = DNI;
        this->telefono = telefono;
    }

    public:
        void setNombre(string nombre) {
            this->nombre = nombre;
        }
        string getNombre() {
            return nombre;
        }

        void setApellidos(string apellidos) {
            this->apellidos = apellidos;
        }
        string getApellidos() {
            return apellidos;
        }

        void setDireccion(string direccion) {
            this->direccion = direccion;
        }
        string getDireccion() {
            return direccion;
        }

        void setDNI(string dni) {
            this->DNI = dni;
        }
        string getDNI() {
            return DNI;
        }

        void setTelefono(int telefono) {
            this->telefono = telefono;
        }
        int getTelefono() {
            return telefono;
        }

    private:
        string nombre;
        string apellidos;
        string direccion;
        string DNI;
        int telefono;
};

vector<Contacto> agenda;

void agregarContacto() {

    string nombre;
    string apellidos;
    string direccion;
    string DNI;
    int telefono;

    cout << "Nombre: ";
    cin >> nombre;
    cin.ignore(); // To consume the newline left in the buffer

    cout << "Apellidos: ";
    getline(cin, apellidos);

    cout << "Direccion: ";
    getline(cin, direccion);

    cout << "DNI: ";
    cin >> DNI;

    cout << "Telefono: ";
    cin >> telefono;

    Contacto c(nombre, apellidos, direccion, DNI, telefono);
    agenda.push_back(c);
}

void buscarContacto(){

    string DNI;

    cout << "DNI: ";
    cin >> DNI;

    for(int i = 0; i < agenda.size(), i++){
        int index = i;
        if (agenda[i].getDNI() == DNI) {
            cout << "Contacto encontrado:" << endl;
            cout << "Nombre: " << agenda[index].getNombre() << endl;
            cout << "Apellidos: " << agenda[index].getApellidos() << endl;
            cout << "Direccion: " << agenda[index].getDireccion() << endl;
            cout << "DNI: " << agenda[index].getDNI() << endl;
            cout << "Telefono: " << agenda[index].getTelefono() << endl;
            return;
        }else{
            cout << "Contacto no encontrado." << endl;
        }
    }

}

void mostrarContactos() {
    for (int i = 0; i < agenda.size(); i++) {
        cout << "Contacto " << i + 1 << ":" << endl;
        cout << "Nombre: " << agenda[i].getNombre() << endl;
        cout << "Apellidos: " << agenda[i].getApellidos() << endl;
        cout << "Direccion: " << agenda[i].getDireccion() << endl;
        cout << "DNI: " << agenda[i].getDNI() << endl;
        cout << "Telefono: " << agenda[i].getTelefono() << endl;
        cout << "-------------------------" << endl;
    }
}

void eliminarContacto() {
    string DNI;

    cout << "DNI del contacto a eliminar: ";
    cin >> DNI;

    for (auto it = agenda.begin(); it != agenda.end(); it++) {
        if (it->getDNI() == DNI) {
            agenda.erase(it);
            cout << "Contacto eliminado." << endl;
            return;
        }
    }

    cout << "Contacto no encontrado." << endl;
}

void menu() {
    cout << "Menu:" << endl;
    cout << "1. Agregar contacto" << endl;
    cout << "2. Buscar contacto" << endl;
    cout << "3. Mostrar contactos" << endl;
    cout << "4. Eliminar contacto" << endl;
    cout << "5. Salir" << endl;
}

int main() {
    int opcion;

    while (true) {
        menu();

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarContacto();
                break;
            case 2:
                buscarContacto();
                break;
            case 3:
                mostrarContactos();
                break;
            case 4:
                eliminarContacto();
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                return 0;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    }

    return 0;
}


