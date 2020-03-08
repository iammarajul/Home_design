#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
//    glClear (GL_COLOR_BUFFER_BIT);


//wall left-right
    glColor3ub (140,189,112);
    glBegin(GL_POLYGON);
    glVertex3f (0, 250, 0);
    glVertex3f (390, 350, 0);
    glVertex3f (390, 1000, 0);
    glVertex3f (0, 1000, 0);
    glEnd();

//wall right-left
    glColor3ub (121,163,97);
    glBegin(GL_POLYGON);
    glVertex3f (390,350, 0);
    glVertex3f (1000,250, 0);
    glVertex3f (1000, 1000, 0);
    glVertex3f (390, 1000, 0);
    glEnd();


//roof  top
    glColor3ub(19,69,32);
    glBegin(GL_POLYGON);
    glVertex3f (650, 1000, 0);
    glVertex3f (390, 950, 0);
    glVertex3f (180, 1000, 0);
    glEnd();

//wall right-right
    glColor3ub (165,255,133);
    glBegin(GL_POLYGON);
    glVertex3f (600, 300, 0);
    glVertex3f (1000, 250, 0);
    glVertex3f (1000, 1000, 0);
    glVertex3f (600, 1000, 0);
    glEnd();



    glBegin(GL_LINES);
//glBegin(GL_POINT_SIZE);
    glVertex3f (655, 850, 0);
    glVertex3f (645, 810, 0);
    glEnd();


// left wall - right
    glColor3ub(165,255,133);
    glBegin(GL_POLYGON);
    glVertex3f (200, 250, 0);
    glVertex3f (0, 250, 0);
    glVertex3f (0, 1000, 0);
    glVertex3f (200, 1000, 0);
    glEnd();


//floor - white
    glColor3ub(212,163,178);
    glBegin(GL_POLYGON);
    glVertex3f (0, 0, 0);
    glVertex3f (0, 250, 0);
    glVertex3f (390, 350, 0);
    glVertex3f (1000, 250, 0);
    glVertex3f (1000, 0, 0);
    glEnd();


//window left
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (230, 500, 0);
    glVertex3f (325, 520, 0);
    glVertex3f (325, 900, 0);
    glVertex3f (230, 900, 0);
    glEnd();


//ac front
    glColor3ub (120,144,156);
    glBegin(GL_POLYGON);
    glVertex3f (700-690, 850, 0);
    glVertex3f (850-690, 850, 0);
    glVertex3f (850-690, 900, 0);
    glVertex3f (700-690, 900, 0);
    glEnd();

//ac top
    glColor3ub (69,90,100);
    glBegin(GL_POLYGON);
    glVertex3f (710-690, 920, 0);
    glVertex3f (860-690, 920, 0);
    glVertex3f (850-690, 900, 0);
    glVertex3f (700-690, 900, 0);
    glEnd();

//ac bottom
    glColor3ub (69,90,100);
    glBegin(GL_POLYGON);
    glVertex3f (700-690, 850, 0);
    glVertex3f (850-690, 850, 0);
    glVertex3f (860-690, 840, 0);
    glVertex3f (710-690, 840, 0);
    glEnd();

//ac side
    glColor3ub (38,50,56);
    glBegin(GL_POLYGON);
    glVertex3f (860, 840, 0);
    glVertex3f (850, 850, 0);
    glVertex3f (850, 900, 0);
    glVertex3f (860, 920, 0);
    glEnd();

//window left - right inner
    glColor3ub (131,102,92);
    glBegin(GL_POLYGON);
    glVertex3f (310, 890, 0);
    glVertex3f (325, 900, 0);
    glVertex3f (325, 520, 0);
    glVertex3f (310, 525, 0);
    glEnd();

//window left - bottom
    glColor3ub (195,182,166);
    glBegin(GL_POLYGON);
    glVertex3f (230, 500, 0);
    glVertex3f (325, 520, 0);
    glVertex3f (310, 525, 0);
    glVertex3f (230, 510, 0);
    glEnd();

//window left - top
    glColor3ub (195,182,166);
    glBegin(GL_POLYGON);
    glVertex3f (230, 900, 0);
    glVertex3f (325, 900, 0);
    glVertex3f (310, 890, 0);
    glVertex3f (230, 890, 0);
    glEnd();


//wear drop front
    glColor3ub (89,39,25);
    glBegin(GL_POLYGON);
    glVertex3f (460, 660, 0);
    glVertex3f (470, 670, 0);
    glVertex3f (330, 670,0);
    glVertex3f (340, 660, 0);
    glVertex3f (340, 320, 0);
    glVertex3f (460, 320, 0);
    glEnd();

