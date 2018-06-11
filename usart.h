#ifndef __USART_H
#define __USART_H

void usart_init(void);

int usart_get_char(void);
int _write(int file, char *ptr, int len);

#endif /* __USART_H */
