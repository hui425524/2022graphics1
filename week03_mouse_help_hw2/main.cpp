
#include <GL/glut.h>///²�Ƶ{��
#include<stdio.h>///printf()�L�F���

float mouseX=0,mouseY=0;
void myTeapot (float x,float y)
{
     glPushMatrix();///�ƥ��x�}(�ª���m)���ʷ|�ֿn�A���|�ק�x�}

    glTranslatef(x,y,0);

    glColor3f(1,1,0);///�]�w��m-����

    glutSolidTeapot(0.1);///�����j�p

    glPopMatrix();///�٭�x�}
}

void display()

{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�e�ϫe���M�z�e��

    myTeapot( (mouseX-150)/150.0 ,-(mouseY-150)/150.0);///�y�д���i��mouse�ഫ��3D�@��

    glutSwapBuffers();///�e�n�ᴫ�X��



}

void mouse (int button, int state, int x, int y)
{
   printf("%d %d %d %d\n",button,state,x,y);///
   mouseX=x,mouseY=y;
}

int main (int argc, char** argv)

{


    glutInit( &argc, argv);///�e��glutInit ��l��

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );

    glutCreateWindow("��3�P�{��!");



    glutDisplayFunc(display);

    glutMouseFunc(mouse);///�ƹ��ƥ�

    glutMainLoop();


}





