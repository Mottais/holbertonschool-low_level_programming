#ifndef _EXISTE_DEJA_
#define _EXISTE_DEJA_
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct CodeFormat_Fonction - CodeFormat-->NameFonction
 *
 * @Code_Format: The code of format
 * @Pointeur_Fonction_Print: The function associated
 */
typedef struct CodeFormat_Fonction
{
	char *Code_Format;
	void (*Pointeur_Fonction_Print)();
} TypeDef_CodeFormat_Fonction;

void print_all(const char * const format, ...);

#endif
