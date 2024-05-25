/*=====================================================
        PYTHAGOREAN THEOREM SOLVER SUPRE 40000

Solving trigonometry easily and automatically in the 
command line  like its the 1990s.
=======================================================*/

# include <stdio.h>
# include <math.h>

#define M_PI 3.14159265358979323846

char close;

// for solving the angle of elevation
void angleOfElevation() {

    double opp;
    double adj;

    printf("Angle of Elevation Solver");
    printf("\n\nWhat is the measure of the side opposite of theta? ");
    scanf("%lf", &opp);
    printf("What is the measure of the side adjacent to theta? ");
    scanf("%lf", &adj);

    double arctan = atan2(opp, adj) * 180/M_PI;

    printf("\nANSWER: %lf Degrees", arctan);
}

// Solve for the hypotenuse using pythagorean theorem
void hypotenuse() {

    double sideA;
    double sideB;

    printf("Givens:\n");
    printf("side A: ");
    scanf("%lf", &sideA);
    printf("side B: ");
    scanf("%lf", &sideB);

    double sideC = (float) sqrt(sideA * sideA + sideB * sideB);

    printf("\nFormula:\n c^2=a^2+b^2\n");
    printf("\nANSWER: %lf", sideC);
}

// Solve for the missing leg using pythagorean theroem
void leg() {

    double sideA;
    double sideC;

    printf("Givens:\n");
    printf("side A: ");
    scanf("%lf", &sideA);
    printf("side C: ");
    scanf("%lf", &sideC);

    double difference = (float) sideC * sideC - sideA * sideA;
    double sideB = (float) sqrt(difference);

    printf("\nFormula:\n b^2=a^2-c^2");
    printf("\n\nANSWER: %lf", sideB);
}

int main() {

    int choice;

    printf("\n===========================\nTRIGOLATOR 4000\n===========================\n\n");
    printf("Enter the number of what you want to get solved:\n\n");
    printf("(1) Solve for hypotenuse\t(2) Solve for leg\n(3)Solve for Angle of Elevation (Angle missing)");
    printf("\n\nSo what? ");

    scanf("%d", &choice);
    if (choice == 1) 
    {
        hypotenuse();
        printf("\n\nPress any key then ENTER to exit app... ");
        scanf("%s", close);
    }
    else if (choice == 2)
    {
        leg();
        printf("\n\nPress any key then ENTER to exit app... ");
        scanf("%s", close);
    }
    else if (choice == 3)
    {
        angleOfElevation();
        printf("\n\nPress any key then ENTER to exit app... ");
        scanf("%s", close);
    }
    else 
    {
        printf("\nErmm.. What the sigma?");
        printf("\n\nPress any key then ENTER to exit app... ");
        scanf("%s", close);
    }
    
    return 0;
}


// Excuse for the bad code. It's my first time :point_right: :pleading_face: :point_left: