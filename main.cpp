    #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"mysql.h"
using namespace std;
    
    int main(){
    	MYSQL conn;
    	MYSQL_RES *res_set;
    	MYSQL_ROW row;
    
    	mysql_init(&conn);
    
    	if (!mysql_real_connect(&conn, "localhost", "root", "123", "mysql", 3306, NULL, 0)){
    		fprintf(stderr, "Failed to connect to database: Error: %s\n",
    			mysql_error(&conn));
    	}
    	else{
    		fprintf(stderr, "Successfully connected to Database.\n");
                int status = mysql_query(&conn, "set names utf8");

    		 status = mysql_query(&conn, "SELECT * FROM menu_1 ");
    		res_set = mysql_store_result(&conn);
    		int count = mysql_num_rows(res_set);
    		printf("No of rows = %d\n", count);
    
    		while ((row = mysql_fetch_row(res_set)) != NULL){
    			for (int i = 0; i<mysql_num_fields(res_set); i++){
    				printf("%s \t", row[i] != NULL ? row[i] : "NULL");
    			}
    			printf("\n");
    		}
    	}
    
    	mysql_close(&conn);
    	getchar();
    	return 0;
    }
    

