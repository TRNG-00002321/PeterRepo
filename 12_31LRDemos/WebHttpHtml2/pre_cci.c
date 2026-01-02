# 1 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c"
# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);
char *   lr_encrypt_ex (const char *plaintext);
char *   lr_decrypt_ex (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 515 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 518 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 542 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 576 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 599 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 623 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 702 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 763 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 778 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 814 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 822 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 828 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 933 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 940 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 962 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1038 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1067 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


# 1079 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_aws_get_secret(char * first_param, ...);
int   lr_aws_get_secret_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_azure_set_service_port(int portNum);
int   lr_azure_ad_client_get_token(char * first_param, ...);
int   lr_azure_ad_client_get_token_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_azure_kv_get_secret(char * first_param, ...);
int   lr_azure_kv_get_secret_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_hashicorp_vault_get_secret_with_token(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_token_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_get_secret_with_approle_auth(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_approle_auth_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_get_secret_with_jwt_auth(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_jwt_auth_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_get_secret_with_userpass_auth(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_userpass_auth_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_save_secret_from_json(char * first_param, ...);
int   lr_hashicorp_vault_save_secret_from_json_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 

















# 1 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"7cd6923f8fc249568af1cf260de00962\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2



 
 



# 3 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c" 2

# 1 "Action.c" 1
Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/success.txt?ipv4", "Referer=", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("suggest", 
		"URL=https://merino.services.mozilla.com/api/v1/suggest?providers=geolocation&q=&sid=c99b1065-5500-4e0e-8935-0489c2acfb00&seq=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("HDc", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		"LAST");

	web_custom_request("HDc_2", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		"LAST");

	web_custom_request("HDc_3", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		"LAST");

	web_custom_request("HDc_4", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		"LAST");

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		"LAST");

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"LAST");

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		"LAST");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A24%2C%22imageUrl%22%3A%224600%22%2C%22productName%22%3A%22HP%20Roar%20Mini%20Wireless%20Speaker%22%2C%22color%22%3A%7B%22code%22%3A%22DD3A5B%22%2C%22name%22%3A%22RED%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A296%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A44.99%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("advantageonlineshopping.com", 
		"URL=https://advantageonlineshopping.com/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/services.properties", "ENDITEM", 
		"Url=/app/tempFiles/popularProducts.json", "ENDITEM", 
		"Url=/css/images/category_banner_4.png", "ENDITEM", 
		"Url=/css/images/Filter.png", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4200", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4300", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4700", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4400", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4100", "ENDITEM", 
		"Url=/catalog/fetchImage?image_id=4500", "ENDITEM", 
		"LAST");

	web_custom_request("dns-query", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07example\\x03com\\x00\\x00\\x02\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00X\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00L\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"LAST");

	web_custom_request("32d40eda-f06b-4fca-a854-b679d2e29baa", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/32d40eda-f06b-4fca-a854-b679d2e29baa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3405,\"start_time\":\"2026-01-02T10:27:23.000-06:00\",\"end_time\":\"2026-01-02T10:27:40.494-06:00\",\"reason\":\"startup\",\"experiments\":{\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch"
		"\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\""
		"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":"
		"{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch"
		"\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\""
		"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\"},\"metrics\":{\"boolean\":{\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_all\":false,\""
		"search.engine.default.overridden_by_third_party\":false,\"urlbar.pref_suggest_online_enabled\":true,\"policies.is_enterprise\":false,\"urlbar.pref_suggest_online_available\":false,\"search.engine.private.overridden_by_third_party\":false},\"counter\":{\"browser.engagement.active_ticks\":1},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":1,\"urlbar.pref_max_results\":10},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\""
		"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-1-d&q=\"},\"string\":{\"search.engine.private.provider_id\":\"\",\"search.engine.default.partner_code\":\"firefox-b-1-d\",\"region.home_region\":\"US\",\"search.engine.default.provider_id\":\"google\",\"search.engine.default.display_name\":\"Google\",\""
		"search.engine.private.load_path\":\"\",\"search.engine.default.load_path\":\"[app]google\",\"search.engine.private.display_name\":\"\",\"search.engine.private.partner_code\":\"\"},\"object\":{\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"},\"glean.distribution.ext\":{}}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\"glean_timestamp\":\"1767371231017\",\"path_key\":\"clean\",\"loadfail_reason\""
		":\"N/A\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"loadfail_reason\":\"N/A\",\"can_load\":\"true\",\"glean_timestamp\":\"1767371231018\",\"path_key\":\"clean\"}},{\"timestamp\":4,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"shutdown_ok\":\"false\",\"glean_timestamp\":\"1767371231021\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":6224,\"category\":\"webcompatreporting\",\"name\":\""
		"reason_dropdown\",\"extra\":{\"setting\":\"required\",\"glean_timestamp\":\"1767371237241\"}},{\"timestamp\":7529,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1767371238546\",\"primary\":\"database\",\"db_active_count\":\"39\",\"total_store_count\":\"100\",\"trigger\":\"startup\",\"store_active_count\":\"39\",\"total_db_count\":\"100\"}},{\"timestamp\":8121,\"category\":\"doh\",\"name\":\"state_enabled\",\"extra\":{\"glean_timestamp\":\""
		"1767371239138\",\"value\":\"null\"}},{\"timestamp\":8121,\"category\":\"doh\",\"name\":\"evaluate_v2_heuristics\",\"extra\":{\"evaluateReason\":\"startup\",\"glean_timestamp\":\"1767371239138\",\"captiveState\":\"unknown\",\"networkID\":\"CCSvF96go/r3Y2fnNu4r6Zdtuix7h+iJ5nGyNDK9vBk=\",\"filtering\":\"\",\"enterprise\":\"\",\"steeredProvider\":\"\",\"canaries\":\"\",\"platform\":\"\",\"value\":\"enable_doh\"}},{\"timestamp\":9523,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment"
		"\",\"extra\":{\"reason\":\"feature-conflict\",\"value\":\"smart-tab-groups-rollout-beta\",\"glean_timestamp\":\"1767371240540\"}},{\"timestamp\":9523,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"smart-tab-groups-rollout-beta\",\"glean_timestamp\":\"1767371240540\",\"reason\":\"feature-conflict\"}},{\"timestamp\":9529,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1767371240546\",\"value\":\""
		"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\"}},{\"timestamp\":9529,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"reason\":\"feature-conflict\",\"experiment\":\"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1767371240547\"}},{\"timestamp\":9750,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1767371240767\"}},{\"timestamp\":11333,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra"
		"\":{\"glean_timestamp\":\"1767371242350\",\"value\":\"null\"}}]}", 
		"LAST");

	web_custom_request("dns-query_2", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1767369434365\\\"\"},\"use_webpush\":true,\"uaid\":\"7cd6923f8fc249568af1cf260de00962\"}", 
		"IsBinary=0", 
		"LAST");

	 

	web_custom_request("dns-query_3", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"LAST");

	web_custom_request("68b2637f-2149-4ccd-8e19-5d17b77c6d67", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/68b2637f-2149-4ccd-8e19-5d17b77c6d67", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"counter\":{\"browser.engagement.active_ticks\":74,\"browser.engagement.uri_count\":25},\"datetime\":{\"usage.first_run_date\":\"2024-02-20-06:00\"},\"boolean\":{\"usage.is_default_browser\":true,\"usage.windows_backup_enabled\":true},\"uuid\":{\"usage.profile_group_id\":\"d0a0b3f7-f386-471c-a903-784ea9b2e5a4\",\"usage.profile_id\":\"d04da519-03fa-4b31-a66e-b806e5bfa256\"},\"quantity\":{\"usage.windows_user_profile_age_in_days\":313,\"usage.windows_build_number\":26100},\""
		"string\":{\"usage.os_version\":\"10.0\",\"usage.app_display_version\":\"146.0.1\",\"usage.distribution_id\":\"default\",\"usage.app_build\":\"20251217121356\",\"usage.app_channel\":\"release\",\"usage.os\":\"WINNT\"}}}", 
		"EXTRARES", 
		"Url=https://advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_custom_request("4507d954-9cf6-4b35-b8ab-fdc760156de0", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/4507d954-9cf6-4b35-b8ab-fdc760156de0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":48,\"start_time\":\"2026-01-02T10:27:24.000-06:00\",\"end_time\":\"2026-01-02T10:27:41.766-06:00\",\"reason\":\"pre_init\",\"experiments\":{\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\""
		"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\""
		"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ohttp-merino-content-recs-rollout\":{\""
		"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\","
		"\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"os_version\":\"10.0\",\"app_display_version\":\"146.0.1\",\"app_build\":\"20251217121356\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"app_channel\":\"release\"},\"metrics\":{\"timing_distribution\":{\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"16777216\":1},\"sum\":16832400},\""
		"glean.validation.shutdown_wait\":{\"values\":{\"2965820\":1},\"sum\":3001000}},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"counter\":{\"glean.health.init_count\":25,\"glean.upload.pending_pings\":14},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"object\":{\"glean.database.load_sizes\":{\"new\":110763,\"open\":110763,\"post_open\""
		":110763,\"post_open_user\":110763,\"post_load_ping_lifetime_data\":110763,\"user_records\":66,\"ping_records\":415,\"application_records\":291,\"ping_memory_records\":415},\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371244,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767371243,\"file_modified\":1767371244,\"file_size\":110763}]},{\"dir_name\":\"events\",\"dir_exists\":true,\""
		"dir_created\":1708446626,\"dir_modified\":1767371244,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1767323415,\"file_modified\":1767371244,\"file_size\":2485},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371244,\"file_count\":14,\"files\":[{\"file_name\":\"0090a9b5-0cd3-4ed1-a1fe-7d6d7d738d1e\",\""
		"file_created\":1767371218,\"file_modified\":1767371218,\"file_size\":6158},{\"file_name\":\"01bb9a1c-9f73-4a0c-8cad-9af98378255a\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":460},{\"file_name\":\"25dfa3f8-1d63-4ac4-a2f3-26d6262614b8\",\"file_created\":1767371243,\"file_modified\":1767371243,\"file_size\":16894},{\"file_name\":\"27d6475c-434f-4003-9dea-bc7fe18fa2c4\",\"file_created\":1767371219,\"file_modified\":1767371219,\"file_size\":6158},{\"file_name\":\""
		"4b31f805-3665-4c30-82c1-d3fad095da01\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":5408},{\"file_name\":\"78a6c1ed-37f9-4956-a658-baf79a44e8c5\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":1122},{\"file_name\":\"88df6178-2747-4b7e-b020-838f8e97c902\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":7430},{\"file_name\":\"898535a1-7b59-4a82-aaf3-36ba67e38a8d\",\"file_created\":1767371244,\"file_modified\":1767371244,\""
		"file_size\":7554},{\"file_name\":\"8f9756fb-de66-44a6-a905-60c30ecb828c\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":22170},{\"file_name\":\"917dab16-22d8-4693-aa51-fbaadeee8806\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":43554},{\"file_name\":\"9c8259ba-fd7e-4362-9774-7700db832e7b\",\"file_created\":1767371219,\"file_modified\":1767371219,\"file_size\":53545},{\"file_name\":\"bdccc7bf-7fe5-4afa-a9b8-691dcf592f6b\",\"file_created\""
		":1767371243,\"file_modified\":1767371243,\"file_size\":305024},{\"file_name\":\"c0f42e25-8b9c-4d87-9de1-843e5a1893f6\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":869},{\"file_name\":\"f1974022-22cf-4f48-b2be-a7e2782fc2fe\",\"file_created\":1767371243,\"file_modified\":1767371243,\"file_size\":1063}]}]},\"memory_distribution\":{\"glean.database.size\":{\"values\":{\"110217\":1},\"sum\":110763},\"glean.upload.pending_pings_directory_size\":{\"values\":{\"460390\":1},\""
		"sum\":477184}}}}", 
		"LAST");

	web_custom_request("08646e3a-117a-4121-bebc-2908a818a77b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/08646e3a-117a-4121-bebc-2908a818a77b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":49,\"start_time\":\"2026-01-02T10:27:41.000-06:00\",\"end_time\":\"2026-01-02T10:27:41.794-06:00\",\"reason\":\"post_init\",\"experiments\":{\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{"
		"\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_build\":\"20251217121356\",\"app_display_version\":\"146.0.1\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"windows_build_number\":26100,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\"},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\","
		"\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371261,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767371260,\"file_modified\":1767371261,\"file_size\":100922}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371260,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1767323415,\"file_modified\":1767371260,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\""
		"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371261,\"file_count\":21,\"files\":[{\"file_name\":\"0090a9b5-0cd3-4ed1-a1fe-7d6d7d738d1e\",\"file_created\":1767371218,\"file_modified\":1767371218,\"file_size\":6158},{\"file_name\":\"01bb9a1c-9f73-4a0c-8cad-9af98378255a\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":460},{\"file_name\":\""
		"25dfa3f8-1d63-4ac4-a2f3-26d6262614b8\",\"file_created\":1767371243,\"file_modified\":1767371243,\"file_size\":16894},{\"file_name\":\"27d6475c-434f-4003-9dea-bc7fe18fa2c4\",\"file_created\":1767371219,\"file_modified\":1767371219,\"file_size\":6158},{\"file_name\":\"32d40eda-f06b-4fca-a854-b679d2e29baa\",\"file_created\":1767371260,\"file_modified\":1767371260,\"file_size\":8631},{\"file_name\":\"34a428fb-2a3a-42b2-8526-55d424a813ac\",\"file_created\":1767371261,\"file_modified\":1767371261,\""
		"file_size\":5439},{\"file_name\":\"4507d954-9cf6-4b35-b8ab-fdc760156de0\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":8241},{\"file_name\":\"4b31f805-3665-4c30-82c1-d3fad095da01\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":5408},{\"file_name\":\"68b2637f-2149-4ccd-8e19-5d17b77c6d67\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":830},{\"file_name\":\"78a6c1ed-37f9-4956-a658-baf79a44e8c5\",\"file_created\":1767371244,\""
		"file_modified\":1767371244,\"file_size\":1122},{\"file_name\":\"7a6fe4de-2d1c-4ab4-bc17-4724ea46a480\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":1122},{\"file_name\":\"88df6178-2747-4b7e-b020-838f8e97c902\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":7430},{\"file_name\":\"898535a1-7b59-4a82-aaf3-36ba67e38a8d\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":7554},{\"file_name\":\"8f9756fb-de66-44a6-a905-60c30ecb828c\","
		"\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":22170},{\"file_name\":\"917dab16-22d8-4693-aa51-fbaadeee8806\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":43554},{\"file_name\":\"9c8259ba-fd7e-4362-9774-7700db832e7b\",\"file_created\":1767371219,\"file_modified\":1767371219,\"file_size\":53545},{\"file_name\":\"a57b2207-70e4-4bbf-bd20-58c0fe188f95\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":22170},{\"file_name\":\""
		"b8dbc295-c908-44dd-85fc-0de38ba4bb2e\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":460},{\"file_name\":\"bdccc7bf-7fe5-4afa-a9b8-691dcf592f6b\",\"file_created\":1767371243,\"file_modified\":1767371243,\"file_size\":305024},{\"file_name\":\"c0f42e25-8b9c-4d87-9de1-843e5a1893f6\",\"file_created\":1767371244,\"file_modified\":1767371244,\"file_size\":869},{\"file_name\":\"f1974022-22cf-4f48-b2be-a7e2782fc2fe\",\"file_created\":1767371243,\"file_modified\":1767371243,\""
		"file_size\":1063}]}]},\"counter\":{\"glean.health.init_count\":25},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"}}}", 
		"LAST");

	web_custom_request("d377d2e9-be01-457f-8e3e-b97f27f11089", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/d377d2e9-be01-457f-8e3e-b97f27f11089", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":69,\"start_time\":\"2026-01-02T10:27:24.000-06:00\",\"end_time\":\"2026-01-02T10:28:48.344-06:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\""
		":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\""
		"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\""
		":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\""
		"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"locale\":\"en-US\",\"app_display_version\":\"146.0.1\",\"os_version\":\"10.0\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"counter\":{\""
		"use.counter.css.page.css_background_position_x\":1,\"use.counter.css.page.css_border_radius\":1,\"use.counter.css.page.css_padding_bottom\":1,\"use.counter.css.page.css_webkit_transform\":1,\"use.counter.css.page.css_text_align\":1,\"use.counter.css.page.css_text_overflow\":1,\"use.counter.css.page.css_padding_top\":1,\"use.counter.css.page.css_webkit_border_radius\":1,\"use.counter.css.page.css_stop_opacity\":1,\"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.page.css_fill_rule\""
		":1,\"use.counter.css.page.css_animation_fill_mode\":1,\"use.counter.css.doc.css_clip_rule\":2,\"use.counter.css.page.css_outline\":1,\"use.counter.css.page.css_word_wrap\":1,\"use.counter.css.page.css_border_right\":1,\"use.counter.css.page.css_stroke_width\":1,\"use.counter.css.page.css_padding_left\":1,\"use.counter.css.page.css_border_width\":1,\"use.counter.css.page.css_max_width\":1,\"use.counter.css.page.css_border_bottom\":1,\"use.counter.css.page.css_background_color\":1,\""
		"use.counter.css.page.css_direction\":1,\"use.counter.css.page.css_line_height\":1,\"use.counter.css.page.css_resize\":1,\"use.counter.css.page.css_webkit_animation_duration\":1,\"use.counter.css.doc.css_fill\":3,\"use.counter.css.page.css_border_top\":1,\"use.counter.page.mixed_content_not_upgraded_image_success\":1,\"use.counter.css.page.css_animation_duration\":1,\"use.counter.css.page.css_vertical_align\":1,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.page.css_margin\":1,\""
		"use.counter.css.page.css_min_height\":1,\"use.counter.css.page.css_right\":1,\"use.counter.page.console_log\":1,\"use.counter.css.page.css_overflow_y\":1,\"use.counter.css.page.css_webkit_animation_delay\":1,\"use.counter.css.page.css_webkit_box_sizing\":1,\"use.counter.css.page.css_background\":1,\"use.counter.css.page.css_webkit_animation_timing_function\":1,\"use.counter.css.page.css_cursor\":1,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.page.css_text_indent\":1,\""
		"use.counter.css.page.css_animation_name\":1,\"use.counter.css.page.css_fill\":1,\"use.counter.css.page.css_text_transform\":1,\"use.counter.css.page.css_visibility\":1,\"use.counter.css.page.css_white_space\":1,\"use.counter.css.page.css_moz_animation_name\":1,\"use.counter.css.page.css_moz_transition\":1,\"use.counter.css.page.css_transition\":1,\"use.counter.css.page.css_transition_delay\":1,\"use.counter.css.page.css_list_style\":1,\"use.counter.css.page.css_webkit_transform_origin\":1,\""
		"use.counter.css.page.css_stop_color\":1,\"use.counter.css.page.css_perspective\":1,\"use.counter.css.page.css_letter_spacing\":1,\"use.counter.css.page.css_webkit_box_shadow\":1,\"use.counter.css.page.css_webkit_transition\":1,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.doc.css_height\":3,\"use.counter.css.doc.css_fill_rule\":2,\"use.counter.css.page.css_overflow\":1,\"use.counter.css.page.css_animation_timing_function\":1,\"use.counter.page.domparser_parsefromstring\":1,\""
		"use.counter.css.page.css_border\":1,\"use.counter.css.page.css_table_layout\":1,\"use.counter.css.page.css_content\":1,\"use.counter.css.page.css_stroke\":1,\"use.counter.css.page.css_webkit_animation_iteration_count\":1,\"use.counter.css.page.css_margin_left\":1,\"use.counter.css.page.css_touch_action\":1,\"use.counter.css.page.css_text_shadow\":1,\"use.counter.css.page.css_transform_origin\":1,\"use.counter.css.page.css_webkit_backface_visibility\":1,\"use.counter.css.doc.css_width\":3,\""
		"use.counter.css.page.css_animation_iteration_count\":1,\"use.counter.css.page.css_webkit_animation_name\":1,\"use.counter.css.page.css_webkit_user_select\":1,\"use.counter.page.console_error\":1,\"use.counter.css.page.css_border_collapse\":1,\"use.counter.css.page.css_transform\":1,\"use.counter.css.page.css_display\":1,\"use.counter.content_documents_destroyed\":3,\"use.counter.css.page.css_flex_direction\":1,\"use.counter.css.page.css_moz_user_select\":1,\""
		"use.counter.css.page.css_background_repeat\":1,\"use.counter.css.page.css_border_left\":1,\"use.counter.css.page.css_background_position\":1,\"use.counter.css.doc.css_fill_opacity\":1,\"use.counter.css.page.css_max_height\":1,\"use.counter.css.page.css_padding\":1,\"use.counter.css.page.css_border_color\":1,\"use.counter.css.page.css_margin_bottom\":1,\"use.counter.css.page.css_height\":1,\"use.counter.css.page.css_overflow_x\":1,\"use.counter.css.page.css_transform_style\":1,\""
		"use.counter.css.page.css_width\":1,\"use.counter.page.htmldocument_featurepolicy\":1,\"use.counter.css.page.css_box_sizing\":1,\"use.counter.css.page.css_background_image\":1,\"use.counter.css.page.css_background_size\":1,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.page.css_moz_box_sizing\":1,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.page.css_margin_right\":1,\"use.counter.deprecated_ops.page.sync_xmlhttp_request_deprecated\":1,\""
		"use.counter.css.page.css_animation_delay\":1,\"use.counter.css.page.css_padding_right\":1,\"use.counter.css.page.css_position\":1,\"use.counter.css.page.css_pointer_events\":1,\"use.counter.css.page.css_user_select\":1,\"use.counter.css.page.css_top\":1,\"use.counter.css.page.css_bottom\":1,\"use.counter.css.page.css_webkit_appearance\":1,\"use.counter.css.page.css_backface_visibility\":1,\"use.counter.css.page.css_box_shadow\":1,\"use.counter.css.page.css_color\":1,\""
		"use.counter.css.page.css_float\":1,\"use.counter.css.page.css_webkit_animation_fill_mode\":1,\"use.counter.css.page.css_margin_top\":1,\"use.counter.css.page.css_left\":1,\"use.counter.css.page.css_z_index\":1}}}", 
		"LAST");

	web_custom_request("c0c35911-0aca-4f43-bacf-5f9175a529f9", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/c0c35911-0aca-4f43-bacf-5f9175a529f9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5737,\"start_time\":\"2026-01-02T10:27:41.000-06:00\",\"end_time\":\"2026-01-02T10:30:46.845-06:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"locale\":\"en-US\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\","
		"\"os\":\"Windows\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\"},\"metrics\":{\"quantity\":{\"topsites.rows\":1},\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab_content.surface_id\":\"\",\"newtab.newtab_category\":\"enabled\",\"newtab.locale\":\"en-US\"},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"boolean\":{\"newtab.weather_enabled\":true,\"topsites.enabled\":false,\"pocket.enabled\":false,\"newtab.highlights_enabled\":false,\"newtab.search.enabled\":true,\""
		"topsites.sponsored_enabled\":false,\"pocket.sponsored_stories_enabled\":true}}}", 
		"LAST");

	web_custom_request("48874c08-1f7d-4caa-9edf-62968f9bc23b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/48874c08-1f7d-4caa-9edf-62968f9bc23b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":278,\"start_time\":\"2026-01-02T10:27:41.000-06:00\",\"end_time\":\"2026-01-02T10:30:47.839-06:00\",\"experiments\":{\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\""
		"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\""
		"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"client_id\":\""
		"239171f7-8dd5-4379-b459-d37192315b39\",\"app_display_version\":\"146.0.1\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"app_build\":\"20251217121356\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"windows_build_number\":26100},\"metrics\":{\"object\":{\"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\""
		"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":false,\"browser__newtabpage__activity_stream__feeds__topsites\":false,\"browser__newtabpage__activity_stream__showSearch\":true,\"browser__newtabpage__activity_stream__showSponsoredTopSites\":false,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":3,\""
		"browser__toolbars__bookmarks__visibility\":\"always\",\"browser__urlbar__lastUrlbarSearchSeconds\":1767370607,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":true,\""
		"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"termsofuse__acceptedDate\":\"0\",\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"firefox@betterttv.net\",\"formautofill@mozilla.org\",\""
		"ipp-activator@mozilla.com\",\"jid1-NIfFY2CA8fy1tg@jetpack\",\"moz-addon-prod@7tv.app\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"treestyletab@piro.sakura.ne.jp\",\"uBlock0@raymondhill.net\",\"video-bg-play@timdream.org\",\"webcompat@mozilla.org\",\"{60B7679C-BED9-11E5-998D-8526BB8E7F8B}\",\"{f1f7b448-d666-46c6-9dfa-3ee4c5c83578}\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.attribution_data\":{},\"nimbus_targeting_context.active_experiments\":[\""
		"long-term-holdback-2025h1-growth-desktop\",\"mozilla-foundation-donation-promotion-moments-page\"],\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\"address-autofill-desktop-pref-release-rollout\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\","
		"\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-newtab-telemetry-by-time-zone-offset\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"firefox-backup-feature-gradual-rollout\","
		"\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"link-previews-all-channel-rollout-with-onboarding\",\"link-previews-all-channel-rollout-without-onboarding\",\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\",\"multiple-profile-switching-rollout-v2\",\"new-tab-14802025121163751-to-release\",\"ohttp-merino-content-recs-rollout\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\""
		"private-window-visual-refresh-rollout\",\"product-insight-telemetry-via-server-knobs-rollout-release\",\"refactor-new-tab-telemetry-rollout\",\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"sections-rollout-us\",\"smart-tab-groups-rollout\",\"store-new-tab-content-interactions-locally\",\"taskbar-tabs-discovery-global-rollout\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\""
		"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":26100,\"windowsVersion\":10},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":false,\"registered\":true},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":59,\"date\":\"2025-12-06\"},{\"numberOfURLsVisited\":69,\"date\":\"2025-12-07\"},{\"numberOfURLsVisited\":203,\"date\":\"2025-12-08\"},{\"numberOfURLsVisited\":74,\"date\""
		":\"2025-12-09\"},{\"numberOfURLsVisited\":220,\"date\":\"2025-12-10\"},{\"numberOfURLsVisited\":546,\"date\":\"2025-12-11\"},{\"numberOfURLsVisited\":101,\"date\":\"2025-12-12\"},{\"numberOfURLsVisited\":80,\"date\":\"2025-12-13\"},{\"numberOfURLsVisited\":87,\"date\":\"2025-12-14\"},{\"numberOfURLsVisited\":353,\"date\":\"2025-12-15\"},{\"numberOfURLsVisited\":220,\"date\":\"2025-12-16\"},{\"numberOfURLsVisited\":99,\"date\":\"2025-12-17\"},{\"numberOfURLsVisited\":100,\"date\":\"2025-12-18\"},{"
		"\"numberOfURLsVisited\":227,\"date\":\"2025-12-19\"},{\"numberOfURLsVisited\":60,\"date\":\"2025-12-20\"},{\"numberOfURLsVisited\":280,\"date\":\"2025-12-21\"},{\"numberOfURLsVisited\":313,\"date\":\"2025-12-22\"},{\"numberOfURLsVisited\":237,\"date\":\"2025-12-23\"},{\"numberOfURLsVisited\":60,\"date\":\"2025-12-24\"},{\"numberOfURLsVisited\":31,\"date\":\"2025-12-25\"},{\"numberOfURLsVisited\":449,\"date\":\"2025-12-26\"},{\"numberOfURLsVisited\":241,\"date\":\"2025-12-27\"},{\""
		"numberOfURLsVisited\":159,\"date\":\"2025-12-28\"},{\"numberOfURLsVisited\":197,\"date\":\"2025-12-29\"},{\"numberOfURLsVisited\":279,\"date\":\"2025-12-30\"},{\"numberOfURLsVisited\":247,\"date\":\"2025-12-31\"},{\"numberOfURLsVisited\":60,\"date\":\"2026-01-01\"},{\"numberOfURLsVisited\":41,\"date\":\"2026-01-02\"}],\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\""
		"browser.newtabpage.activity-stream.discoverystream.merino-provider.ohttp.enabled\",\"browser.newtabpage.activity-stream.telemetry.privatePing.enabled\",\"browser.newtabpage.activity-stream.telemetry.privatePing.redactNewtabPing.enabled\",\"browser.newtabpage.activity-stream.discoverystream.sections.personalization.enabled\",\"browser.newtabpage.activity-stream.discoverystream.sections.customizeMenuPanel.enabled\",\"browser.newtabpage.trainhopAddon.version\",\"browser.startup.page\",\""
		"signon.firefoxRelay.showToAllBrowsers\",\"pdfjs.enableAltText\",\"doh-rollout.mode\",\"doh-rollout.uri\",\"network.prefetch-next\",\"network.http.speculative-parallel-limit\",\"app.update.background.allowUpdatesForUnelevatedInstallations\",\"browser.toolbars.bookmarks.visibility\",\"browser.contextual-services.contextId.rotation-in-days\",\"dom.ipc.processPriorityManager.backgroundUsesEcoQoS\"],\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-app-menu-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-and-addresses-corrected-copy\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-callout-passwords-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\""
		"account-adoption-pxi-menu-fx141-fx142\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"address-autofill-desktop-pref-release-rollout\",\"branchSlug\":\"enable-address-autofill\"},{\"experimentSlug\":\"address-bar-update-launch-extention\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"address-bar-update-rollout-v1\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"ai-chatbot-rollout-in-the-old-sidebar\",\"branchSlug\":\"treatment-d\"},{\"experimentSlug\":\"ai-tab-groups-experiment-with-opt-in-100-population\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"chatbot-sticky-cta\",\"branchSlug\":\"control-no-sticky-cta\"},{\"experimentSlug\":\"chips-rollout-to-firefox\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-15-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-30-days\",\"branchSlug\""
		":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"crlite-rollout\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"custom-wallpapers-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},"
		"{\"experimentSlug\":\"default-ui-experiment-logo-in-corner-rollout\",\"branchSlug\":\"logo-in-corner\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"device-migration-accounts-toolbar-icon\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"device-migration-accounts-toolbar-icon-rollout\""
		",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"disable-cookie-store-api-in-firefox-136\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"enable-newtab-telemetry-by-time-zone-offset\",\"branchSlug\":\"branch\"},{\"experimentSlug\":\"enable-nimbus-sql-datastore\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\""
		"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\"firefox-backup-feature-gradual-rollout\",\"branchSlug\":\"treatment\"},{\"experimentSlug\":\"flip-the-pref-for-the-mfcdm-origin-fliter\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fox-doodle-and-tail-fox-2025-v2-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\""
		"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-2025-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"hide-descriptions-on-newtab-articles-fix-us-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"hide-descriptions-on-newtab-articles-us-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"higher-placement-phase-3-rollout\",\"branchSlug\":\"rollout\"},{\""
		"experimentSlug\":\"https-upgrades-fallback-time-bugfix\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"link-previews-all-channel-rollout-with-onboarding\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"link-previews-all-channel-rollout-without-onboarding\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"link-previews-mvp-long-press-preview-rollout\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"login-status-advisory-callout-rollout\",\"branchSlug\":\""
		"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\",\"branchSlug\":\"treatment-d\"},{\"experimentSlug\":\"multiple-profile-switching-feature-v1-rollout\",\"branchSlug\":\"treatment-a-multi-profiles\"},{\"experimentSlug\":\""
		"multiple-profile-switching-rollout-v2\",\"branchSlug\":\"treatment-a-multi-profiles\"},{\"experimentSlug\":\"new-alt-text-flow-and-generation-in-pdfs-for-en-locales-outside-of-eu-pre-137\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"new-sync-setup-flow\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145020250919173227-to-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-14802025121163751-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-automated-personalization-local-ranking-2\",\"branchSlug\":\"local-and-server\"},{\"experimentSlug\":\"new-tab-content-card-ui-updates\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"ohttp-merino-content-recs-rollout\",\"branchSlug\":\"enable-ohttp\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\""
		"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pdf-annotations-signatures-ab-experiment\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"performance-metric-calibration-release-134\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"perplexity-secondary-search-initial-part2\",\"branchSlug\":\"try-with-cta\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\""
		"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"product-insight-telemetry-via-server-knobs-rollout-release\",\"branchSlug\":\"control-rollout\"},{\"experimentSlug\":\"refactor-new-tab-telemetry-rollout\",\"branchSlug\":\"treatment\"},{\"experimentSlug\":\"report-this-ad\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\""
		":\"sign-in-with-call-out\"},{\"experimentSlug\":\"search-result-de-duplication\",\"branchSlug\":\"de-duplication\"},{\"experimentSlug\":\"sections-rollout-us\",\"branchSlug\":\"sections\"},{\"experimentSlug\":\"shortcuts-visual-refresh-shortcuts-redesign-rollout\",\"branchSlug\":\"shortcuts-redesign\"},{\"experimentSlug\":\"simplified-chatbot-onboarding-short-copy-1-step-rollout\",\"branchSlug\":\"treatment-c-short-copy-1-step\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\""
		"very-sticky-thompson\"},{\"experimentSlug\":\"smart-tab-groups-rollout\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"spoc-placement-second-row\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"spoc-positions-and-placements-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"store-new-tab-content-interactions-locally\",\"branchSlug\":\"store-events\"},{\"experimentSlug"
		"\":\"tab-groups-50-rollout-no-onboarding\",\"branchSlug\":\"tab-groups\"},{\"experimentSlug\":\"tab-groups-promotional-onboarding\",\"branchSlug\":\"onboarding\"},{\"experimentSlug\":\"taskbar-tabs-discovery-en-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"unified-search-button-callout-rollout-v1\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"us-review-checker-131-137-continuity-rollout\",\"branchSlug\":\"rollout-treatment\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"whats-new-page-136\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],"
		"\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_context.is_default_handler\":{\"html\":true,\"pdf\":false},\"nimbus_targeting_context.primary_resolution\":{\"height\":816,\"width\":1382}},\"quantity\":{\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.addresses_saved\":5,\"nimbus_targeting_context.firefox_version\":146,\"nimbus_targeting_context.profile_group_profile_count\":0,\""
		"nimbus_targeting_context.memory_mb\":32439,\"nimbus_targeting_context.build_id\":1,\"nimbus_targeting_context.profile_age_created\":1708446624084,\"nimbus_targeting_context.total_bookmarks_count\":19},\"boolean\":{\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.user_prefers_reduced_motion\":false,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true,\""
		"nimbus_targeting_context.is_fx_a_signed_in\":true,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.is_default_browser\":true},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"string\":{\"nimbus_targeting_context.locale\":\"en-US\",\""
		"nimbus_targeting_context.version\":\"146.0.1\",\"nimbus_targeting_context.current_date\":\"Fri, 02 Jan 2026 16:30:41 GMT\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.region\":\"US\"}}}", 
		"LAST");

	web_custom_request("dns-query_4", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04prod\rohttp-gateway\\x04prod\\x0Bwebservices\\x06mozgcp\\x03net\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x005\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00)\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"LAST");

	web_custom_request("dns-query_5", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04prod\rohttp-gateway\\x04prod\\x0Bwebservices\\x06mozgcp\\x03net\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x005\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00)\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"EXTRARES", 
		"Url=https://prod.ohttp-gateway.prod.webservices.mozgcp.net/ohttp-configs", "Referer=", "ENDITEM", 
		"LAST");

	web_custom_request("dns-query_6", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\rmozilla-ohttp\\x0Bfastly-edge\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00F\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		":\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"LAST");

	web_custom_request("dns-query_7", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\rmozilla-ohttp\\x0Bfastly-edge\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00F\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		":\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		"EXTRARES", 
		"Url=https://advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_url("ALL", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(5);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		"EXTRARES", 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_custom_request("mozilla-ohttp.fastly-edge.com", 
		"URL=https://mozilla-ohttp.fastly-edge.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=message/ohttp-res", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=message/ohttp-req", 
		"BodyBinary=\\x80\\x00 \\x00\\x01\\x00\\x01\\x8D\\xB8\\xAE\\x8E\\xFDE/\\xBB\\x05\\xD9\\x12\\x87\\xFE\\xAB\\xD0ZG\\x9F\\x05\\xBF\\x90\\xDA\\x064!\\xFE\\x83MW\\xF5^{w\\xADLq-x\\x9C\\x0B<\\x8B\\xDB\\xB7p.\\xAD<\\x18\\x12\\xFAQi\\xA7\\x93\\x8B\\xCF@QR0\\xB0\\x16>\\xCDR[\\xFD\\xBE\\x8Co\\xB4\\x82\\xC7\\xFB}\\x11\\xE4\\xABw\\xA2M\\x81BBtU\\x8C\\x0Ccn\\xDF\\xDD\\xC7i\\xCC\\x8E\\xAC\\xB8w\\xB2|`2\\xE7sC\\xB2\\xC0LCI\\xA7\\xBA\\x87\\xD7S\\x071M,\\xA7\\xAA\\x13)/\\x86#_"
		"{\\x96\\xF5'N\\x8A4\\xFE\\xC0\\xA6e\\xA1n\\xFCH\\xAD\\xE6\\x1F`[\\xBA\\xD7%/\\xD8\\x0B\\xE4\\x94C\\xB8\\x07\\x92F\\x1E\\xE1\\xB3\\xD7/\\x1B\\xE0\\xC4\\x86j\\x08\\xF5}{\\xC5\\x01@\\xDE\\xBB[\\x80\\x1Dr\\x0Er\\x9A\\xD9\\x98\\x02\\x1E\\xC7\\x8C\\xD5\\xACID\\x9EW1Aqo\\xD2F\\xB49\\x1B\\xC8@\\xA8`\\xFC\\xFF\\x8A\\xFB\\xE8\\x97e\\xB1\\xB3\\xBF)\\xDAU\\xF0\\xCC\\xD0\\x8F\\xC4\\xC10F\\x1F+WT\\x01\\xEF\\xEB\\x9A=\\x87}\\x17\\x07\r\\xEB]~\\x98\\x9E*\\x8D\\x0B&\\x9F\\xA3\\xAB4\\xE1\\x84\\xFC]o"
		"<\\xC6\\xC1B\\x93\\x01\\x87Y\\x92\\x06\\xE8-\\xC7\\xD0w\\xF5\\xD7\\xF4o\\x91\\x17L\\xEA?x\\x00\\xB4I\\x15elyJ\\x91U5\\xC0L\\x02\\xD3\\xFE\\x00\\xEF\\xA7\\x17\\xE5\\x83\\xD3\\xE5e\\xB7l\\xB4\\xB3\\xBC\\\\>n8\\xE5\\xD0L\\xA5_F\\xAB\\xC8q\\xB31)I\\xF6\\xCFv\\x06\\x90+!\\xC6\\x03\\xCC\\xF8,&5y+\\xD3\\xEB\\xC8G\\x99.\\x18l\\xE0\\xC2b\\xC8\\x83\\xA8H\\xF4\\x83\\x9B\\xAB\\xB8~\\x8F#\\xCD\\x19\\xA4hI\\xADV\\x8Em\\xA0\\xAA\\x01\\xB4K\\xB8\\x8F[\\xB2\\xF7\\xA7t\\xFC\\xE7\\xA3\\xB8#\\x07\\xA0\\x08"
		":1\\xCF\\xC2\\xAA\\x18\\x81\\xB7svT->\\xB1\\x1B\\xEC\\x92\\xD3k\\x1C\\xFD\\x96Jjr\\xAD\\x85\\xD3D\\xE3)\\xDBOC\r7\\xC3\\xB0\\xE2\\x18P|mIiNx\\x8D\\xB8\\x94\\xFA?\\xDC\\xC5\\x1A\\x98-y\\xCF\\x994\\xAA=\\xBC<~\\xD4\\xE1%;\\x96\\xA2\\x9E\\xA9\\xFC_U~\\x87g\\x85c\\xFD\\xE0\\xDDTu\\x88\\xAD\\x00\\xB9N\\x04\\xC4A\\x8D\\x14\\xE8\\xD5b\\xB0\\x87\\x03Gw\\xDE\\x94\\xDB\\xD4\\xA1}", 
		"LAST");

	web_custom_request("b1427d24-8249-4deb-afb9-c22f457b4dcf", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/b1427d24-8249-4deb-afb9-c22f457b4dcf", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5723,\"start_time\":\"2026-01-02T10:27:41.000-06:00\",\"end_time\":\"2026-01-02T10:30:48.360-06:00\",\"reason\":\"active\",\"experiments\":{\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout"
		"\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\""
		"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\""
		"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100"
		",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20251217121356\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"counter\":{\"browser.engagement.active_ticks\":15,\"browser.engagement.uri_count\":3},\"object\":{\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"},\""
		"glean.distribution.ext\":{}},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"string\":{\"usage.distribution_id\":\"default\",\"startup.profile_selection_reason\":\"default\"},\"boolean\":{\"usage.is_default_browser\":true}}}", 
		"LAST");

	web_custom_request("0fcf4945-fea3-4957-a9a4-60c73702a335", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/fx-accounts/1/0fcf4945-fea3-4957-a9a4-60c73702a335", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t78.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":32,\"start_time\":\"2026-01-01T19:47:14.000-06:00\",\"end_time\":\"2026-01-02T10:30:48.411-06:00\",\"reason\":\"active\",\"experiments\":{\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},"
		"\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\""
		":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-nimbus\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\""
		"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,"
		"\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"os\":\"Windows\",\"app_display_version\":\"146.0.1\",\"locale\":\"en-US\",\"app_build\":\"20251217121356\",\"os_version\":\"10.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"string\":{\"client_association.uid\":\"0294e33c230a4a6fb29daeff3cf1ec7f\"},\"uuid\":{\"client_association.legacy_client_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\"}}}", 
		"LAST");

	web_custom_request("dce9f768-7f6e-4e3d-b730-fc773f31dde3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/dce9f768-7f6e-4e3d-b730-fc773f31dde3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"datetime\":{\"usage.first_run_date\":\"2024-02-20-06:00\"},\"string\":{\"usage.distribution_id\":\"default\",\"usage.os\":\"WINNT\",\"usage.os_version\":\"10.0\",\"usage.app_build\":\"20251217121356\",\"usage.app_display_version\":\"146.0.1\",\"usage.app_channel\":\"release\"},\"boolean\":{\"usage.is_default_browser\":true,\"usage.windows_backup_enabled\":true},\"counter\":{\"browser.engagement.active_ticks\":15,\"browser.engagement.uri_count\":3},\"quantity\":{\""
		"usage.windows_user_profile_age_in_days\":313,\"usage.windows_build_number\":26100},\"uuid\":{\"usage.profile_group_id\":\"d0a0b3f7-f386-471c-a903-784ea9b2e5a4\",\"usage.profile_id\":\"d04da519-03fa-4b31-a66e-b806e5bfa256\"}}}", 
		"LAST");

	web_custom_request("3c5145f1-23cf-49f5-a5c1-021cb902c879", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/3c5145f1-23cf-49f5-a5c1-021cb902c879", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t80.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":50,\"start_time\":\"2026-01-02T10:27:41.000-06:00\",\"end_time\":\"2026-01-02T10:30:48.497-06:00\",\"reason\":\"pre_init\",\"experiments\":{\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\""
		"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\""
		"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\""
		":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"locale\":\"en-US\",\""
		"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_display_version\":\"146.0.1\",\"app_channel\":\"release\",\"os\":\"Windows\",\"app_build\":\"20251217121356\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\"},\"metrics\":{\"memory_distribution\":{\"glean.database.size\":{\"values\":{\"193570\":1},\"sum\":200592},\"glean.upload.pending_pings_directory_size\":{\"values\":"
		"{\"35733\":1},\"sum\":35840}},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371334,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767371328,\"file_modified\":1767371334,\"file_size\":200592}]},{\"dir_name\":\""
		"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371260,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1767323415,\"file_modified\":1767371333,\"file_size\":4511},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371328,\"file_count\":5,\"files\":[{\"file_name\":\""
		"08646e3a-117a-4121-bebc-2908a818a77b\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":8414},{\"file_name\":\"32d40eda-f06b-4fca-a854-b679d2e29baa\",\"file_created\":1767371260,\"file_modified\":1767371260,\"file_size\":8631},{\"file_name\":\"4507d954-9cf6-4b35-b8ab-fdc760156de0\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":8241},{\"file_name\":\"68b2637f-2149-4ccd-8e19-5d17b77c6d67\",\"file_created\":1767371261,\"file_modified\":1767371261,\""
		"file_size\":830},{\"file_name\":\"d377d2e9-be01-457f-8e3e-b97f27f11089\",\"file_created\":1767371328,\"file_modified\":1767371328,\"file_size\":10289}]}],\"glean.database.load_sizes\":{\"new\":200592,\"open\":200592,\"post_open\":200592,\"post_open_user\":200592,\"post_load_ping_lifetime_data\":200592,\"user_records\":66,\"ping_records\":974,\"application_records\":308,\"ping_memory_records\":974}},\"timing_distribution\":{\"glean.upload.send_failure\":{\"values\":{\"5107605667\":1,\"11863283\":1,"
		"\"4987896\":1,\"9367390095\":1},\"sum\":15283803000},\"glean.upload.send_success\":{\"values\":{\"5569883475\":1,\"6623745058\":2,\"827968132\":1,\"189812531\":1,\"146365470\":1,\"759250124\":1,\"206992033\":1,\"246156398\":1,\"2553802833\":1,\"451452825\":1,\"174058858\":2,\"492312796\":2,\"225726412\":1,\"536870912\":1,\"413984066\":1},\"sum\":28123530000},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"4987896\":1},\"sum\":5029500},\"glean.validation.shutdown_wait\":{\"values\":{\""
		"2965820\":1},\"sum\":3011500}},\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"counter\":{\"glean.upload.pending_pings\":5,\"glean.health.init_count\":26}}}", 
		"LAST");

	web_url("24", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/products/24", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("categories", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("29fcd8aa-b65a-49ef-82ca-2db69d525dbb", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/29fcd8aa-b65a-49ef-82ca-2db69d525dbb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t83.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":51,\"start_time\":\"2026-01-02T10:30:48.000-06:00\",\"end_time\":\"2026-01-02T10:30:48.571-06:00\",\"reason\":\"post_init\",\"experiments\":{\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\""
		"telemetry_sdk_build\":\"66.1.2\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":26100,\"app_display_version\":\"146.0.1\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"counter\":{\"glean.health.init_count\":26},\"uuid\":{\"legacy.telemetry.client_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371448,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767371445,\"file_modified\":1767371448,\"file_size\":188607}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\""
		":1767371446,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1767323415,\"file_modified\":1767371446,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767371448,\"file_count\":13,\"files\":[{\"file_name\":\"08646e3a-117a-4121-bebc-2908a818a77b\",\"file_created\":1767371261,\"file_modified\""
		":1767371261,\"file_size\":8414},{\"file_name\":\"0fcf4945-fea3-4957-a9a4-60c73702a335\",\"file_created\":1767371448,\"file_modified\":1767371448,\"file_size\":5097},{\"file_name\":\"32d40eda-f06b-4fca-a854-b679d2e29baa\",\"file_created\":1767371260,\"file_modified\":1767371260,\"file_size\":8631},{\"file_name\":\"3c5145f1-23cf-49f5-a5c1-021cb902c879\",\"file_created\":1767371448,\"file_modified\":1767371448,\"file_size\":7563},{\"file_name\":\"442ea218-aa75-4142-800f-97d86c9eda50\",\"file_created"
		"\":1767371445,\"file_modified\":1767371445,\"file_size\":10691},{\"file_name\":\"4507d954-9cf6-4b35-b8ab-fdc760156de0\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":8241},{\"file_name\":\"48874c08-1f7d-4caa-9edf-62968f9bc23b\",\"file_created\":1767371447,\"file_modified\":1767371447,\"file_size\":22170},{\"file_name\":\"50044cb0-7bbf-4976-9805-af97461ee8cd\",\"file_created\":1767371448,\"file_modified\":1767371448,\"file_size\":460},{\"file_name\":\""
		"68b2637f-2149-4ccd-8e19-5d17b77c6d67\",\"file_created\":1767371261,\"file_modified\":1767371261,\"file_size\":830},{\"file_name\":\"b1427d24-8249-4deb-afb9-c22f457b4dcf\",\"file_created\":1767371448,\"file_modified\":1767371448,\"file_size\":5473},{\"file_name\":\"c0c35911-0aca-4f43-bacf-5f9175a529f9\",\"file_created\":1767371446,\"file_modified\":1767371446,\"file_size\":1122},{\"file_name\":\"d377d2e9-be01-457f-8e3e-b97f27f11089\",\"file_created\":1767371328,\"file_modified\":1767371328,\""
		"file_size\":10289},{\"file_name\":\"dce9f768-7f6e-4e3d-b730-fc773f31dde3\",\"file_created\":1767371448,\"file_modified\":1767371448,\"file_size\":829}]}]}}}", 
		"LAST");

	web_custom_request("442ea218-aa75-4142-800f-97d86c9eda50", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/442ea218-aa75-4142-800f-97d86c9eda50", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t84.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3406,\"start_time\":\"2026-01-02T10:27:40.000-06:00\",\"end_time\":\"2026-01-02T10:30:45.204-06:00\",\"reason\":\"startup\",\"experiments\":{\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":"
		"\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type"
		"\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"build_date\""
		":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"app_build\":\"20251217121356\",\"app_display_version\":\"146.0.1\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"boolean\":{\"urlbar.pref_suggest_online_available\":false,\"urlbar.pref_suggest_online_enabled\":true,\"urlbar.pref_suggest_sponsored\":false,\"usage.is_default_browser\":true,\"urlbar.pref_suggest_all\":false,\"urlbar.pref_suggest_topsites\":true,\"policies.is_enterprise\":false,\"search.engine.private.overridden_by_third_party\":false,\"search.engine.default.overridden_by_third_party\":false},\"counter\":{\"browser.engagement.uri_count\":3,\""
		"browser.engagement.active_ticks\":15},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":1,\"urlbar.pref_max_results\":10},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-1-d&q=\"},\"string\":{\"search.engine.default.partner_code\":\"firefox-b-1-d\",\"search.engine.default.display_name\":\"Google\",\"search.engine.private.load_path\":\"\",\"search.engine.private.display_name\":\"\",\""
		"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.default.load_path\":\"[app]google\",\"region.home_region\":\"US\",\"search.engine.default.provider_id\":\"google\"},\"object\":{\"glean.distribution.ext\":{},\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"}}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"glean_timestamp\":\"1767371251288\",\"can_load\":\"true\",\""
		"loadfail_reason\":\"N/A\",\"path_key\":\"clean\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"glean_timestamp\":\"1767371251289\",\"loadfail_reason\":\"N/A\",\"can_load\":\"true\",\"path_key\":\"clean\"}},{\"timestamp\":4,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1767371251292\",\"shutdown_ok\":\"false\",\"shutdown_reason\":\"N/A\"}},{\"timestamp\":3904,\""
		"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"setting\":\"required\",\"glean_timestamp\":\"1767371255192\"}},{\"timestamp\":5909,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1767371257198\",\"store_active_count\":\"39\",\"total_db_count\":\"100\",\"total_store_count\":\"100\",\"trigger\":\"startup\",\"primary\":\"database\",\"db_active_count\":\"39\"}},{\"timestamp\":6822,\"category\":\"doh\",\"name\":\""
		"state_enabled\",\"extra\":{\"glean_timestamp\":\"1767371258111\",\"value\":\"null\"}},{\"timestamp\":6823,\"category\":\"doh\",\"name\":\"evaluate_v2_heuristics\",\"extra\":{\"platform\":\"\",\"filtering\":\"\",\"canaries\":\"\",\"networkID\":\"NO3+1T5M88uX/BkPngT21OBQh6ggk6jLmakI1NtP4jA=\",\"captiveState\":\"not_captive\",\"steeredProvider\":\"\",\"glean_timestamp\":\"1767371258111\",\"enterprise\":\"\",\"value\":\"enable_doh\",\"evaluateReason\":\"startup\"}},{\"timestamp\":8011,\"category\":\""
		"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"reason\":\"feature-conflict\",\"value\":\"smart-tab-groups-rollout-beta\",\"glean_timestamp\":\"1767371259299\"}},{\"timestamp\":8011,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"glean_timestamp\":\"1767371259299\",\"experiment\":\"smart-tab-groups-rollout-beta\",\"reason\":\"feature-conflict\"}},{\"timestamp\":8026,\"category\":\"extensions.data\",\"name\":\"sync_usage_quotas\",\"extra\":{\""
		"glean_timestamp\":\"1767371259315\",\"backend\":\"rust\",\"items_count\":\"8\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"items_over_quota\":\"0\",\"total_size_bytes\":\"780\"}},{\"timestamp\":8029,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1767371259317\",\"value\":\"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\"}},{\"timestamp\":8029,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\""
		":{\"glean_timestamp\":\"1767371259317\",\"reason\":\"feature-conflict\",\"experiment\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":8241,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1767371259529\"}},{\"timestamp\":8320,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"containers\":\"4\",\"glean_timestamp\":\"1767371259608\"}},{\"timestamp\":8491,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\""
		"extra\":{\"value\":\"not-major\",\"glean_timestamp\":\"1767371259779\"}},{\"timestamp\":9499,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1767371260787\",\"featureId\":\"newtabTrainhopAddon\",\"value\":\"new-tab-14802025121163751-to-release\",\"branchSlug\":\"rollout\"}},{\"timestamp\":9499,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"rollout\",\"glean_timestamp\":\"1767371260787\",\"experiment\":\""
		"new-tab-14802025121163751-to-release\",\"feature_id\":\"newtabTrainhopAddon\"}},{\"timestamp\":11773,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"branchSlug\":\"control\",\"glean_timestamp\":\"1767371333588\",\"featureId\":\"feltPrivacy\",\"value\":\"private-window-visual-refresh-rollout\"}},{\"timestamp\":11773,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"control\",\"glean_timestamp\":\"1767371333588\",\"experiment\":\""
		"private-window-visual-refresh-rollout\",\"feature_id\":\"feltPrivacy\"}},{\"timestamp\":23840,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"attemptCount\":\"3\",\"value\":\"2\",\"results\":\"tt+\",\"captivePortal\":\"1\",\"time\":\"17582.702500\",\"trigger\":\"pref-change\",\"contextReason\":\"pref-change\",\"networkID\":\"6AnBabX5roo+4n/UL+8A0v4x/kY=\",\"glean_timestamp\":\"1767371275128\"}},{\"timestamp\":31511,\"category\":\"network.dns\",\"name\":\""
		"trr_confirmation_context\",\"extra\":{\"captivePortal\":\"1\",\"glean_timestamp\":\"1767371282799\",\"results\":\"+\",\"attemptCount\":\"1\",\"trigger\":\"retry-trr\",\"contextReason\":\"success\",\"value\":\"2\",\"time\":\"1268.039700\",\"networkID\":\"6AnBabX5roo+4n/UL+8A0v4x/kY=\"}},{\"timestamp\":82280,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1767371333568\"}}]}", 
		"LAST");

	web_url("search", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("home-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", "ENDITEM", 
		"LAST");

	web_url("products", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/{Category_Id}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_output_message("Category ID: %s", lr_eval_string("{Category_Id}"));

	web_url("attributes", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("category-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("20", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/products/20", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("all_data", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("products_2", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("product-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\peter\\onedrive\\desktop\\desktop\\qea\\assignmentrepo\\12_31lrdemos\\webhttphtml2\\\\combined_WebHttpHtml2.c" 2

