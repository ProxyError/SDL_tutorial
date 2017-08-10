#include <SDL.h>
#include <iostream>
#define SCREENWIDTH = 800;
#define SCREENHEIGHT = 600;

void Foo(int);
extern int i3;

int main(int argc, char* argv[])
{

	//SDL_Window* mWindow = NULL;
	//SDL_Surface* screenSurface = NULL;

	//if (SDL_Init(SDL_INIT_VIDEO) < 0) {
	//	printf("SDL initialization failed. Error: %s\n", SDL_GetError());
	//}
	//else {

	//}
	{
		unsigned u1 = 10, u2 = 42;
		std::cout << u1 - u2 << std::endl;
		std::cout << u2 - u1 << std::endl;

		int i1 = 10, i2 = 34;
		std::cout << u1 - i1 << std::endl;
		std::cout << i1 - u1 << std::endl;
	}
	
	int a = 100, sum = 0;
	for (int a = 0; a < 10; a++)
		sum += a;

	printf("%d    %d \n", sum, a);


	int &d = a;
	int *b = &d;
	int c = int(&b);
	int f = int(&d);
	Foo(d);
	std::cout << b << std::endl;
	Foo(c);
	Foo(f);

	return 0;



}

void Foo(int i) {
	std::cout << i << std::endl;

}

