#include <GL/glut.h>///²�Ƶ{��

#include<stdio.h>

void display()



{



    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�e�ϫe���M�z�e��



    glColor3f(1,1,0);///�]�w��m



    glutSolidTeapot(0.3);



    glutSwapBuffers();///�e�n�ᴫ�X��



}

void keyboard( unsigned char key, int x,int y)

{

    printf("�A���U�F %c �b %d %d �y��\n",key,x,y);

}



int main (int argc, char** argv)



{

    glutInit( &argc, argv);///�e��glutInit ��l��



    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );



    glutCreateWindow("��5�P�{��!");



    glutDisplayFunc(display);



    glutKeyboardFunc(keyboard);



    glutMainLoop();



}
