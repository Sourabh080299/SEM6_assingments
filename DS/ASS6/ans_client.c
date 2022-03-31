/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "ans.h"


void
sol_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	input  polindrome_1_arg;
	int  *result_2;
	int  check_leap_year_1_arg;
	int  *result_3;
	number  gcd_1_arg;
	double  *result_4;
	int  sqr_root_1_arg;
	number  *result_5;
	number  swap_1_arg;
	stat  *result_6;
	num_arr  getstat_1_arg;
	int  *result_7;
	two_str  comp_str_1_arg;
	int  *result_8;
	two_str  chk_substr_1_arg;
	input  *result_9;
	two_str  concate_1_arg;
	num_arr  *result_10;
	num_arr  reverse_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SOL_PROG, SOL_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

  int choice;
  
  printf("\n1. String is palindrome or not.");
  printf("\n2. Find out if a given year is a Lear Year or not.");
  printf("\n3. Find out the GCD of a given number.");
  printf("\n4. Find out the Square root of a given number.");
  printf("\n5. Swap two variables without using the 3rd variable.");
  printf("\n6. Calculate Maximum, Minimum, average of given array.");
  printf("\n7. Compare the given two strings.");
  printf("\n8. Find out whether a given string is substring or not.");
  printf("\n9. Concatenate the two strings.");
  printf("\n10. Reverse the elements of an array.");
  printf("\n11. Exit.");
  
  
  printf("\nEnter your choice: ");
  scanf("%d",&choice);
  int i;

  switch(choice){
	  case 1:
	   	    printf("Enter the size of the string : ");
			scanf("%d",&polindrome_1_arg.size);
			printf("Enter the string : ");
			scanf("%s",polindrome_1_arg.str);
			result_1 = polindrome_1(&polindrome_1_arg, clnt);
			if (result_1 == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}else{
				if(*result_1 == 0){
					printf("\n The string is not a polindrome.\n");
				}else{
					printf("\n The string is a polindrome.\n");
				}
			} 
			break;
	
	  case 2:
	  	    printf("Enter the Year : ");
			scanf("%d",&check_leap_year_1_arg);
			result_2 = check_leap_year_1(&check_leap_year_1_arg, clnt);
			if (result_2 == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}else{
				if(*result_2 == 1){
					printf("\nThe input year is a leap year .\n");
				}else{
					printf("\nThe input year is not a leap year.\n");
				}
			} 
			break;

	  case 3:
	  	    printf("Enter the first number : ");
			scanf("%d",&gcd_1_arg.a);
			printf("Enter the second number : ");
			scanf("%d",&gcd_1_arg.b);
			result_3 = gcd_1(&gcd_1_arg, clnt);
			if (result_3 == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

	  case 4:
	        printf("Enter the number to find square root : ");
			scanf("%d",&sqr_root_1_arg);
			result_4 = sqr_root_1(&sqr_root_1_arg, clnt);
			if (result_4 == (double *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

      case 5:
	  	    printf("Enter the first number : ");
			scanf("%d",&swap_1_arg.a);
			printf("Enter the second number : ");
			scanf("%d",&swap_1_arg.b);
			result_5 = swap_1(&swap_1_arg, clnt);
			if (result_5 == (number *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

	  case 6:
	  	    printf("Enter the size of the Array : ");
			scanf("%d",&getstat_1_arg.size);
			printf("Enter the Array elements : ");
			for(i=0;i<getstat_1_arg.size;i++){
				scanf("%d",&getstat_1_arg.arr[i]);
			}
			result_6 = getstat_1(&getstat_1_arg, clnt);
			if (result_6 == (stat *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

	  case 7:
			printf("\nEnter the first string: ");
			scanf("%s",comp_str_1_arg.s1.str);
			printf("\nEnter the second string: ");
	        scanf("%s",comp_str_1_arg.s2.str);
			comp_str_1_arg.s1.size=strlen(comp_str_1_arg.s1.str);
			comp_str_1_arg.s2.size=strlen(comp_str_1_arg.s2.str);
			result_7 = comp_str_1(&comp_str_1_arg, clnt);
			if (result_7 == (int *) NULL) {
			clnt_perror (clnt, "call failed");
			}
			break;

    case 8:
			printf("\nEnter the string: ");
			scanf("%s",chk_substr_1_arg.s1.str);
			printf("\nEnter the sub-string: ");
			scanf("%s",chk_substr_1_arg.s2.str);
			chk_substr_1_arg.s1.size=strlen(chk_substr_1_arg.s1.str);
			chk_substr_1_arg.s2.size=strlen(chk_substr_1_arg.s2.str);
			result_8 = chk_substr_1(&chk_substr_1_arg, clnt);
			if (result_8 == (int *) NULL) {
			clnt_perror (clnt, "call failed");
			}
			break;

    case 9:
			printf("\nEnter the first string: ");
			scanf("%s",concate_1_arg.s1.str);
			printf("\nEnter the second string: ");
			scanf("%s",concate_1_arg.s2.str);
			concate_1_arg.s1.size=strlen(concate_1_arg.s1.str);
			concate_1_arg.s2.size=strlen(concate_1_arg.s2.str);
			result_9 = concate_1(&concate_1_arg, clnt);
			if (result_9 == (input *) NULL) {
			clnt_perror (clnt, "call failed");
			}
			break;

    case 10:
			printf("\nEnter the size of array: ");
			scanf("%d",&reverse_1_arg.size);
			printf("\nEnter the elements of array: ");
			for(i=0;i<reverse_1_arg.size;i++){
				scanf("%d",&reverse_1_arg.arr[i]);
			}
			result_10 = reverse_1(&reverse_1_arg, clnt);
			if (result_10 == (num_arr *) NULL) {
			clnt_perror (clnt, "call failed");
			}
			break;

    case 11:
			printf("Thank you.\n");
			break;
    default:
			printf("Invalid input.\n");
			break;

  }


#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	sol_prog_1 (host);
exit (0);
}