#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265

#define SIZE 10

//gravitation
#define G 0.0000000000667

// e = 1.6 * 10^-19
#define EE 0.00000000000000000016

//planks constant
#define H 0.000000000000000000000000000000000662607015

// Mathematics
void basic_calculator(void);
void triangle(void);
void angles(void);
void trigno_123(void);
void circle_1(void);
void series(void);
void area_of_2d(void);
void mensuration_3d(void);
void roots_of_quad(void);
void linear_equation(void);
void matrix_all(void);
void factorization(void);
void coordinate_geometry(void);
void lines(void);


// Physics
void fluid_mechanics(void);
void electrostats(void);
void rotational_motion(void);
void gravitation(void);
void kinematics(void);
void shm(void);
void current_electricity(void);
void circular_motion(void);


int main() {
	int opt, topic,subject;
 printf(" \t\t\t\t\t\t   Subjects: 🐸 \n 1. 🧮 Mathematics🧮   \t\t\t\t\t\t   🧲 2.Physics🧲 \n");
 printf("\nEnter your choice:- ");
 scanf("%d",&subject);
 if(subject==1)
 {
	do {
    
		printf("Select Topic :\n");
		printf("🎃1. Basic calculator   🎃   2. Triangle\n🎃3. Angles             "
			   "🎃   4. Trignometry\n🎃5. Circle.            🎃   6. Series.\n🎃7. "
			   "2D shapes.         🎃   8. 3D shapes\n🎃9.Quadratics equation 🎃  "
			   " 10. Linear equation\n🎃11. Matrix.           🎃   12. factorization \n🎃13.Coord Geometry     🎃   14. lines\n");
         printf("\nEnter your choice:- ");
		scanf("%d", &topic);
		switch (topic) {
		case 1:
			basic_calculator();
			break;
		case 2:
			triangle();
			break;
		case 3:
			angles();
			break;
		case 4:
			trigno_123();
			break;
		case 5:
			circle_1();
			break;
		case 6:
			series();
			break;
		case 7:
			area_of_2d();
			break;
		case 8:
			mensuration_3d();
			break;
		case 9:
			roots_of_quad();
			break;
		case 10:
			linear_equation();
			break;
		case 11:
			matrix_all();
			break;
    case 12: 
      factorization();
      break;
    case 13:
      coordinate_geometry();
      break;
      case 14: 
      lines();
      break;
		default:
			printf("Enter Again!");
			break;
		}
		printf("\n🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴");
		printf("\n🔴 🔴 🔴 🔴 🔴 🔴 Select an option: 🔴 🔴 🔴 🔴 🔴 🔴");
		printf("\n🔴       1. Continue          2. Stop.             🔴 ");
		printf("\n🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴\n");
		scanf("%d", &opt);
	} while (opt == 1);
 }
  else if (subject==2)
 {
   do{
      printf("Select Topic:\n");
      printf("🎃1. Kinematics\t.       🎃   2. Gravitation\n🎃3. Electrostics\t    🎃   4. Rotational Motion\n🎃5. Circular Motion\t🎃   6. Current Electricity\n🎃7. SHM.          \t    🎃   8. Fluid Mechanics\n");
      printf("\nEnter your choice:- ");
      scanf("%d",&topic);
      switch(topic)
      {
        case 1:
        kinematics();
        break;
        
        case 2: 
        gravitation(); 
        break;
        
        case 3: 
        electrostats(); 
        break;
        
        case 4: 
        rotational_motion(); 
        break;
        
        case 5:
        circular_motion();
        break;
        
        case 6:
        current_electricity();
        break;

        case 7:
        shm();
        break;

        case 8: 
        fluid_mechanics(); 
        break;
      }
      printf("\n🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴");
		printf("\n🔴 🔴 🔴 🔴 🔴 🔴 Select an option: 🔴 🔴 🔴 🔴 🔴 🔴");
		printf("\n🔴       1. Continue          2. Stop.             🔴 ");
		printf("\n🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴 🔴\n");
		scanf("%d", &opt);
   }while(opt==1);
 }

}

void basic_calculator(void) {
	float p, q, r;
	int operation;
	printf("Select The Operation: ");
	printf("\n 1:Addition");
	printf("\n 2:Subtraction");
	printf("\n 3:Multiplication");
	printf("\n 4:Division");
	printf("\n 5:Factorial");
	printf("\n 6:Exponential Power \n");

	scanf("%d", &operation);
	switch (operation) {
	case 1: // For Addition
		printf("\nEnter Two Numbers: ");
		scanf("%f%f", &p, &q);
		r = p + q;
		printf("Addition of Numbers:%.2f\n", r);
		break;

	case 2: // For Subtraction
		printf("\nEnter Two Numbers: ");
		scanf("%f%f", &p, &q);
		r = p - q;
		printf("Subtraction of Numbers:%.2f\n", r);
		break;

	case 3: // For Multiplication
		printf("\nEnter Two Numbers: ");
		scanf("%f%f", &p, &q);
		r = p * q;
		printf("Multiplication of Numbers:%.2f\n", r);
		break;

	case 4: // For Division
		printf("\nEnter Two Numbers: ");
		scanf("%f%f", &p, &q);
		r = p / q;
		printf("Division of Numbers:%.2f\n", r);
		break;

	case 5: //  For  Factorial
		printf("\nEnter A Number: ");
		int i = 1, fact = 1, a;
		scanf("%d", &a);
		while (i <= a) {
			fact = fact * i;
			i++;
		}
		printf("Factorial of Number:%d\n", fact);
		break;

	case 6: // For Exponential Power
		printf("Enter Index and Power: ");
		scanf("%f%f", &p, &q);
		float r = p;
		for (i = 1; i <= q - 1; i++)
			r *= p;
		printf("Exponential Power :%.2f\n", r);
		break;

	default:
		printf("Sorry You Have Choosen Wrong Options .");
	}
}

void circle_1(void) {
	int sub, select;
	float radius, area, Circumference;
	printf("Select suboption : ");
	printf("\n1] Area of circle\n2] circumference of circle.");
	scanf("%d", &sub);
	switch (sub) {
	case 1:
		printf("Select the option as per your requirement : \n1.To find "
			   "area\n2.To find the radius");
		scanf("%d", &select);
		switch (select) {
		case 1:
			printf("Enter the radius of circle : ");
			scanf("%f", &radius);
			area = 3.14 * radius * radius;
			printf("The area of the circle is %f", area);
			break;

		case 2:
			printf("Enter the area of the circle : ");
			scanf("%f", &area);
			radius = sqrt(area / 3.14);
			printf("\nThe radius of the circle is : %f", radius);
			break;
      default:
		printf("Sorry You Have Choosen Wrong Options .");
		}

	case 2:
		printf("Select the option as per your requirementy : \n1.To find "
			   "circumference\n2.To find radius");
		scanf("%d", &select);
		switch (select) {
		case 1:
			printf("Enter the radius of circle : ");
			scanf("%f", &radius);
			Circumference = 2 * 3.14 * radius;
			printf("\nThe Circumference of the circle is : %f", Circumference);
			break;

		case 2:
			printf("Enter the Circumference of the circle : ");
			scanf("%f", &Circumference);
			radius = Circumference / (2 * 3.14);
			printf("\nThe radius of the circle is : %f", radius);
			break;
      default:
		printf("Sorry You Have Choosen Wrong Options .");
		}
    default:
		printf("Sorry You Have Choosen Wrong Options .");
	}
}

