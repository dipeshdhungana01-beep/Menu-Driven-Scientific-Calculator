#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void saveHistory(const char operation[], double result);
void viewHistory();
float add(float a ,float b)
{
	printf("\n\tEnter Your Two Number: ");
	scanf("%f %f",&a,&b);
	return a+b;
}
float sub(float a, float b)
{
	printf("\n\tEnter Your Two Number: ");
	scanf("%f %f",&a,&b);
	return a-b;
}
float divide(float a, float b)
{
	printf("\n\tEnter Your Two Number: ");
	scanf("%f %f",&a,&b);
	if(b!=0)
	{
	  return a/b;
	}
	else
	return 0;
}
double multi(double a, double b)
{
	printf("\n\tEnter Your Two Number: ");
	scanf("%lf %lf",&a,&b);
	return a*b;
}
int modulus(int a, int b)
{
	printf("\n\tEnter Your Two Number: ");
	scanf("%d %d",&a,&b);
	return a%b;
}
void Arithmatic(int a)
{
	system("cls");
	int n;
	float x,y;
	while(1)
	{
		printf("\n1.Addition");
	    printf("\n2.Subtraction");
	    printf("\n3.Division");
	    printf("\n4.Multiplication");
	    printf("\n5.Modulus");
	    printf("\n6.Back");
	    printf("\n7.CLS");
	    printf("\n8.Exit Program");
	    printf("\nEnter Your Choice: ");
	    scanf("%d",&n);
	    if(n==7)
	    {
	    	system("cls");
		}
		if(n==8)
		{
			exit(0);
		}
		if(n<1||n>8)
		{
			printf("Invalid Choice");
		}
		if(n==6)
		{
			break;
		}
		else
		{
		switch(n)
	{
		case 1:
			{
			float r=add(x,y);
		printf("Result = %.2f\n",r);
		 saveHistory("Addition", r);
	    }
		break;
		case 2:
			{
			float r=sub(x,y);
		printf("Result = %.2f\n",r);
		saveHistory("Subtraction", r);
		break;
	    }
		case 3:
			{
			
			float r=divide(x,y);
		printf("Result = %.2f\n",r);
		 saveHistory("Division", r); 
		break;
	}
		case 4:
			{
			
			double r=multi(x,y);
		printf("Result = %.2lf\n",r);
		saveHistory("Multiplication",r);
		break;
	    }
		case 5:
			{
			
			int r=modulus((int)x,(int)y);
		printf("Result = %d\n",r);
		saveHistory("Modulus",r);
		break;
	}
	}
    }
    }
    system("cls");
}
    void clearHistory()
    {
    FILE *file=fopen("calculation history.txt","w");

    if(file==NULL)
    {
        printf("Cannot clear history");
        return;
    }

    fclose(file);
    //printf("\nHistory deleted successfully!!\n");
}
float power(float a,float b)
{
	float x,y,result;
	printf("Enter Number and Power: ");
	scanf("%f %f",&x,&y);
	result=pow(x,y);
	return result;
}
float squareroot(float a)
{
    float n;
	printf("Enter Your Number: ");
	scanf("%f",&n);
	return sqrt(n);
}
int factorial(int a)
{
	 if (a==0 || a==1)
        return 1;
    else
        return a*factorial(a-1);
}
int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
			return gcd(b,a%b);
	}
}
int lcm(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return (a*b)/gcd(a,b);
	}
}
void Scientificfunctions(int a)
{
	system("cls");
	int n,x,y;
	while(1)
	{
		printf("\n1.Power");
	    printf("\n2.Square Root");
     	printf("\n3.Factorial");
    	printf("\n4.GCD");
    	printf("\n5.LCM");
    	printf("\n6.Back");
    	printf("\n7.CLS");
	    printf("\n8.Exit Program");
		printf("\n\tEnter Your Choice: ");
	    scanf("%d",&n);
		if(n<1||n>8)
		{
			printf("Invalid Choice");
		}
		if(n==6)
		{
			break;
		}
		if(n==7)
	    {
	    	system("cls");
		}
		if(n==8)
		{
			exit(0);
		}
		else
		{
	switch(n)
	{
		case 1:
		{
			float res=power(x,y);
		    printf("\nResult = %.2f\n",res);
		    saveHistory("Power",res);
		    break;
		}
		case 2:
		{
			float res=squareroot(x);
		    printf("\nResult is %.2f\n",res);
		    saveHistory("Squareroot",res);
		}
		break;
		case 3:{
				printf("Enter Your Number: ");
	            scanf("%d",&x);
	            int res=factorial(x);
			    printf("Resut is %d\n",res);
			    saveHistory("factorial",res);
		    	break;
	        	}
	    case 4:
		{
	    	printf("Enter Two Number: ");
	    	scanf("%d %d",&x,&y);
	    	int res=gcd(x,y);
	    	printf("Result = %d\n",res);
	    	saveHistory("gcd",res);
			break;
		}
		case 5:
			{
				printf("Enter Any Two Number: ");
				scanf("%d %d",&x,&y);
				int res=lcm(x,y);
				printf("Result = %d\n",res);
				saveHistory("lcm",res);
				break;
			}
	}
    }
    }  
}
double angle(double a)
{
	printf("Enter The Degree: ");
	scanf("%lf",&a);
	double angle=a*M_PI/180;
	return angle;
}
double Tanangle(double a)
{
	printf("Enter The Degree: ");
	scanf("%lf",&a);
	if(a==90 || a==270 || a==450)
	{
	  printf("Error");
	  return 0;
    }
	  else
	  {
	        double angle=a*M_PI/180;
	        return angle;
	  }
}
double arcsine(double a)
{
	printf("Enter value of from -1 to 1: ");
	scanf("%lf",&a);
	return asin(a)*180/M_PI;
}
double arccos(double a)
{
	printf("Enter value of from -1 to 1: ");
	scanf("%lf",&a);
	return acos(a)*180/M_PI;
}
double arctan(double a)
{
	printf("Enter Value of Tan: ");
	scanf("%lf",&a);
	return atan(a)*180/M_PI;
}
void Trigonometricfunctions(int a)
{
	int n,x;	
	while(1)
	{
		printf("\n1.Sin");
	    printf("\n2.Cos");
	    printf("\n3.Tan");
	    printf("\n4.ArcSin");
	    printf("\n5.ArcCos");
	    printf("\n6.ArcTan");
	    printf("\n7.Back");
        printf("\n8.CLS");
	    printf("\n9.Exit Program");
		printf("\nEnter Your Choice: ");
	    scanf("%d",&n);
		if(n<1||n>9)
		{
			printf("Invalid Choice");
		}
		if(n==7)
		{
			break;
		}
		if(n==8)
	    {
	    	system("cls");
		}
		if(n==9)
		{
			exit(0);
		}
		else
		{
	switch(n)
	{
		case 1:
			{
			double res=sin(angle(x));
		printf("Result = %.2lf\n",res);
		saveHistory("Sin",res);
		break;
	        }
		case 2:
			{
				double res=cos(angle(x));
		printf("Result = %.2lf\n",res);
		saveHistory("Cos",res);
		break;
	        }
		case 3:
			{
				double res=tan(Tanangle(x));
		printf("Result = %.2lf\n",res);
		saveHistory("Tan",res);
		break;
	        }
		case 4:
			{
				double res=arcsine(x);
		printf("Result = %.2lf\n",res);
		saveHistory("ArcSine",res);
		break;
	        }
		case 5:
			{
				double res=arccos(x);
		printf("Result = %.2lf\n",res);
		saveHistory("ArcCos",res);
		break;
	        }
		case 6:
			{
				double res=arctan(x);
		printf("Result = %.2lf\n",res);
		saveHistory("ArcTan",res);
		break;
	       }
	}
    }
    }
}
float CI(int a)
{
    float p,r,t,ci;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f",&p,&r,&t);
    ci = p*pow((1+r/100),t)-p;
    return ci;
}
float SI(float a)
{
	float p,t,r,si;
	printf("Enter Principal,Time and Rate: ");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	return si;
}
float AOS(float a)
{
	float l,Area;
	printf("Enter Length:");
	scanf("%f",&l);
	Area=l*l;
	return Area;
}
float AOR(float a, float y)
{
	float b,l,Area;
	printf("Enter Length and Breadth: ");
	scanf("%f %f",&l,&b);
	Area=l*b;
	return Area;
}
float AOC(float r)
{
	float Area;
	printf("Enter Radius: ");
	scanf("%f",&r);
	Area=M_PI*r*r;
	return Area;
}
float AOT(float h,float b)
{
	float Area;
	printf("Enter Breadth and Height of The Triangle: ");
	scanf("%f %f",&b,&h);
	Area=0.5*b*h;
	return Area;
}
void InterestAndArea(int a)
{
	int n,x,y;
	
	while(1)
	{
		printf("\n1.Simple Interest");
	    printf("\n2.Compound Interest");
	    printf("\n3.Area of Square");
	    printf("\n4.Area of Rectangle");
	    printf("\n5.Area of Circle");
	    printf("\n6.Area of Triangle");
	    printf("\n7.Back");
	    printf("\n8.CLS");
	    printf("\n9.Exit Program");
		printf("\nEnter Your Choice: ");
	    scanf("%d",&n);
		if(n<1||n>9)
		{
			printf("Invalid Choice");
		}
		if(n==7)
		{
			break;
		}
	if(n==8)
	    {
	    	system("cls");
		}
		if(n==9)
		{
			exit(0);
		}
		else
		{
	switch(n)
	{
		case 1:
		{
		double res=SI(x);
		printf("Result = %.2f\t\n",res);
		saveHistory("SI",res);
		break;
		}
		case 2:
		{
		double res=CI(x);
		printf("Result = %.2f\n",res);
		saveHistory("CI",res);
		break;
		}
		case 3:
		{
			double res=AOS(x);
		printf("Result = %.2f\n",res);
		saveHistory("AOS",res);
		break;
		}
		case 4:
		{
		double res=AOR(x,y);
		printf("Result = %.2f\n",res);
		saveHistory("AOR",res);
		break;
		}
		case 5:
		{
		double res=AOC(x);
		printf("Result = %.2f\n",res);
		saveHistory("AOC",res);
		break;
		}
		case 6:
		{
		double res=AOT(x,y);
		printf("Result = %.2f\n",res);
		saveHistory("AOT",res);
		break;
		}
	}
    }
   }
}
   void saveHistory(const char operation[],double result)
   {
   	FILE *file=fopen("Calculation History.txt","a+");
   	if(file==NULL)
   	{
   		printf("Calculation History file error!!\n");
   		return;
	   }
	   fprintf(file,"%s=%.2lf\n",operation,result);
	   fclose(file);
   }
   void viewHistory()
   {
   	FILE*file=fopen("Calculation History.txt","r");
   	char ch;
   	if(file==NULL)
   	{
   		printf("Sorry!! History not available\n");
   		return;
	   }
	   printf("\n --------Calculation History--------\n");
	   while((ch=fgetc(file))!=EOF)
	   printf("%c",ch);
	   fclose(file);
   }
int main()
{
	int choice;
	while(1)
{
	printf("\tMenu");
	printf("\n1.Arithmatic Functions");
	printf("\n2.Scientific Functions");
	printf("\n3.Trigonometric Functions");
	printf("\n4.Interest And Area");
	printf("\n5.View Calculation History");
	printf("\n6.CLS");
	printf("\n7.Exit Program");
	printf("\n\tEnter Your Choice: ");
	scanf("%d",&choice);
	system("cls");
	if(choice<1 || choice >7)
	{
		printf("\n\tInvalid Choice\n");
	}
	if(choice==7)
	{
		printf("Exiting Program......");
		exit(0);
	}
	if(choice==6)
	{
		system("cls");
		clearHistory();
	}
	else
	{
	switch(choice)
	{
		case 1:
		{
			Arithmatic(choice);break;
		}
		case 2:
		{
			Scientificfunctions(choice);break;
		}
		case 3:
		{
			Trigonometricfunctions(choice);break; 
		}
		case 4:
		{
			InterestAndArea(choice);break;
		}
		case 5: 
		{
			viewHistory();break;
		}
	}
    }
}
	return 0;
}