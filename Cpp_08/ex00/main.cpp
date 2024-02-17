#include "easyfind.hpp"

template <typename T>
int easyfind(T &container, int value) {

//C++'ta, bir template içinde başka bir template'in içindeki türleri kullanırken,
//bu türlerin adının önüne typename anahtar kelimesini eklemek gerekir.
    typename T::iterator i = std::find(container.begin(), container.end(), value );
    if (i == container.end())
        return -1;

    return std::distance(container.begin(), i);//başlangıc adresinden bulduğumuz i adresi arasında ne kadar değer varsa onu döner
}

int main() {

    std::vector<int> container;

    for (int i = 1; i <= 10; i++)
        container.push_back(i);
    
    for (int i = 0; i < 10; i++)
        cout << " " << container.at(i);
    cout << endl << endl;

    srand(time(NULL));
    int value = (rand() % 10) + 1;
    
    cout << "our value => "<< value ;
    if (easyfind(container, value) != -1)
        cout << " is founded to easily " << endl;
    else
        cout << " is not found by my easyfind dunction " << endl;
}