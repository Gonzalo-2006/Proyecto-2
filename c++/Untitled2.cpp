#include <iostream>
#include <string>

class Animal {
   private:
      std::string nombre;
      std::string tipo;

   public:
      Animal(std::string n, std::string t) {
         nombre = n;
         tipo = t;
      }

      void setNombre(std::string n) {
         nombre = n;
      }

      void setTipo(std::string t) {
         tipo = t;
      }

      std::string getNombre() {
         return nombre;
      }

      std::string getTipo() {
         return tipo;
      }

      virtual void sonido() = 0; // método virtual puro para que cada subclase defina su propio sonido
};

class Mamifero : public Animal {
   private:
      int edad;

   public:
      Mamifero(std::string n, int e) : Animal(n, "Mamifero") {
         edad = e;
      }

      void setEdad(int e) {
         edad = e;
      }

      int getEdad() {
         return edad;
      }

      void sonido() {
         std::cout << "El mamifero hace un sonido" << std::endl;
      }
};

class Reptil : public Animal {
   private:
      bool venenoso;

   public:
      Reptil(std::string n, bool v) : Animal(n, "Reptil") {
         venenoso = v;
      }

      void setVenenoso(bool v) {
         venenoso = v;
      }

      bool getVenenoso() {
         return venenoso;
      }

      void sonido() {
         std::cout << "El reptil hace un sonido" << std::endl;
      }
};

class Ave : public Animal {
   private:
      std::string color_plumas;

   public:
      Ave(std::string n, std::string c) : Animal(n, "Ave") {
         color_plumas = c;
      }

      void setColorPlumas(std::string c) {
         color_plumas = c;
      }

      std::string getColorPlumas() {
         return color_plumas;
      }

      void sonido() {
         std::cout << "El ave hace un sonido" << std::endl;
      }
};

int main() {
   Mamifero perro("Perro", 5);
   Reptil cocodrilo("Cocodrilo", true);
   Ave canario("Canario", "Amarillo");

   std::cout << "Nombre: " << perro.getNombre() << std::endl;
   std::cout << "Tipo: " << perro.getTipo() << std::endl;
   std::cout << "Edad: " << perro.getEdad() << std::endl;

   std::cout << "Nombre: " << cocodrilo.getNombre() << std::endl;
   std::cout << "Tipo: " << cocodrilo.getTipo() << std::endl;
   std::cout << "Venenoso: " << cocodrilo.getVenenoso() << std::endl;

   std::cout << "Nombre: " << canario.getNombre() << std::endl;
   std::cout << "Tipo: " << canario.getTipo() << std::endl;
   std::cout << "Color de plumas
   