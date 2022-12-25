
typedef enum Size {
    Small,
    Medium,
    Large,
    ExtraLarge
} Size;

/// enum with values
typedef enum GradeThreshold {
    A = 80,
    B = 65,
    C = 50,
    D = 40,
    F = 30
} GradeThreshold;

void enumarations()
{
    printf("**********ENUMS(ENUMETATIONS)********** \n");
    Size shoeSize;
    shoeSize = Large;
    if (shoeSize == Large) {
        printf("This is a large shoe\n");
    }

    GradeThreshold grade = D;
    printf("Your gradle threshold is: %d\n", grade);
}