void series(void) {
	// for AP
	float first_term, second_term, last_term, common_diff, sum, nth_term;
	int sub, select, no_of_terms;
	// for GP
	int a, n, r, temp, i; // Variable Declaration
	float sum_1 = 0;
	// for HP
	int terms, first, denominator, diff;
	float sum1 = 0.0;

	printf("\nSelect subtopic");
	printf("\n1] Arithmetic progression.\n2] Geometric progression.\n3] "
		   "Harmonic progression");
       printf("\nEnter your choice:- ");
	scanf("%d", &sub);
	switch (sub) {
	case 1:
		printf("Select the option as per your requirement : \n1.To find the "
			   "sum of series.\n2.To find the nth term of the series.");
		scanf("%d", &select);
		switch (select) {
		case 1:
			printf("\nEnter the first term : ");
			scanf("%f", &first_term);
			printf("\nEnter the second term : ");
			scanf("%f", &second_term);
			printf("\nTotal number of terms : ");
			scanf("%d", &no_of_terms);
			common_diff = second_term - first_term;
			sum = (no_of_terms *
				   (2 * first_term + (no_of_terms - 1) * common_diff)) /
				2;
			printf(
				"The sum of %d terms of the series is : %f", no_of_terms, sum);
			break;

		case 2:
			printf("\nEnter the first term : ");
			scanf("%f", &first_term);
			printf("\nEnter the second term : ");
			scanf("%f", &second_term);
			printf("\nTotal number pf terms : ");
			scanf("%d", &no_of_terms);
			common_diff = second_term - first_term;
			nth_term = first_term + (no_of_terms - 1) * common_diff;
			printf("\nThe nth term of the series is : %f", nth_term);
			break;
		}

	case 2:
		printf("\nEnter First Number of an G.P Series:  ");
		scanf("%d", &a); // 1First term initialization
		printf("\nEnter the Total Numbers in this G.P Series:  ");
		scanf("%d", &n); // Total Numbers of terms initialization
		printf("\nEnter the Common Ratio:  ");
		scanf("%d", &r); // Common term initialization
		temp = a;
		// Print the series
		printf("The G.P Series is  :  ");
		for (i = 0; i < n; i++) {
			printf("%d  ", temp);
			sum1 = sum1 + temp; // Update the sum in each iteration
			temp = temp * r;	// Update the term in each iteration
		}
		// Print the sum
		printf("\nThe Sum of Geometric Progression Series =  %f\n", sum1);
		break;
	case 3:
		printf("Enter the number of terms in HP series\n");
		scanf("%d", &terms);

		printf("Enter denominator of first term and common difference of HP "
			   "series\n");
		scanf("%d %d", &first, &diff);

		/* print the series and add all elements to sum */
		denominator = first;
		printf("HP SERIES\n");
		for (i = 0; i < terms; i++) {
			printf("1/%d ", denominator);
			sum1 += 1 / (float)denominator;
			denominator += diff;
		}

		printf("\nSum of the HP series till %d terms is %f\n", terms, sum1);
		// getch();
	}
}
void triangle(void) {
	int sub, given;
	float side1, side2, side3, perimeter;
	float height, base, area;
	float half_perimeter, s;
	printf("Select Subtopic:");
	printf("\n1] Area of triangle.\n2]Perimeter\n");
	scanf("%d", &sub);
	switch (sub) {
	case 1:
		printf("What has been provided in the question?\n1.Height and Base of "
			   "triangle to find Area.\n2.Area and Base of triangle to find "
			   "Height.\n3.Height and Area of triangle to find Base.\n4.Three "
			   "sides to find Area.(Heron's Formula)\n");
		scanf("%d", &given);
		switch (given) {
		case 1:
			printf("Enter Height:");
			scanf("%f", &height);
			printf("Enter Base:");
			scanf("%f", &base);
			area = (base * height) / 2.00;
			printf("Area of triangle is %.2f", area);
			break;

		case 2:
			printf("Enter Area:");
			scanf("%f", &area);
			printf("Enter Base:");
			scanf("%f", &base);
			height = (2.00 * area) / base;
			printf("Height of triangle is %.2f", height);
			break;
		case 3:
			printf("Enter Height:");
			scanf("%f", &height);
			printf("Enter Area:");
			scanf("%f", &area);
			base = (2.00 * area) / height;
			printf("Base of triangle is %.2f", base);
			break;
		case 4:
			printf("Enter three sides of triangle:\n");
			scanf("%f%f%f", &side1, &side2, &side3);
			half_perimeter = (side1 + side2 + side3) / 2;
			s = half_perimeter;
			area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
			printf("Area of triangle is %.2f", area);
			break;
		}

		break;
	case 2:
		printf("Enter the length of all three sides of the triangle:\n");
		scanf("%f%f%f", &side1, &side2, &side3);
		perimeter = side1 + side2 + side3;
		printf("perimeter of triangle: %.2f\n", perimeter);
		break;
	}
}

void angles(void) {
	float first_angle, second_angle, compli, suppli, sum;
	int sub;
	printf("\nSelect subtopic : ");
	printf("\n1] Type of angle.\n2] Complimentary angle.\n3] Supplimentary "
		   "angle.\n4]Interior angles");
	scanf("%d", &sub);
	switch (sub) {
	case 1:
		printf("\nEnter the angle : ");
		scanf("%f", &first_angle);
		if (first_angle < 90) {
			printf("\nACUTE ANGLE");
		} else if (first_angle == 90) {
			printf("RIGHT ANGLE");
		} else if (first_angle) {
			printf("\nOBTUSE ANGLE");
		}
		break;

	case 2:
		printf("Enter the angle to find the complimenatry of : ");
		scanf("%f", &first_angle);
		if (first_angle < 90) {
			compli = 90 - first_angle;
			printf(
				"\nThe complimentary angle of %.2f° is %.2f° ",
				first_angle,
				compli);
		} else {
			printf("\nINVALID INPUT");
			printf("\nThe angle should be acute i.e. less than 90°");
		}
		break;

	case 3:
		printf("Enter the angle to find the supplimentary of : ");
		scanf("%f", &first_angle);
		if (first_angle < 180) {
			suppli = 180 - (first_angle);
			printf(
				"The supplimenary angle of %.2f° is : %.2f°",
				first_angle,
				suppli);
		} else {
			printf("INVALID INPUT");
			printf("\nThe angle should be less than 180°");
		}
		break;

	case 4:
		printf("Enter two angles to find whether they are a pair of interior "
			   "angles or not : ");
		scanf("%f%f", &first_angle, &second_angle);
		sum = first_angle + second_angle;
		if (sum == 180) {
			printf("\nPAIR OF INTERIOR ANGLES");
		} else
			printf("\nNOT A PAIR OF INTERIOR ANGLES");
	}
}

