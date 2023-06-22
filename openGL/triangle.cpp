#include<iostream>
#include<glad/glad.h>
#include <GLFW/glfw3.h>
#include<math.h>

const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";

int main()
{
	/* code */
	/*program initialization*/
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
	glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
	

	GLfloat vertices [] = 
	{
		-0.5f,-0.5f*float(sqrt(3))/3,0.0f,
		1.0f,-1.0f*float(sqrt(3))/3,0.0f,
		0.5f,1.0f*float(sqrt(3))/3,0.0f 
	};

	/*CREATING A GLFW WINDOW */
	GLFWwindow* window = glfwCreateWindow(640,640,"Triangle",NULL,NULL);
	/*Error Checking for the window*/
	if(window == NULL){

		std::cout<<"Unable to create window"<<std::endl;
		glfwTerminate();
		return -1;
	}
	/*Introduce the new window in the current context*/
	glfwMakeContextCurrent(window);
	/*LOAD GLAD*/
	gladLoadGL();
	/*specify the viewport of openGL*/
	glViewport(0,0,640,640);

	/*creating a vertex shader*/
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader,1,&vertexShaderSource,NULL);
	glCompileShader(vertexShader) ;

	/*creating a fragment shader*/
	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader,1,&fragmentShaderSource,NULL);
	glCompileShader(fragmentShader);

	/*wrap the shader in the shader program*/
	GLuint shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram,vertexShader);
	glAttachShader(shaderProgram,fragmentShader);
	glLinkProgram(shaderProgram);

	/*Delete Shader*/
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	/*VAO must be generated before VBO*/
	GLuint VAO;
	glGenVertexArrays(1,&VAO);
	/*Creata a  storage vertex buffer object*/
	GLuint VBO;
	glGenBuffers(1,&VBO);
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER,VBO);
	glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);
	
	glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER,0);
	glBindVertexArray(0);


	/*main while loop*/
	while(!glfwWindowShouldClose(window)){
		
		glClearColor(0.077f,0.13f,0.17f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES,0,3);
		glfwSwapBuffers(window);
		/*Take care of all events*/
		glfwPollEvents();
	}

	glDeleteVertexArrays(1,&VAO);
	glDeleteBuffers(1,&VBO);
	glDeleteProgram(shaderProgram);

	/*Destroy window*/
	glfwDestroyWindow(window);
	/*Terminate the program*/
	glfwTerminate();
	return 0;
}