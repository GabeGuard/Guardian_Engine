#include <Engine.h>

class Sandbox : public Engine::Application {
public:
	int test = 1;
};

int main() {
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}