//wear drop front-drawer 1 - outer
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (455, 431, 0);
    glVertex3f (345, 431, 0);
    glVertex3f (345, 324, 0);
    glVertex3f (455, 324, 0);
    glEnd();

//wear drop front-drawer 1 - handel
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (410, 381, 0);
    glVertex3f (390, 381, 0);
    glVertex3f (390, 375, 0);
    glVertex3f (410, 375, 0);
    glEnd();

//wear drop front-drawer 2 - outer
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (455, 435, 0);
    glVertex3f (345, 435, 0);
    glVertex3f (345, 541, 0);
    glVertex3f (455, 541, 0);
    glEnd();

//wear drop front-drawer 2 - handel
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (410, 481, 0);
    glVertex3f (390, 481, 0);
    glVertex3f (390, 475, 0);
    glVertex3f (410, 475, 0);
    glEnd();
//wear drop front-drawer 3 - outer
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (455, 653, 0);
    glVertex3f (345, 653, 0);
    glVertex3f (345, 545, 0);
    glVertex3f (455, 545, 0);
    glEnd();

//wear drop front-drawer 3 - handel
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (410, 585, 0);
    glVertex3f (390, 585, 0);
    glVertex3f (390, 579, 0);
    glVertex3f (410, 579, 0);
    glEnd();

//wear drop side
    glColor3ub (39,32,21);
    glBegin(GL_POLYGON);
    glVertex3f (470, 670, 0);
    glVertex3f (500, 667, 0);
    glVertex3f (492, 657, 0);
    glVertex3f (492, 330, 0);
    glVertex3f (460, 320, 0);
    glVertex3f (460, 660, 0);
    glEnd();

//dressing table - front
    glColor3ub (98,47,29);
    glBegin(GL_POLYGON);
    glVertex3f (50, 150,0);
    glVertex3f (245, 230, 0);
    glVertex3f (245, 460, 0);
    glVertex3f (50, 400, 0);
    glEnd();

//dressing table - front  - left part
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (55, 160,0);
    glVertex3f (115, 185, 0);
    glVertex3f (115, 410, 0);
    glVertex3f (55, 390, 0);
    glEnd();
//dressing table - front  - left part - front handel
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (70, 305,0);
    glVertex3f (75, 305, 0);
    glVertex3f (75, 255, 0);
    glVertex3f (70, 255, 0);
    glEnd();

//dressing table - front  - left part - handel bottom
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (64, 262,0);
    glVertex3f (75, 262, 0);
    glVertex3f (75, 255, 0);
    glVertex3f (64, 255, 0);
    glEnd();

//dressing table - front  - left part - handel top
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (64, 305,0);
    glVertex3f (75, 305, 0);
    glVertex3f (75, 310, 0);
    glVertex3f (64, 310, 0);
    glEnd();

//dressing table side
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (50, 150, 0);
    glVertex3f (20, 170, 0);
    glVertex3f (20, 420, 0);
    glVertex3f (50, 400, 0);
    glEnd();

//dressing table - front  - middle part
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (120, 185,0);
    glVertex3f (180, 210, 0);
    glVertex3f (180, 430, 0);
    glVertex3f (120, 410, 0);
    glEnd();

//dressing table - front  - middle part - handel - top
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (135, 275,0);
    glVertex3f (140, 275, 0);
    glVertex3f (140, 323, 0);
    glVertex3f (135, 323, 0);
    glEnd();

//dressing table - front  - middle part - handel - down
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (130, 328,0);
    glVertex3f (140, 328, 0);
    glVertex3f (140, 323, 0);
    glVertex3f (130, 323, 0);
    glEnd();
//dressing table - front  - middle part - handel - top-down
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (130, 275,0);
    glVertex3f (140, 275, 0);
    glVertex3f (140, 280, 0);
    glVertex3f (130, 280, 0);
    glEnd();

//dressing table - front  - right part
    glColor3ub (42,23,15);
    glBegin(GL_POLYGON);
    glVertex3f (185, 213,0);
    glVertex3f (240, 235, 0);
    glVertex3f (240, 450, 0);
    glVertex3f (185, 430, 0);
    glEnd();

//dressing table - front  - right part - handel - top
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (200, 300,0);
    glVertex3f (205, 300, 0);
    glVertex3f (205, 343, 0);
    glVertex3f (200, 343, 0);
    glEnd();

