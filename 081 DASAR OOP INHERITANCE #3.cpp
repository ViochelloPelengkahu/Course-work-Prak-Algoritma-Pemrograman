#include <iostream>
using namespace std;
class Komputer {
  protected:
    string merk = "Lenovo";
    string memory = "8 GB";
    public:
    string processor = "AMD Ryzen 7";
};
class Laptop: public Komputer {
  public:
     string lihatSpec() {
      return "Merk: " + merk + ", processor: "+ processor +
             ", jumlah memory: " + memory;
    }
};
int main()
{
  Laptop laptopAndi;
    cout << laptopAndi.lihatSpec() << endl;
  return 0;
}
