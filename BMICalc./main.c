//
//  main.c
//  BMICalc.
//
//  Created by John Lester Nuccio on 8/4/13.
//  Copyright (c) 2013 John Lester Nuccio. All rights reserved.
//

#include <stdio.h>

// Here is the declartion of the type Person
typedef struct {
    float heightInMeters;
    int weightIntKilos;
} Person;

float bodyMassIndex(Person p)
{
    return p.weightIntKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{
    Person person;
    person.weightIntKilos = 96;
    person.heightInMeters = 1.8;
    float bmi = bodyMassIndex(person);
    printf("Person has a BMI of %.2f\n", bmi);
    return 0;
}

