#include <GL/glut.h>///²�Ƶ{��
#include<stdio.h>
float x=150, y=150, z=0 , scale=1.0;
int oldX=0 ,oldY=0;
void display()

{

    glClearColor(0.5,0.5,0.5,1);///RGBA,A���b�z���\��ثe���}

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�e�ϫe���M�z�e��

    glPushMatrix();///�ƥ��x�}

    glTranslatef( (x-150)/150.0 ,-(y-150)/150.0 , z);

    glScalef(scale, scale,scale);///�Y��


    glColor3f(1,1,0);///�]�w��m

    glutSolidTeapot(0.3);

    glPopMatrix();///�٭�
    glutSwapBuffers();///�e�n�ᴫ�X��



}
void keyboard( unsigned char key, int mouseX,int mouseY)
{

}
void mouse( int button, int state,int mouseX,int mouseY)
{
    oldX = mouseX;
    oldY = mouseY;
}
void motion(int mouseX,int mouseY)
{
    if(mouseX-oldX > 0) scale *= 1.01;
    if(mouseX-oldX < 0) scale *= 0.99;
    ///x+=(mouseX-oldX); y+=(mouseY-oldY);
    oldX = mouseX;    oldY = mouseY;
    display();
}
int main (int argc, char** argv)

{


    glutInit( &argc, argv);///�e��glutInit ��l��

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );

    glutCreateWindow("��5�P�{��!");

    glutDisplayFunc(display);

    glutKeyboardFunc(keyboard);
    glutMotionFunc(motion);
    glutMouseFunc(mouse);
    glutMainLoop();



}