void trigno_123(void) {
	int sub;
	double angle, ret, val, rev;
	printf("Select subtopic:");
	printf(
		"1]Sine of Angle\n2]Cosine of Angle\n3]Tangent of Angle.\n4]cotanget "
		"of Angle\n5]secant of Angle \n6]cosecant of Angle\n");
	scanf("%d", &sub);
	switch (sub) {
	case 1:
		printf("Enter the angle to find its sine:- ");
		scanf("%lf", &angle);
		val = PI / 180;
		ret = sin(angle * val);
		printf("The sine of %.2lf degrees is %.2lf ", angle, ret);
		break;

	case 2:
		printf("Enter the angle to find its cosine:- ");
		scanf("%lf", &angle);
		val = PI / 180;
		ret = cos(angle * val);
		printf("The cosine of %.2lf degrees is %.2lf ", angle, ret);
		break;

	case 3:
		printf("Enter the angle to find its tan:- ");
		scanf("%lf", &angle);
		val = PI / 180;
		ret = tan(angle * val);
		printf("The tanget of %.2lf degrees is %.2lf ", angle, ret);
		break;

	case 4:
		printf("Enter the angle to find its cot:- ");
		scanf("%lf", &angle);
		val = PI / 180;
		ret = tan(angle * val);
		rev = 1 / ret;
		printf("The cotanget of %.2lf degrees is %.2lf ", angle, rev);
		break;

	case 5:
		printf("Enter the angle to find its sec:- ");
		scanf("%lf", &angle);
		val = PI / 180;
		ret = cos(angle * val);
		rev = 1 / ret;
		printf("The secant of %.2lf is degrees %.2lf ", angle, rev);
		break;

	case 6:
		printf("Enter the angle to find its cosec:- ");
		scanf("%lf", &angle);
		val = PI / 180;
		ret = sin(angle * val);
		rev = 1 / ret;
		printf("The cosecant of %.2lf degrees is %.2lf ", angle, rev);
		break;
	}
}

void area_of_2d(void) {
	int area_1;
	printf("1] PERIMETER        2] AREA");
	int sub1;
	scanf("%d", &sub1);
	switch (sub1) {
		///////////////////////// perimeter OF 2d /////////////////////////////

	case 1:
		printf("1]circle 2]triangle 3]Trapezium 4] rectangle 5]square 6] "
			   "parallelogram 7]regular polygon");
		int a, b, r, h, b1, sub;
		float peri;
		scanf("%d", &sub);
		switch (sub) {
		case 1: // circle
			printf("Enter Radius of circle:- ");
			scanf("%d", &r);
			peri = 2 * PI * r;
			printf("the perimeter of the cirlce of radius %d is %.2f", r, peri);
			break;
		case 2: // traingle
			printf("Enter length of all sides of triangle :- ");
			scanf("%d%d%d", &a, &b, &b1);
			peri = a + b + b1;
			printf(
				"the perimeter of the traingle of side lenghts %d,%d & %d is "
				"%.2f\n",
				a,
				b,
				b1,
				peri);
			break;
		case 3: // trapezium
			printf("Enter length of all sides of trapezium :- ");
			scanf("%d%d%d%d", &a, &b, &b1, &r);
			peri = a + b + b1 + r;
			printf(
				"the perimeter of the trapezium of side lenghts %d,%d,%d & %d "
				"is %.2f\n",
				r,
				a,
				b,
				b1,
				peri);
			break;

		case 4: // reactangle
			printf("Enter the length of adjacent sides of rectangle : - ");
			scanf("%d%d", &a, &b);
			peri = 2 * (a + b);
			printf(
				"the perimeter of the reactangle of the adjacent sides of "
				"rectangle %d & %d is    %.2f : - ",
				a,
				b,
				peri);
			break;

		case 5: // sqaure
			printf("Enter the length of side of square : - ");
			scanf("%d", &a);
			peri = 4 * a;
			printf(
				"the perimeter of the sqaure of side length %d is   %.2f : - ",
				a,
				peri);
			break;

		case 6: // parallelgram
			printf("Enter the length of height and base of parallelogram : - ");
			scanf("%d%d", &a, &b);
			peri = 2 * (a + b);
			printf(
				"the perimeter of the parallelogram of the height and base of "
				"length %d & %d is    %.2f : - ",
				a,
				b,
				peri);
			break;

		case 7: // regular polygon
			printf("enter the number of side of regular polygon:-");
			scanf("%d", &b1);
			printf("enter the equivalent length- ");
			scanf("%d", &a);
			for (int i = 1; i <= b1; i++) {
				peri += a;
			}
			printf("%.2f", peri);
		}
		break;
	///////////////////////// AREA OF 2d /////////////////////////////
	case 2:
		printf("1]circle 2]triangle 3]Trapezium 4] rectangle 5]square 6] "
			   "ellipse 7]parallelogram");

		float area_1;
		scanf("%d", &sub);
		switch (sub) {
		case 1: // circle
			printf("Enter Radius of circle:- ");
			scanf("%d", &r);
			area_1 = PI * r * r;
			printf("the area of the cirlce of radius %d is %.2f", r, area_1);
			break;

		case 2: // triangle
			printf("Enter base and height of triangle:- ");
			scanf("%d%d", &b1, &h);
			area_1 = (b1 * h) / 2;
			printf(
				"the area of the traingle of base %d and height %d is %.2f\n",
				b1,
				h,
				area_1);
			break;

		case 3: // trapezium
			printf("Enter legth of parallel side (a & b) and height(h):- ");
			scanf("%d%d%d", &a, &b, &h);
			area_1 = ((a + b) * h) / 2;
			printf(
				"the area of the legth of parallel side %d and  %d and height "
				"%d is %.2f\n",
				a,
				b,
				h,
				area_1);
			break;

		case 4: // rectangle
			printf("Enter the length of adjacent sides of rectangle : - ");
			scanf("%d%d", &a, &b);
			area_1 = a * b;
			printf(
				"the area of the reactangle of the adjacent sides of rectangle "
				"%d & %d is    %.2f : - ",
				a,
				b,
				area_1);
			break;

		case 5: // sqaure
			printf("Enter the length side of square : - ");
			scanf("%d", &a);
			area_1 = a * a;
			printf(
				"the area of the sqaure of side length %d is    %.2f : - ",
				a,
				area_1);
			break;

		case 6: // ellipse
			printf("Enter the length of major and minor axis : - ");
			scanf("%d%d", &a, &b);
			area_1 = PI * a * b;
			printf(
				"the area of the ellipse of major and minor of length %d & %d "
				"is    %.2f : - ",
				a,
				b,
				area_1);
			break;

		case 7: // parallelogram.
			printf("Enter base and vertical height of paralleogram:- ");
			scanf("%d%d", &b1, &h);
			area_1 = b1 * h;
			printf(
				"the area of the parallelogram of base %d and vertical height "
				"%d is %.2f\n",
				b1,
				h,
				area_1);
			break;
		}
	}
}

