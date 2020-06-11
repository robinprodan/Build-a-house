#include <GL/gl.h>

#include <GL/glut.h>

void display(void)

{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i (100, 200);
    glVertex2i (200, 275);
    glVertex2i (300, 200);

    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i (100, 50);
    glVertex2i (100, 200);
    glVertex2i (300, 200);
    glVertex2i (300, 50);

    glEnd();

    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2i (175, 50);
    glVertex2i (175, 175);
    glVertex2i (225, 175);
    glVertex2i (225, 50);

    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i (115, 100);
    glVertex2i (115, 160);
    glVertex2i (160, 160);
    glVertex2i (160, 100);

    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i (240, 100);
    glVertex2i (240, 160);
    glVertex2i (285, 160);
    glVertex2i (285, 100);

    glEnd();
    glutSwapBuffers ();

}

void init (void)

{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(0.0, 400.0, 0.0, 400.0, -1.0, 1.0);

}


int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize (800, 500);

    glutInitWindowPosition (100, 100);

    glutCreateWindow ("house");

    init ();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
