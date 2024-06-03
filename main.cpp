#include <iostream>
#include <GLFW/glfw3.h>
#include <MAINconfig.h>

using namespace std;

int main(int argc, char* argv[]) {
#ifdef USE_ADDER
    cout << adder(1, 2) << endl;
#endif
    cout<<"Hello, World!\n";
    cout<<argv[0]<<" VERSION :"<<MAIN_VERSION_MAJOR <<"."<<MAIN_VERSION_MINOR <<endl;
    // GLFWwindow *window;
    // if( !glfwInit() )
    // {
    //     fprintf( stderr, "Failed to initialize GLFW\n" );
    //     exit( EXIT_FAILURE );
    // }

    // window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    // if (!window)
    // {
    //     fprintf( stderr, "Failed to open GLFW window\n" );
    //     glfwTerminate();
    //     exit( EXIT_FAILURE );
    // }
    
    // while( !glfwWindowShouldClose(window) )
    // {
    //     // Swap buffers
    //     glfwSwapBuffers(window);
    //     glfwPollEvents();
    // }
    return 0;
}