void mensuration_3d(void) {
	int choice, sub;
	float l, b, h, sur_area, vol, r;

	printf("1] Surface Area\n2] Volume");
	printf("\nEnter your choice");
	scanf("%d", &choice);
	switch (choice) {
	case 1:

		printf("1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5.Cone");
		printf("Give your preferred choice : ");
		scanf("%d", &sub);
		switch (sub) {
		case 1:
			printf("Enter the edge of cube : ");
			scanf("%f", &l);
			sur_area = 6 * l * l;
			printf("The surafce of cube is : %f", sur_area);
			break;

		case 2:
			printf("Enter the lenght of the cuboid : ");
			scanf("%f", &l);
			printf("Enter the height of the cuboid : ");
			scanf("%f", &h);
			printf("Enter the breadth of the cuboid : ");
			scanf("%f", &b);
			sur_area = 2 * (l * b + b * h + h * l);
			printf("The surface area of cuboid is : %f", sur_area);
			break;

		case 3:
			printf("Enter the radius of the sphere : ");
			scanf("%f", &r);
			sur_area = 4 * PI * r * r;
			printf("The surafce area of sphere is : %f", sur_area);
			break;

		case 4:
			printf("Enter the height of the cylinder : ");
			scanf("%f", &h);
			printf("Enter the radius of circular base of the cylinder : ");
			scanf("%f", &r);
			sur_area = 2 * PI * r * (r + h);
			printf("The surface area of the cylinder is : %f", sur_area);
			break;

		case 5:
			printf("Enter the radius of circular base of the cone : ");
			scanf("%f", &r);
			printf("Enter the slant height of the cone : ");
			scanf("%f", &l);
			sur_area = 4 * PI * r * r;
			printf("The surface area of cone is : %f", sur_area);
			break;
		}

	case 2:

		printf("1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5.Cone");
		printf("\nGive your preferred choice : ");
		scanf("%d", &sub);
		switch (sub) {
		case 1:
			printf("\nEnter the edge of the cube : ");
			scanf("%f", &l);
			vol = l * l * l;
			printf("\nThe volume of cube is : %f", vol);
			break;

		case 2:
			printf("\nEnter the length of the cuboid : ");
			scanf("%f", &l);
			printf("\nEnter the height of the cuboid : ");
			scanf("%f", &h);
			printf("\nEnter the breadth of the cuboid : ");
			scanf("%f", &b);
			vol = l * b * h;
			printf("\nThe volume of cuboid is : %f", vol);
			break;

		case 3:
			printf("\nEnter the radius of sphere : ");
			scanf("%f", &r);
			vol = (4 * PI * r * r * r) / 3;
			printf("\nThe volume of sphere is : %f",vol);
			break;

		case 4:
			printf("\nEnter The radius of cylinder : ");
      scanf("%f",&r);
      printf("\nEnter the height of cylinder : ");
      scanf("%f",&h);
      vol = PI * r * r * h;
      printf("\nThe volume of cylinder is : %f",vol);
      break;

    case 5:
      printf("\nEnter the radius of base of cone : ");
      scanf("%f",&r);
      printf("\nEnter the height of the cone : ");
      scanf("%f",&h);
      vol = ( PI * r * r * h)/3;
      printf("\nThe volume of cone is : %f",vol);
      break;

		}
	}
}

void roots_of_quad(void) {
	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	printf("Quadrictic of form - ax2 + bx + c = 0, where a, b and c are real "
		   "numbers and a != 0");
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	// condition for real and different roots
	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}

	// condition for real and equal roots
	else if (discriminant == 0) {
		root1 = -b / (2 * a);
		root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf;", root1);
	}

	// if roots are not real
	else {
		realPart = -b / (2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		printf(
			"root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi",
			realPart,
			imagPart,
			realPart,
			imagPart);
	}
}

void linear_equation(void) {
	float a1, b1, c1, a2, b2, c2;
	printf("Enter values of a1,b1,c1 for equation 1 (a1x +b1y +c1 =0)\n");
	scanf("%f%f%f", &a1, &b1, &c1);
	printf("Enter values of a2,b2,c2 for equation 1 (a2x +b2y +c2 =0)\n");
	scanf("%f%f%f", &a2, &b2, &c2);
	if (a1 / a2 == b1 / b2 && a1 / a2 != c1 / c2) {
		printf("Lines formed by these equation are parallel and have no  "
			   "solution.");
	} else if (a1 / a2 == b1 / b2 && a1 / a2 == c1 / c2) {
		printf("Lines formed by these equation are overlaping and have "
			   "infinite solution.");
	} else {
		float x = ((b1 * c2) - (b2 * c1)) / ((a1 * b2 - a2 * b1));
		float y = ((c1 * a2) - (c2 * a1)) / ((a1 * b2 - a2 * b1));
		printf("Unique Solution is (%.3f,%.3f)", x, y);
	}
}

void matrix_all(void) {
	printf("MATRIX OPTIONS :- ");
	printf("1] multiplication 2] addition 3] subtraction 4] "
		   "eigen values and vectors");
	// for multi
  int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
  //  for add
  int m, n, c1, d, first[10][10], second[10][10], sum[10][10];
	// eigen v and v.
  float a1[SIZE][SIZE], x[SIZE],x_new[SIZE];
	 float temp, lambda_new, lambda_old, error;
	 int step=1;
  
  int sub4;

printf("\nEnter your choice:- ");

	scanf("%d", &sub4);
	switch (sub4) {
	case 1: // multiplication of 2 matrix.
			// system("cls");
		printf("enter the number of row=");
		scanf("%d", &r);
		printf("enter the number of column=");
		scanf("%d", &c);
		printf("enter the first matrix element=\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		printf("enter the second matrix element=\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				scanf("%d", &b[i][j]);
			}
		}

		printf("multiply of the matrix=\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				mul[i][j] = 0;
				for (k = 0; k < c; k++) {
					mul[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		// for printing result
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				printf("%d\t", mul[i][j]);
			}
			printf("\n");
		}
		break;

	case 2: // addition
  printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c1 = 0; c1 < m; c1++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c1][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c1 = 0; c1 < m; c1++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c1][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c1 = 0; c1 < m; c1++) {
      for (d = 0 ; d < n; d++) {
         sum[c1][d] = first[c1][d] + second[c1][d];
         printf("%d\t", sum[c1][d]);
      }
      printf("\n");
   }
		break;

	case 3: // subtraction
  printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c1 = 0; c1 < m; c1++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c1][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c1 = 0; c1 < m; c1++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c1][d]);
   
   printf("Subtraction of entered matrices:-\n");
   
   for (c1 = 0; c1 < m; c1++) {
      for (d = 0 ; d < n; d++) {
         sum[c1][d] = first[c1][d] - second[c1][d];
         printf("%d\t", sum[c1][d]);
      }
      printf("\n");
   }
		break;

	case 4: // E Values and E vectors

  //clrscr();
	 /* Inputs */
	 printf("Enter Order of Matrix: ");
	 scanf("%d", &n);
	 printf("Enter Tolerable Error: ");
	 scanf("%f", &error);
	 /* Reading Matrix */
	 printf("Enter Coefficient of Matrix:\n");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   printf("a[%d][%d]=",i,j);
			   scanf("%f", &a1[i][j]);
		  }
	 }
	 /* Reading Intial Guess Vector */
	 printf("Enter Initial Guess Vector:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d]=",i);
		  scanf("%f", &x[i]);
	 }
	 /* Initializing Lambda_Old */
	 lambda_old = 1;
	 /* Multiplication */
	 up:
	 for(i=1;i<=n;i++)
	 {
		  temp = 0.0;
		  for(j=1;j<=n;j++)
		  {
		   	temp = temp + a[i][j]*x[j];
		  }
		  x_new[i] = temp;
	 }
	 /* Replacing */
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x_new[i];
	 }
	 /* Finding Largest */
	 lambda_new = fabs(x[1]);
	 for(i=2;i<=n;i++)
	 {
		  if(fabs(x[i])>lambda_new)
		  {
		   	lambda_new = fabs(x[i]);
		  }
	 }
	 /* Normalization */
	 for(i=1;i<=n;i++)
	 {
	  	x[i] = x[i]/lambda_new;
	 }
	 /* Display */
	 printf("\n\nSTEP-%d:\n", step);
	 printf("Eigen Value = %f\n", lambda_new);
	 printf("Eigen Vector:\n");
	 for(i=1;i<=n;i++)
	 {
	  	printf("%f\t", x[i]);
	 }
	 /* Checking Accuracy */
	 if(fabs(lambda_new-lambda_old)>error)
	 {
		  lambda_old=lambda_new;
		  step++;
		  goto up;
	 }
	 //getch();
		break;
	}
}

