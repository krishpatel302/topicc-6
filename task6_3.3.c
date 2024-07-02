#include <stdio.h>

main()

{

    float mathsmarks, englishmarks, sciencemarks,average;

    printf("enter mathsmarks (out of 100) ");
    scanf("%f", &mathsmarks);
    printf("enter englishmarks (out of 100) ");
    scanf("%f", &englishmarks);
    printf("enter sciencemarks (out of 100) ");
    scanf("%f", &sciencemarks);

    average = (mathsmarks + englishmarks + sciencemarks) / 3;

    printf("Average marks: %.2f\n", average);

}

