/*
 * Include file for user programs using the Mathomatic symbolic math library API.
 */

int matho_init(void);				/* one-time Mathomatic initialization */
int matho_process(char *input, char **outputp);	/* Mathomatic command or expression input */
int matho_parse(char *input, char **outputp);	/* Mathomatic expression or equation input */
void matho_clear(void);				/* Restart Mathomatic quickly and cleanly, replaces clear_all(). */

void free_mem(void);		/* Free all allocated memory before quitting Mathomatic, if operating system doesn't when done. */
				/* Mathomatic becomes unusable after free_mem(), until matho_init() is called again. */
				/* Only Symbian OS is known to need a call to free_mem() before quitting. */

extern int cur_equation;	/* current equation space number (origin 0) */

extern int result_en;		/* Equation number of the API's returned result, */
				/* if the result is also stored in an equation space, */
				/* otherwise -1 for no equation number associated with result. */
				/* Set by the last call to matho_parse() or matho_process(). */
				/* Useful if you want to know where the result string is from, */
				/* to act on it with further commands. */

extern const char *warning_str;	/* optional warning message generated by the last command */