void factorization(void){
  puts("1. (a + b)² = a² + 2ab + b²");
  puts("2. (a - b)² = a² - 2ab + b²");
  puts("3.  a²- b²=(a+b)(a-b)");
  printf("4. a^3 + b^3 = (a+b)(a² - ab + b²)\n");
  printf("5. a^3 - b^3 = (a-b)(a² + ab + b²)\n");
  printf("6. (a+b)^3 = a^3 +b^3 + 3a²b +3ab²\n");
  int a,b, answer, damn;
  //
  scanf("%d", &damn);
  switch(damn){
    case 1: printf("Enter values of a and b:- ");
    scanf("%d%d", &a, &b);
    answer = (a*a)+ (2*a*b)+ (b*b);
    printf("(%d + %d)² = %d ",a,b, answer);
    break;
    case 2: printf("Enter values of a and b:- ");
    scanf("%d%d", &a, &b);
    answer = (a*a) - (2*a*b)+ (b*b);
    printf("(%d - %d)² = %d ",a,b, answer);
    break;
    case 3:printf("Enter values of a and b:- ");
    scanf("%d%d", &a, &b);
    answer = (a+b)*(a-b);
    printf("%d² - %d² = %d ",a,b, answer);
    break;
    case 4:printf("Enter values of a and b:- ");
    scanf("%d%d", &a, &b);
    answer = (a+b)*((a*a) - (a*b) + (b*b)) ;
    printf("%d^3 + %d^3 = %d ",a,b, answer);  
     break;
      case 5: printf("Enter values of a and b:- ");
    scanf("%d%d", &a, &b);
    answer = (a-b)*((a*a) + (a*b) + (b*b)) ;
    printf("%d^3 - %d^3 = %d ",a,b, answer);
     break;
     case 6: printf("Enter values of a and b:- ");
    scanf("%d%d", &a, &b);
    answer = (a*a*a)+(b*b*b)+ (3*a*a*b) +  (3*a*b*b);
    printf("(%d + %d)^3 = %d ",a,b, answer);
     break;
   default: 	printf("Enter Again!");  break;
  }
}

void coordinate_geometry(void)
{int option,flag ;
float x,y,x1,y1,x2,y2,dist;
int opttt;
  printf("1.Decide Quadrant\n2.Find distance");
  scanf("%d", &opttt);
  switch(opttt)
  {
    case 1:
    printf(" Enter 'x' Coordinate:");
    scanf("%f",&x);
    printf(" Enter 'y' Coordinate:");
    scanf("%f",&y);
    if(x>0&&y>0)
    {flag=1;}
    else if(x<0&&y>0)
    {flag=2;}
    else if(x<0&&y<0)
    {flag=3;}
    else if(x>0&&y<0)
    {flag=4;}
    else if(x==0&&y==0)
    {flag=5;}
    else if(x==0)
    {flag=6;}
    else if(y==0)
    {flag=7;}

    switch(flag)
    {
       case 1:
       printf("Point is in First quadrant");
       break;
       case 2:
       printf("Point is in Second quadrant");
       break;
       case 3:
       printf("Point is in Third quadrant");
       break;
       case 4:
       printf("Point is in Fourth quadrant");break;
       case 5:
       printf("Point is Origin");
       break;
       case 6:
       printf("Point is on X axis");
       break;
       case 7:
       printf("Point is on Y axis");
       break;
             
    }
    break;
    case 2:
    printf("Enter (x1,y1):");
    scanf("%f%f",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%f%f",&x2,&y2);
    dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,dist);
    break;
  }
}