//dressing table - front  - right part - handel - down
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (194, 300,0);
    glVertex3f (205, 300, 0);
    glVertex3f (205, 295, 0);
    glVertex3f (194, 295, 0);
    glEnd();
//dressing table - front  - right part - handel - top-down
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (194, 343,0);
    glVertex3f (205, 343, 0);
    glVertex3f (205, 348, 0);
    glVertex3f (194, 348, 0);
    glEnd();

//dressing table top
    glColor3ub (255, 191, 0);
    glBegin(GL_POLYGON);
    glVertex3f (20, 420,0);
    glVertex3f (50, 400, 0);
    glVertex3f (245,460, 0);
    glVertex3f (215,480, 0);
    glEnd();

//dressing table glass frame
    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (190, 470, 0);
    glVertex3f (48, 427, 0);
    glVertex3f (48, 770, 0);
    glVertex3f (190, 800, 0);
    glEnd();

//dressing table glass
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (180, 467, 0);
    glVertex3f (58, 430, 0);
    glVertex3f (58, 750, 0);
    glVertex3f (180, 777, 0);
    glEnd();



//dressing table glass frame-bottom
    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (190, 470, 0);
    glVertex3f (48, 427, 0);
    glVertex3f (48, 442, 0);
    glVertex3f (190, 485, 0);
    glEnd();



//bed
//bed head
    glColor3ub (77,40,26);
    glBegin(GL_POLYGON);
    glVertex3f (850, 600, 0);
    glVertex3f (850, 250, 0);
    glVertex3f (550, 300, 0);
    glEnd();



    glColor3ub (77,40,26);
    glBegin(GL_POLYGON);
    glVertex3f (550, 650, 0);
    glVertex3f (850, 250, 0);
    glVertex3f (550, 300, 0);
    glEnd();

//bed leg
    glColor3ub (88,40,19);
    glBegin(GL_POLYGON);
    glVertex3f (250, 200, 0);
    glVertex3f (550, 150, 0);
    glVertex3f (550, 50, 0);
    glVertex3f (250, 100, 0);
    glEnd();


//bed right side
    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (850, 250, 0);
    glVertex3f (550, 50, 0);
    glVertex3f (550, 150, 0);
    glVertex3f (850, 350, 0);
    glEnd();

//bed right side - box left
    glColor3ub (77,40,26);
    glBegin(GL_POLYGON);
    glVertex3f (695, 160, 0);
    glVertex3f (555, 65, 0);
    glVertex3f (555, 140, 0);
    glVertex3f (695, 235, 0);
    glEnd();

//bed right side - box left - handle

    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (650, 160, 0);
    glVertex3f (600, 125, 0);
    glVertex3f (600, 140, 0);
    glVertex3f (650, 175, 0);
    glEnd();

//bed right side - 2nd box
    glColor3ub (77,40,26);
    glBegin(GL_POLYGON);
    glVertex3f (845, 260, 0);
    glVertex3f (705, 165, 0);
    glVertex3f (705, 240, 0);
    glVertex3f (845, 335, 0);
    glEnd();

//bed right side - 2nd box - handle

    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (800, 260, 0);
    glVertex3f (750, 225, 0);
    glVertex3f (750, 240, 0);
    glVertex3f (800, 275, 0);
    glEnd();

//bed rig
//bed top right
    glColor3ub (0,100,0);
    glBegin(GL_POLYGON);
    glVertex3f (550, 150, 0);
    glVertex3f (850, 350, 0);
    glVertex3f (850, 400, 0);
    glVertex3f (550, 200, 0);
    glEnd();

//bed leg top
    glColor3ub (0,100,0);
    glBegin(GL_POLYGON);
    glVertex3f (250, 200, 0);
    glVertex3f (550, 150, 0);
    glVertex3f (550, 200, 0);
    glVertex3f (250, 250, 0);
    glEnd();

//bed sheet
    glColor3ub (0,255,127);
    glBegin(GL_POLYGON);
    glVertex3f (550, 200, 0.0);
    glVertex3f (250, 250, 0.0);
    glVertex3f (550, 450, 0.0);
    glVertex3f (850, 400, 0.0);
    glEnd();

//bed pillo

//bed pillo - left
    glColor3ub (196,151,196);
    glBegin(GL_POLYGON);
    glVertex3f (604, 375, 0.0);
    glVertex3f (500, 395, 0.0);
    glVertex3f (550, 435, 0.0);
    glVertex3f (655, 415, 0.0);
    glEnd();



