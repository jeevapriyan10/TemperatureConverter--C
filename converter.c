#include<stdio.h>
int converter();

int converter(){
    // Intro Part
    int choice;
    float celsius;
    float fahrenheit;
    float kelvin;
    float result;
    char options[][25] = {"1. Celsius > Fahrenheit","2. Fahrenheit > Celsius","3. Celsius > Kelvin","4. Kelvin > Celsius","5. Fahrenheit > Kelvin","6. Kelvin > Fahrenheit"};
    int size = sizeof(options)/sizeof(options[0]);

    // Display Part
    printf("Pick a Choice : \n");
    printf("-----------------------------------------\n");

    for(int i = 0;i < size;i++ ){
        printf("%s\n",options[i]);
    }

    printf("-----------------------------------------\n");
    printf("Your Choice : ");
    scanf("%d",&choice);
    printf("You Choice is : %s\n",options[choice -1]);

    //Conversion Part
    switch(choice){
        case 1:
            printf("-----------------------------------------\n");
            printf("Enter the Celsius : ");
            scanf("%f",&celsius);
            result = (celsius * 9/5) + 32; // operation
            printf("-----------------------------------------\n");
            printf("The Equivalent Fahrenheit is : %.2f°F",result);
            break;
        
        case 2:
            printf("-----------------------------------------\n");
            printf("Enter the Fahrenheit : ");
            scanf("%f",&fahrenheit);
            result = (fahrenheit - 32) * 5/9; // operation
            printf("-----------------------------------------\n");
            printf("The Equivalent Celsius is : %.2f°C",result);
            break;

        case 3:
            printf("-----------------------------------------\n");
            printf("Enter the Celsius : ");
            scanf("%f",&celsius);
            result = celsius + 273.15; // operation
            printf("-----------------------------------------\n");
            printf("The Equivalent Kelvin is : %.2fK",result);
            break;

        case 4:
            printf("-----------------------------------------\n");
            printf("Enter the Kelvin : ");
            scanf("%f",&kelvin);
            result = kelvin - 273.15; // operation
            printf("-----------------------------------------\n");
            printf("The Equivalent Celsius is : %.2f°C",result);
            break;

        case 5:
            printf("-----------------------------------------\n");
            printf("Enter the Fahrenheit : ");
            scanf("%f",&fahrenheit);
            result = (fahrenheit - 32) * 5/9 + 273.15; // operation
            printf("-----------------------------------------\n");
            printf("The Equivalent Kelvin is : %.2fK",result);
            break;

        case 6:
            printf("-----------------------------------------\n");
            printf("Enter the Kelvin : ");
            scanf("%f",&kelvin);
            result = (kelvin - 273.15) * 9/5 +32; // operation
            printf("-----------------------------------------\n");
            printf("The Equivalent Fahrenheit is : %.2f°F",result);
            break;
    }

}
int main(){
    char repeat;
    
    do{
        // continue
        converter();
        printf("\n\nWant to Do Again? (Y/N) : ");
        scanf("%s",&repeat);

    } while(repeat == 'Y');
    return 0;
}