void lines(void)
{ int option,m,n,flag;
float x,y,x1,y1,x2,y2,dist,slope;
 printf("1.Distace Formula\n2.Section Formula\n3.Slope");
 scanf("%d",&option); 
 switch(option)
 {
   case 1:
   printf("Enter (x1,y1):");
    scanf("%f%f",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%f%f",&x2,&y2);
    dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,dist);
   break;
   case 2:
   printf("1]Internal Division\n2]External Division");
   switch(flag)
   {
     case 1: printf("Enter (x1,y1):");
    scanf("%f%f",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%f%f",&x2,&y2);
    printf("Enter M:N ratio of line dividation");
    scanf("%d%d",&m,&n);
    x=(m*x2+n*x1)/(m+n);
    y=(m*y2+n*y1)/(m+n);
    printf("point (%.2f,%.2f) divides line internally in (%d:%d) ratio",x,y,m,n);
    break;
    
    case 2: printf("Enter (x1,y1):");
    scanf("%f%f",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%f%f",&x2,&y2);
    printf("Enter M:N ratio of line dividation");
    scanf("%d%d",&m,&n);
    x=(m*x2-n*x1)/(m-n);
    y=(m*y2-n*y1)/(m-n);
    printf("point (%.2f,%.2f) divides line externally in (%d:%d) ratio",x,y,m,n);
    break;
   }
   break;
   case 3:
    printf("Enter (x1,y1):");
    scanf("%f%f",&x1,&y1);
    printf("Enter (x2,y2):");
    scanf("%f%f",&x2,&y2);
   slope=(y2-y1)/(x2-x1);
   printf("Slope of line formed by (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,slope);
   break;
 }
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


void electrostats(void){
  long int k1 = 8990000000;// k1 = 1/4 pi E0 
  double ee = 0.00000000000000000016;
  printf("1] force between two charges.(coulomb law) 2]electrtic Field. 3] electric potential difference. 4] E.F. at a point. 5] dipole moment. 6] capacitance. 7] internal Energy in capacitor 8] charge");
  int subtv;
// 
int q1,q2,r,f,v1,c1, length;
float answer;

  scanf("%d", &subtv);
  switch(subtv){
    case 1: printf("Enter the two charges between which the force is suppose to be calculated - ");
    scanf("%d%d", &q1,&q2);
    printf("Enter the distance between them - ");
    scanf("%d", &r);
    answer = (k1 * q1*q2)/ (r*r) ;
    printf("Force between the two charges is- %.2f ", answer);
     break;
     
     case 2: printf("Enter the charge - ");
    scanf("%d", &q1);
    printf("Enter the distance - ");
    scanf("%d", &r);
    answer = (k1 * q1)/ (r*r) ;
    printf("electric field is- %.2f ", answer);
     break;

     case 3: printf("Enter the charge - ");
    scanf("%d", &q1);
    printf("Enter the distance - ");
    scanf("%d", &r);
    answer = (k1 * q1)/ r ;
    printf("electric potential difference is- %.2f ", answer);
     break;

     case 4: printf("Enter the force and charge at the point - ");
     scanf("%d%d", &f, &q1);
     answer = f /q1;
     printf("E.F. at the point is %.2f ", answer);
     break;

     case 5: printf("enter the length and charge exerted - ");
     scanf("%d%d",&length,&q1);
     answer = 2* length *q1;
     printf("the dipole moment is - %.2f", answer);
     break;

     case 6: printf("enter the charge and voltage on capacitor- ");
     scanf("%d%d", &q1, &v1);
     answer = q1/v1;
     printf("the capacitance of the capacitor is %.2f", answer);
     break;

     case 7: printf("Enter capacitance and voltage on capacitor - ");
     scanf("%d%d", &c1,&v1); 
     answer = (c1*v1*v1)/2;
     printf("the Internal Energy in capacitor is %.2f ", answer);
     break;

     case 8: printf("Enter number of electrons");
     scanf("%d", &f);
     answer = f * ee ; 
     printf("the charge is %.2f" , answer);
     break;

     default: printf("incorrect input! try again");
     break;
   }}

////////////////////////////////////////////////////////////////////////////////

void rotational_motion(void){
  printf("1] Moment of inertia of ojects.  2] torque. 3] MI(by gyration) 4] total kinetic Energy. 5] angular momemtum\n");
  int num45;
  int mi_t, alpha,ang_vel, radius_gyration ,answer;
  scanf("%d", &num45);
  switch (num45){
    case 1:  
    printf("1] rod.   2] ring.  3] disk.    4] cylinder.   5] sphere.\n");
    int sub123;
    int mass1 , radii,leng;
    float ans;
    scanf("%d", &sub123);
    switch(sub123){
      case 1: printf("Enter the mass and length of the rod");
      scanf("%d%d",&mass1,&radii);
      ans = (mass1* radii * radii)/12;
      printf("the moment of inertia about center of axis of rod is  %.2f", ans);
      break;

      case 2:
       printf("Enter the mass and radius of the ring");
      scanf("%d%d",&mass1,&radii);
      ans = (mass1* radii * radii);
      printf("the moment of inertia about center of axis of ring is  %.2f", ans);
      break;

      case 3:
       printf("Enter the mass and radius of the disc");
      scanf("%d%d",&mass1,&radii);
      ans = (mass1* radii * radii)/2;
      printf("the moment of inertia about center of axis of disc is  %.2f", ans);
      break;

      case 4:
      printf("Enter the mass ,radius and length of the solid cylinder");
      scanf("%d%d%d",&mass1,&radii, &leng);
      ans = (mass1* radii * radii)/4 +(mass1* leng * leng)/12 ;
      printf("the moment of inertia about center of axis of solid cylinder is  %.2f", ans);
      break;

      case 5:
       printf("Enter the mass and radius of the solid sphere");
      scanf("%d%d",&mass1,&radii);
      ans = (2* mass1* radii * radii)/5;
      printf("the moment of inertia about center of axis of solid sphere is  %.2f", ans);
      break;
    }
    break;
    
    case 2: printf("Enter MI and angular accelaration of object:- ");
    scanf("%d%d", &mi_t,&alpha);
    answer = mi_t * alpha;
    printf("the torque of the object is  %d", answer);
    break;

    case 3: printf("Enter Mass and radius of gyration of object:- ");
    scanf("%d%d", &mi_t,&radius_gyration);
    answer = mi_t * (radius_gyration)*(radius_gyration);
    printf("the MI of the object is  %d", answer);
    break;
    
    case 4: printf("Enter MI and angular velocity of object:- ");
    scanf("%d%d", &mi_t,&ang_vel);
    answer = (mi_t * ang_vel)/2;
    printf("the total kinetic energy of the object is %d", answer);
    break;

     case 5: printf("Enter MI and angular velocity of object:- ");
    scanf("%d%d", &mi_t,&ang_vel);
    answer = mi_t * ang_vel;
    printf("the Angular momentum of the object is  %d", answer);
    break; 
  }
}
////////////////////////////////////////////////////////////////////////////////

void fluid_mechanics(void)
{ int option,topic;
float mass,volume,density;
float area,force,pressure;
float Q,V,A;
float F,n,r,v;
float a,p;
printf("Select Topic\n1.Density\n2.Pressure\n3.Volume flow rate\n4.Stoke's Law\n5.Viscosity\n");
scanf("%d",&topic);
switch(topic)
{
  case 1:
  printf("Select what you supposed to find\n1] Density (Mass & Volume are given)\n2] Volume (Density anf Mass are given)\n3] Mass (Density and Volume are given\n");
  scanf("%d",&option);
  switch(option)
  {
    case 1:
    printf("Enter Mass of Substance:");
    scanf("%f",&mass);
    printf("Enter Volume of Substance:");
    scanf("%f",&volume);
    density=mass/volume;
    printf("Density of Substance is %.2f",density);
    break;
    
    case 2:
    printf("Enter Mass of Substance:");
    scanf("%f",&mass);
    printf("Enter density of Substance:");
    scanf("%f",&density);
    volume=mass/density;
    printf("Volume of Substance is %.2f",volume);
    break;

    case 3:
    printf("Enter Density of Substance:");
    scanf("%f",&density);
    printf("Enter Volume of Substance:");
    scanf("%f",&volume);
    mass=density*volume;
    printf("Mass of Substance is %.2f",mass);
    break;
  }
  break;
  
  case 2:
  printf("Select what you supposed to find\n1] Pressure (Force & Area are given)\n2] Force (Area & Pressure are given)\n3] Area (Pressure & Force are given)\n");
  scanf("%d",&option);
  switch(option)
  {
    case 1:
     printf("Enter Area :");
    scanf("%f",&area);
    printf("Enter Force:");
    scanf("%f",&force);
    pressure=force/area;
    printf("Pressure is %.2f",pressure);
    break;

    case 2:
    printf("Enter Area :");
    scanf("%f",&area);
    printf("Enter Pressure:");
    scanf("%f",&pressure);
    force=area*pressure;
    printf("Force is %.2f",force);
    break;

    case 3:
    printf("Enter Pressure :");
    scanf("%f",&pressure);
    printf("Enter Force:");
    scanf("%f",&force);
    area=force/pressure;
    printf("Area is %.2f",area);
    break;
  }
  
  break;

  
  case 3:
  printf("Select what you supposed to find\n1] Volumetric flow rate ( flow velocity & cross-sectional vector area are given)\n2] Flow velocity (Volumetric flow rate & Cross-sectional vector area are given)\n3] Cross-sectional vector area (Volumetric flow rate & Flow velocity are given)\n");
  scanf("%d",&option);
  switch(option)
  {
    case 1:
    printf("Enter Flow velocity:");
    scanf("%f",&V);    // V - Flow velocity
    printf("Enter Cross-sectional vector area:");
    scanf("%f",&A);    // A - Cross-sectional vector area
    Q=V*A;            // Q - Volumetric flow rate 
    printf("Volumetric flow rate is %.2f",Q);
    break;
  
    case 2:
    printf("Enter Volumetric flow rate:");
    scanf("%f",&Q);    // Q - Volumetric flow rate
    printf("Enter Cross-sectional vector area:");
    scanf("%f",&A);    // A - Cross-sectional vector area
    V=Q/A;             // V - Flow velocity
    printf("Flow velocity is %.2f",V);
    break;

    case 3:
     printf("Enter Volumetric flow rate:");
    scanf("%f",&Q);    // Q - Volumetric flow rate
    printf("Enter Flow velocity :");
    scanf("%f",&V);    // V - Flow velocity
    A=Q/V;            // A - Cross-sectional vector area 
    printf("Cross-sectional vector area is %.2f",V);
    break;
  }
  break;

  case 4:
  printf("Enter Sphere Radius:");
  scanf("%f",&r);
   printf("Enter Fluid Viscocity:");
  scanf("%f",&n);
   printf("Enter Sphere Velocity:");
  scanf("%f",&v);
  F=6*PI*n*r*v;
  printf("Drag Force is %.2f",F);
  break;

  case 5:
  printf("Enter Density difference between fluid and sphere:");
  scanf("%f",&p);        // p- Density difference between fluid and sphere
  printf("Enter Radius of sphere:");
  scanf("%f",&a);        // a-Radius of sphere
  printf("Enter velocity of sphere:");
  scanf("%f",&v);           // v-Velocity of sphere
  n=(2*9.8*a*a*p)/(9*v);
  printf("Viscocity of the liquid is %.2f",n);
   break;
}
 
}

/////////////////////////////////////////////////////////////////////////////////
//printf("\nEnter your choice:- ");
void gravitation(void)
{
printf(" 1] Force between two bodies 2] Accelaration.\n  3] keepler law 4]Gravitational potential energy 5] force = mg\n 6] Critical velocity  7] Time period of satelite");

//double g_c = 0.0000000000667408;
  int sub3, force1, mass1,mass2, radii;
  long int mass_planet;
long double ans_force;
float ans;
scanf("%d",&sub3);
switch(sub3){
  case 1: 
  printf("force between two bodies\n enter their masses of the bodies :- ");
  scanf("%d%d",&mass1 ,&mass2);
  printf("ENter the distance between them");
  scanf("%d", &radii);
  ans_force = (G *mass1*mass2)/(radii* radii);
  printf(" force = %.15Lf", ans_force);
  break;
 
 case 2: 
 printf("Enter the mass of planet:- ");
 scanf("%ld", &mass_planet);
 printf("Enter radius of that planet :- ");
 scanf("%d", &radii);

 ans = (G * mass_planet)/(radii*radii) ;
 printf("the gravity on the given planet is %.3f", ans);
 break;

 case 3: 
 //kepler law;
 
 printf("Time peroid :-\nEnter mass of the planet:-");
 scanf("%ld", &mass_planet);
 printf("Semi-major axis of the elliptical orbit:- ");
 scanf("%d", &radii);

 printf("T² = 4π²R^3/GM");
 ans =  (4* PI *PI * radii* radii* radii)/(G*mass_planet);
 
 ans_force = sqrt(ans);
 printf("time period = %Lf", ans_force);
 break;

 case 4:
  printf("enter mass of object one :- ");
  scanf("%d", &mass1);
  printf("enter mass of object two :- ");
  scanf("%d", &mass2);
  printf("enter distance between two object from there centers :- ");
  scanf("%d", &radii);
  ans = -(G * mass1* mass2)/radii;
  printf("The Gravitational potential energy is - %.2f", ans);
 break;
 
 case 5: printf("force on the object is = mg \n Enter the mass and acceleration on it :-");
 scanf("%d%d", &mass1,&radii);
 ans = mass1* radii;
 printf("the force on object is %.2f", ans);
 break;

 case 6: 
 printf("Enter the mass and radius of planet:-");
 scanf("%d%d", &mass1, &radii);
 break;
}
}



void kinematics(void)
{
    float a,v,u,t,s;
    int choice,subchoice;
    printf("\nUse formula : \n1]v=u+at.\n2]s=ut+(at²)/2.\n3]v²=u²+2as :");
    printf("\nEnter your choice:- ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nWhat has been provided in the question?\n1]Initial velocity,acceleration and time to find the final velocity.\n2]Final velocity,acceleration and time to find initial velocity.\n3]Initial velocity,final velocity and acceleration to find time.\n4]Initial velocity,final velocity and time top find acceleration. : ");
        printf("\nEnter your choice:- ");
        scanf("%d",&subchoice);
        switch(subchoice)
        {
            case 1:
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter time : ");
            scanf("%f",&t);
            v=u=a*t;
            printf("\nThe final velocity is : %f",v);
            break;
            
            case 2:
            printf("Enter the final velocity : ");
            scanf("%f",&v);
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter time : ");
            scanf("%f",&t);
            u=v-a*t;
            printf("\nThe initial velocity is : %f",u);
            break;
            
            case 3:
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter the final velocity : ");
            scanf("%f",&v);
            t=(v-u)/a;
            printf("\nThe time is : %f",t);
            break;
            
            case 4:
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter the final velocity : ");
            scanf("%f",&v);
            printf("Enter time : ");
            scanf("%f",&t);
            a=(v-u)/t;
            printf("\nThe acceleration is : %f",a);
            break;
        }
        break;
        
        case 2:
        printf("\nWhat has been provided in the question?\n1]Initial velocity,acceleration and time to find the displacement.\n2]Displacemnet,acceleration and time to find initial velocity.\n3]Initial velocity,displacement and time to find acceleration. : ");
        scanf("%d",&subchoice);
        switch(subchoice)
        {
            case 1:
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter time : ");
            scanf("%f",&t);
            s=(u*t)+((a*t*t)/2);
            printf("\nThe displacement is : %f",s);
            break;
            
            case 2:
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter the time : ");
            scanf("%f",&t);
            printf("Enter displacement : ");
            scanf("%f",&s);
            u=((2*s)-(a*t*t))/(2*t);
            printf("\nThe initial velocity is : %f",u);
            break;
            
            case 3:
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter time : ");
            scanf("%f",&t);
            printf("Enter displacement : ");
            scanf("%f",&s);
            a=(2*(s-u*t))/(t*t);
            printf("\nThe acceleration is : %f",a);
            break;
        }
        break;
        
        
        case 3:
        printf("\nWhat has been provided in the question?\n1]Initial velocity,acceleration and final velocity to find the distance.\n2]Distance,acceleration and final velocity to find initial velocity.\n3]Initial velocity,distance and final velocity to find acceleration.\n4]Initial velocity,acceleration and distance to find final velocity : ");
        scanf("%d",&subchoice);
        switch(subchoice)
        {
            case 1:
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter the final velocity : ");
            scanf("%f",&v);
            s=((v*v)-(u*u))/(2*a);
            printf("\nThe distance is : %f",s);
            break;
            
            case 2:
            printf("Enter acceleration : ");
            scanf("%f",&a);
            printf("Enter the final velocity : ");
            scanf("%f",&v);
            printf("Enter distance : ");
            scanf("%f",&s);
            u=sqrt((v*v)-(2*a*s));
            printf("\nThe initial velocity is : %f",u);
            break;
            
            case 3:
            printf("Enter the final velocity : ");
            scanf("%f",&v);
            printf("Enter distance : ");
            scanf("%f",&s);
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            a=((v*v)-(u*u))/(2*s);
            printf("\nThe acceleration is : %f",a);
            break;
            
            case 4:
            printf("Enter distance : ");
            scanf("%f",&s);
            printf("Enter the initial velocity : ");
            scanf("%f",&u);
            printf("Enter acceleration : ");
            scanf("%f",&a);
            v=sqrt((u*u)+(2*a*s));
            printf("\nThe final velocity is : %f",v);
            break;
            
          }
      }
}

void shm(void)
{
  int choice,sub;
  float f,t,angf,a,x,te,ke,pe,l,m,k;
  printf("\n\n1]Angular frequency.\n2]Time period.\n3]Energy.");
  printf("\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    printf("\nUsing1]frequency.\n2]Time period : ");
    scanf("%d",&sub);
    switch(sub)
    {
      case 1:
      printf("\nEnter frequency : ");
      scanf("%f",&f);
      angf=2*PI*f;
      printf("\nAngular frequency is : %f",angf);
      break;
            
      case 2:
      printf("\nEnter time period : ");
      scanf("%f",&t);
      angf=(2*PI)/t;
      printf("\nAngular frequency is : %f",angf);
      break;
    }
    break;
        
    case 2:
    printf("\n\n1]Time period.\n2]Simple pendulum.\n3]Spring pendulum.");
    printf("\nEnter your choice : ");
    scanf("%d",&sub);
    switch(sub)
    {
      case 1:
      printf("\nEnter frequency : ");
      scanf("%f",&f);
      t=1/f;
      printf("\nThe time period is : %f",t);
      break;
            
      case 2:
      printf("Enter the length : ");
      scanf("%f",&l);
      t=2*PI*sqrt(l/9.8);
      printf("\nThe time period of simple pendulum is : %f",t);
      break;
            
      case 3:
      printf("Enter the mass : ");
      scanf("%f",&m);
      printf("Enter the spring constant : ");
      scanf("%f",&k);
      t=2*PI*sqrt(m/k);
      printf("\nThe time period of spring pendulum is : %f",t);
      break;
    }
    break;
        
    case 3:
    printf("\n\n1]Kinetic Energy.\n2]Potential Energy.\n3]Total Energy.");
    printf("\nEnter your choice : ");
    scanf("%d",&sub);
    switch(sub)
    {
      case 1:
      printf("Enter amplitude : ");
      scanf("%f",&a);
      printf("Enter Displacement : ");
      scanf("%f",&x);
      printf("\nEnter constant : ");
      scanf("%f",&k);
      printf("\nEnter constant : ");
      scanf("%f",&k);
      ke=(k*(a*a)-(x*x)/2);
      printf("\nKinetic energy = %f",ke);
      break;
            
      case 2:
      printf("Enter Displacement : ");
      scanf("%f",&x);
      printf("\nEnter constant : ");
      scanf("%f",&k);
      pe=(k*x*x)/2;
      printf("\nPotential energy = %f",pe);
      break;
            
      case 3:
      printf("Enter amplitude : ");
      scanf("%f",&a);
      printf("\nEnter constant : ");
      scanf("%f",&k);
      te=(k*a*a)/2;
      printf("\nTotal energy = %f",te);
      break;
    }
    break;
  }   
}

void current_electricity(void)
{
  int choice,sub;
  float i,a,j,rho,l,r,v,r1,r2,p;
  printf("\n\n1]Current density.\n2]Resistance of wire.\n3]Ohm's law.\n4]Equivalent resistance.\n5]Power.");
  printf("\nEnter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    printf("Enter value of current : ");
    scanf("%f",&i);
    printf("Enter value of cross sectional area : ");
    scanf("%f",&a);
    j=i/a;
    printf("\nValue of current density is : %.2f",j);
    break;
        
    case 2:
    printf("\nEnter length : ");
    scanf("%f",&l);
    printf("Enter cross sectional area : ");
    scanf("%f",&a);
    printf("Enter value of rho : ");
    scanf("%f",&rho);
    r=(rho*l)/a;
    printf("\nThe value of resistance is : %.2f",r);
    break;
        
    case 3:
    printf("Enter value of current : ");
    scanf("%f",&i);
    printf("Enter value of resistance : ");
    scanf("%f",&r);
    v=i*r;
    printf("\nThe value of potential difference is : %.2f",v);
    break;
        
    case 4:
    printf("\n1]Parallel resistance.\n2]Series resistance.");
    printf("\nEnter your choice : ");
    scanf("%d",&sub);
    switch(sub)
    {
      case 1:
      printf("Enter value of resistance 1 : ");
      scanf("%f",&r1);
      printf("Enter value of resistance 2 : ");
      scanf("%f",&r2);
      r=(r1*r2)/(r1+r2);
      printf("The value of equivalent resistance is : %.2f",r);
      break;
            
      case 2:
      printf("Enter value of resistance 1 : ");
      scanf("%f",&r1);
      printf("Enter value of resistance 2 : ");
      scanf("%f",&r2);
      r=r1+r2;
      printf("The value of equivalent resistance is : %.2f",r);
      break;
    }
    break;
        
    case 5:
    printf("\n\n1]I and V are given.\n2]R and V are given.\n3]I and R are given.");
    printf("\nEnter your choice : ");
    scanf("%d",&sub);
    switch(sub)
    {
      case 1:
      printf("\nEnter the value of current and potential difference : ");
      scanf("%f%f",&i,&v);
      p=i*v;
      printf("\nPower = %.2f",p);
      break;
            
      case 2:
      printf("\nEnter the value of resistance and potential difference : ");
      scanf("%f%f",&r,&v);
      p=(v*v)/r;
      printf("\nPower = %.2f",p);
      break;
            
      case 3:
      printf("\nEnter the value of current and resistance : ");
      scanf("%f%f",&i,&r);
      p=i*i*r;
      printf("\nPower = %.2f",p);
      break;
    }
    break;
  }
}


void circular_motion(void)
{ float radius,time,avg_vel;
float acc,vel;
float mass,force;
int option;
  printf("Select What you wany:\n1] Avg Speed\n2] Accelaration\n3] Net Force");
 switch(option)
 {
   case 1:
   printf("Enter Radius of Circular Motion:");
   scanf("%f",&radius);
   printf("Enter Time required:");
   scanf("%f",&time);
   avg_vel=(2*PI*radius)/time;
   printf("Average Velocity is %.2f",avg_vel);
   break;

   case 2:
   printf("Enter Velocity:");
   scanf("%f",&vel);
   printf("Enter Radius of circular motion");
   scanf("%f",&radius);
   acc=(vel*vel)/radius;
   break;

   case 3:
   printf("Enter Velocity:");
   scanf("%f",&vel);
   printf("Enter Radius of circular motion");
   scanf("%f",&radius);
   printf("Enter mass of object");
   scanf("%f",&mass);
   force=(mass*vel*vel)/radius;
   break;
 }
}
    