//bed pillo right
    glColor3ub (196,151,196);
    glBegin(GL_POLYGON);
    glVertex3f (737, 360, 0.0);
    glVertex3f (624, 375, 0.0);
    glVertex3f (675, 410, 0.0);
    glVertex3f (790, 390, 0.0);
    glEnd();

//bed blanket
    glColor3ub(196,151,196);
    glBegin(GL_POLYGON);
    glVertex3f (550, 220, 0.0);
    glVertex3f (280, 260, 0.0);
    glVertex3f (400, 340, 0.0);
    glVertex3f (670, 300, 0.0);
    glEnd();

//window right
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (1000, 500, 0);
    glVertex3f (900, 500, 0);
    glVertex3f (900, 900,0);
    glVertex3f (1000,900, 0);
    glEnd();
    //window right-inner bottom
    glColor3ub (105,87,62);
    glBegin(GL_POLYGON);
    glVertex3f (1000, 500, 0);
    glVertex3f (900, 500, 0);
    glVertex3f (910, 510,0);
    glVertex3f (1000,510, 0);
    glEnd();
//window right-inner left
    glColor3ub (131,102,92);
    glBegin(GL_POLYGON);
    glVertex3f (900, 900, 0);
    glVertex3f (910, 890, 0);
    glVertex3f (910, 510,0);
    glVertex3f (900,500, 0);
    glEnd();

//window right-inner top
    glColor3ub (102,87,62);
    glBegin(GL_POLYGON);
    glVertex3f (900, 900, 0);
    glVertex3f (910, 890, 0);
    glVertex3f (1000, 890,0);
    glVertex3f (1000,900, 0);
    glEnd();



//bed side box front
    glColor3ub (60,23,9);
    glBegin(GL_POLYGON);
    glVertex3f (960, 410,0);
    glVertex3f (960, 120,0);
    glVertex3f (830, 135,0);
    glVertex3f (830, 415, 0);
    glVertex3f (820, 435,0);
    glVertex3f (970, 435, 0);
    glEnd();

//bed side box front - box bottom
    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (955, 260,0);
    glVertex3f (955, 130,0);
    glVertex3f (835, 145,0);
    glVertex3f (835, 270, 0);
    glEnd();

//bed side box front - box bottom - handel
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (907, 200,0);
    glVertex3f (907, 190,0);
    glVertex3f (883, 190,0);
    glVertex3f (883, 200, 0);
    glEnd();

//bed side box front - box top
    glColor3ub (128,55,36);
    glBegin(GL_POLYGON);
    glVertex3f (955, 265,0);
    glVertex3f (955, 400,0);
    glVertex3f (835, 405,0);
    glVertex3f (835, 275, 0);
    glEnd();

//bed side box front - box top - handel
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex3f (907, 337.5,0);
    glVertex3f (907, 327.5,0);
    glVertex3f (883, 327.5,0);
    glVertex3f (883, 337.5, 0);
    glEnd();
//bed side box side
    glColor3ub (113,55,34);
    glBegin(GL_POLYGON);
    glVertex3f (970, 435,0);
    glVertex3f (960, 410, 0);
    glVertex3f (960, 120,0);
    glVertex3f (985, 140, 0);
    glVertex3f (985, 430, 0);
    glVertex3f (995, 460, 0);
    glEnd();

//bed side box top
    glColor3ub (255, 191, 0);
    glBegin(GL_POLYGON);
    glVertex3f (820, 435,0);
    glVertex3f (970, 435,0);
    glVertex3f (995, 460,0);
    glVertex3f (845, 460,0);
    glEnd();

//bed side box lamp base
    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (875, 440,0);
    glVertex3f (915, 440,0);
    glVertex3f (910, 450,0);
    glVertex3f (890, 450,0);
    glEnd();

//bed side box lamp stand
    glColor3ub (77,49,26);
    glBegin(GL_POLYGON);
    glVertex3f (895, 445,0);
    glVertex3f (905, 445,0);
    glVertex3f (905, 550,0);
    glVertex3f (895, 550,0);
    glEnd();

//bed side box lamp stand
    glColor3ub (244,67,59);
    glBegin(GL_POLYGON);
    glVertex3f (875, 650,0);
    glVertex3f (925, 650,0);
    glVertex3f (935, 550,0);
    glVertex3f (865, 550,0);
    glEnd();




    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0, 1000.0, 0.0, 1000.0, 0.0, 1000.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200, 650);
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("Room");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}


