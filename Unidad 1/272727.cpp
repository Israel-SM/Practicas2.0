#include"iostream"
using namespace std;
int main(){
	int tabla;
	std::cout << "ingresala tabla que quieras :/:";
	std::cin >> tabla;
	std::cout << "tabla del " << tabla <<":\n";
	for (int i = 1; i <=10; i++) {
		std::cout << tabla << " x " << i << tabla * i << "\n";
	}
	return 0;
}
