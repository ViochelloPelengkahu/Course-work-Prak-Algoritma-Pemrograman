#include <iostream>
using namespace std;
class Komputer {
  protected:
    string processor;
    string merk;
    string memory;
};
class Laptop: public Komputer {
  public:
     //buat konstruktor Laptop dan variabelnya(merk, prosesor, memori) disini
     Laptop(string a, string b, string c) {
      merk = a;
      processor = b;
      memory = c;
    }
    string lihatSpec() {
      return "Merk: " + merk + ", processor: "+ processor +
             ", jumlah memory: " + memory;
    }
};
int main()
{
  Laptop laptopAndi("HP","Intel Core i7","16 GB");
  Laptop laptopRudi("Asus","Intel Core i3","4 GB");
  cout << laptopAndi.lihatSpec() << endl;
  cout << laptopRudi.lihatSpec() << endl;
  return 0;
}
