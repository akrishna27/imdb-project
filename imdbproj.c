#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct film{
		char* color;				//sortby= 1
		char* director_name;		//2
		int num_critic_for_reviews;	//3
		int duration;				//4
		int director_facebook_likes;//5
		int actor_3_facebook_likes;	//6
		char* actor_2_name;			//7
		int actor_1_facebook_likes;	//8
		int gross;					//9
		char* genres;				//10
		char* actor_1_name;			//11
		char* movie_title;			//12
		int num_voted_users;		//13
		int cast_total_facebook_likes;//14
		char* actor_3_name;			//15
		int facenumber_in_poster;	//16
		char* plot_keywords;		//17
		char* movie_imdb_link;		//18
		int num_user_for_reviews;	//19
		char* language;				//20
		char* country;				//21
		char* content_rating;		//22
		int budget;					//23
		int title_year;				//24
		int actor_2_facebook_likes;	//25
		double imdb_score;			//26
		double aspect_ratio;		//27
		int movie_facebook_likes;	//28
}film;


int main(int argc, char** argv){
	
	int sortby; //integer holding value corresponding to what the files will be sorted by
//	char* alpha=(char*)malloc(sizeof(char)*5);
//	char* beta=(char*)malloc(sizeof(char)*5);
//	char* gamma=(char*)malloc(sizeof(char)*5);
	
	printf("the first arg is %s\n",argv[0]);
	printf("the second arg is %s\n", argv[1]);
	printf("the third arg is %s\n", argv[2]);
	
//	scanf("%[^','],%[^','],%[^',']\n",alpha, beta, gamma);
//	printf("the first input is %s\n", alpha);
//	printf("the next input is %s\n", beta);
//	printf("the last input is %s\n", gamma);

	if(strcmp("-c",argv[1])!=0){
		printf("ERROR: Invalid Value Type\n");
		return 1;
	}
	//set string to argv[2] then compare to set sortby var
	sortby=0;
	if(strcmp("color",argv[2])==0){
		sortby=1;
	}else if (strcmp("director_name",argv[2])==0){
		sortby=2;
	}else if (strcmp("num_critic_for_reviews",argv[2])==0){
		sortby=3;
	}else if (strcmp("duration",argv[2])==0){
		sortby=4;
	}else if (strcmp("director_facebook_likes",argv[2])==0){
		sortby=5;
	}else if (strcmp("actor_3_facebook_likes",argv[2])==0){
		sortby=6;
	}else if (strcmp("actor_2_name",argv[2])==0){
		sortby=7;
	}else if (strcmp("actor_1_facebook_likes",argv[2])==0){
		sortby=8;
	}else if (strcmp("gross",argv[2])==0){
		sortby=9;
	}else if (strcmp("genres",argv[2])==0){
		sortby=10;
	}else if (strcmp("actor_1_name",argv[2])==0){
		sortby=11;
	}else if (strcmp("movie_title",argv[2])==0){
		sortby=12;
	}else if (strcmp("num_voted_users",argv[2])==0){
		sortby=13;
	}else if (strcmp("cast_total_facebook_likes",argv[2])==0){
		sortby=14;
	}else if (strcmp("actor_3_name",argv[2])==0){
		sortby=15;
	}else if (strcmp("facenumber_in_poster",argv[2])==0){
		sortby=16;
	}else if (strcmp("plot_keywords",argv[2])==0){
		sortby=17;
	}else if (strcmp("movie_imdb_link",argv[2])==0){
		sortby=18;
	}else if (strcmp("num_user_for_reviews",argv[2])==0){
		sortby=19;
	}else if (strcmp("language",argv[2])==0){
		sortby=20;
	}else if (strcmp("country",argv[2])==0){
		sortby=21;
	}else if (strcmp("content_rating",argv[2])==0){
		sortby=22;
	}else if (strcmp("budget",argv[2])==0){
		sortby=23;
	}else if (strcmp("title_year",argv[2])==0){
		sortby=24;
	}else if (strcmp("actor_2_facebook_likes",argv[2])==0){
		sortby=25;
	}else if (strcmp("imdb_score",argv[2])==0){
		sortby=26;
	}else if (strcmp("aspect_ratio",argv[2])==0){
		sortby=27;
	}else if (strcmp("movie_facebook_likes",argv[2])==0){
		sortby=28;
	}
	if(sortby==0){
		printf("ERROR: Invalid Category For Sorting\n");
		return 1;
	}
	char* curr=(char*)malloc(sizeof(char)*500);	//500 determined to be a good ceiling for string length for a single line
	
	
	//use strtok to read thru the file, checking for leading spaces for removal or opening quotations to signify a title which can contain a comma
	
	int assignto=0;	//variable to determine where values are assigned to	
	int loop=0;
	while(scanf("%s\n",curr)!=EOF){		//gets one line of input to parse through
		film* x=(film*)malloc(sizeof(film));	//current film record being made
		loop++;
		assignto++;
		
		char* val=strtok(curr,",");
		
		if(loop==1){	//category line will be skipped
				continue;
		}
		
		while (val!=NULL){
			if(strcmp(val,"")==0){	//empty value
				if(assignto==1){
					x->color="";
				}else if(assignto==2){
					x->director_name="";
				}else if(assignto==3){
					x->num_critic_for_reviews=0;
				}else if(assignto==4){
					x->duration=0;
				}else if(assignto==5){
					x->director_facebook_likes=0;
				}else if(assignto==6){
					x->actor_3_facebook_likes=0;
				}else if(assignto==7){
					x->actor_2_name="";
				}else if(assignto==8){
					x->actor_1_facebook_likes=0;
				}else if(assignto==9){
					x->gross=0;
				}else if(assignto==10){
					x->genres="";
				}else if(assignto==11){
					x->actor_1_name="";
				}else if(assignto==12){
					x->movie_title="";
				}else if(assignto==13){
					x->num_voted_users=0;
				}else if(assignto==14){
					x->cast_total_facebook_likes=0;
				}else if(assignto==15){
					x->actor_3_name="";
				}else if(assignto==16){
					x->facenumber_in_poster=0;
				}else if(assignto==17){
					x->plot_keywords="";
				}else if(assignto==18){
					x->movie_imdb_link="";
				}else if(assignto==19){
					x->num_user_for_reviews=0;
				}else if(assignto==20){
					x->language="";
				}else if(assignto==21){
					x->country="";
				}else if(assignto==22){
					x->content_rating="";
				}else if(assignto==23){
					x->budget=0;
				}else if(assignto==24){
					x->title_year=0;
				}else if(assignto==25){
					x->actor_2_facebook_likes=0;
				}else if(assignto==26){
					x->imdb_score=0;
				}else if(assignto==27){
					x->aspect_ratio=0;
				}else if(assignto==28){
					x->movie_facebook_likes=0;
				}
				continue;
			}else if(assignto==3|assignto==4|assignto==5|assignto==6|assignto==8|assignto==9|assignto==13|assignto==14|assignto==16|assignto==19|assignto==23|assignto==24|assignto==25|assignto==28){	//convert to int
				int numval=atoi(val);
				if(assignto==3){
					x->num_critic_for_reviews=numval;
				}else if(assignto==4){
					x->duration=numval;
				}else if(assignto==5){
					x->director_facebook_likes=numval;
				}else if(assignto==6){
					x->actor_3_facebook_likes=numval;
				}else if(assignto==8){
					x->actor_1_facebook_likes=numval;
				}else if(assignto==9){
					x->gross=numval;
				}else if(assignto==13){
					x->num_voted_users=numval;
				}else if(assignto==14){	
					x->cast_total_facebook_likes=numval;
				}else if(assignto==16){
					x->facenumber_in_poster=numval;
				}else if(assignto==19){	
					x->num_user_for_reviews=numval;
				}else if(assignto==23){
					x->budget=numval;
				}else if(assignto==24){
					x->title_year=numval;
				}else if(assignto==25){
					x->actor_2_facebook_likes=numval;
				}else{
					x->movie_facebook_likes=numval;
				}	
				
										
			}else if(assignto==26|assignto==27){		//convert to double
				if(assignto==26){
					x->imdb_score=atof(val);
				}else{
					x->aspect_ratio=atof(val);
				}
			}
			if(val[0]=='"'){	//opening quotation, check for closing quote
				
			}
			//add x to array
			
			val=strtok(NULL,",");
		}

	}



//	printf("reading done\n");
	
	return 0;

}

