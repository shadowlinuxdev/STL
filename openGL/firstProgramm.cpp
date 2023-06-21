#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main(){
	
	glfwInit();/*Initialization*/
	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);/*MAJOR VERSION OF OPENGL*/
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);/*MINOR VERSION OF OPENGL*/
	/*mention that we are using COER profile in OPENGL*/
	glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
	
	/*creating window object with width=640, height=640*/
	GLFWwindow* window = glfwCreateWindow(640,640,"First Window",NULL,NULL);
	/*Checking if the window is created or not*/
	if(window == NULL){
		std::cout << "Unable to create the window"<< std::endl;
		glfwTerminate();
		return -1;
	}
	/*use the window in the current context*/
	glfwMakeContextCurrent(window);
	/*load GLAD to do some color and it configures OPENGL*/
	gladLoadGL();
	glViewport(0,0,640,640);	/*area to render for openGL x=0 , y=0 , x =640,y=640*/
	/*Specify the color*/
	glClearColor(0.77f,0.13f,0.17f,1.0f);
	/*Clean the back buffer and assign the new color*/
	glClear(GL_COLOR_BUFFER_BIT);
	/*Swap the back buffer with the front buffer*/
	glfwSwapBuffers(window);
	/*window event that will go on loop and not terminate until close pressed*/
	while(!glfwWindowShouldClose(window)){
		/*Take Care of all GLFW events*/
		glfwPollEvents();
	}

	glfwDestroyWindow(window);/*Destroy the window*/
	glfwTerminate();/*Terminate the prog.*/
	return 0;
}
