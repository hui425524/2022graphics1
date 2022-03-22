#include <GL/glut.h>///簡化程式
#include<stdio.h>
float x=150, y=150, z=0 , scale=1.0;
int oldX=0 ,oldY=0;
void display()

{

    glClearColor(0.5,0.5,0.5,1);///RGBA,A為半透明功能目前未開

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///畫圖前先清理畫面

    glPushMatrix();///備份矩陣

    glTranslatef( (x-150)/150.0 ,-(y-150)/150.0 , z);

    glScalef(scale, scale,scale);///縮放


    glColor3f(1,1,0);///設定色彩

    glutSolidTeapot(0.3);

    glPopMatrix();///還原
    glutSwapBuffers();///畫好後換出來



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


    glutInit( &argc, argv);///送給glutInit 初始化

    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );

    glutCreateWindow("第5周程式!");

    glutDisplayFunc(display);

    glutKeyboardFunc(keyboard);
    glutMotionFunc(motion);
    glutMouseFunc(mouse);
    glutMainLoop();



}
