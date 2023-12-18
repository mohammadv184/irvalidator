CC = gcc
CFLAGS = -Wall -Wextra 
CINSTALL = install	


all: libirvalidator.a clean_extra
.PHONY: all

libirvalidator.a: card.o national_id.o phone.o
	$(AR) rcs $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f libirvalidator.a test
.PHONY: clean

clean_extra:
	rm -f *.o 
.PHONY: clean_extra	

test: tests/main_test.c libirvalidator.a clean_extra
	$(CC) $(CFLAGS) $< -o $@ -L. -lirvalidator
	./test
.PHONY: tests


install: libirvalidator.a clean_extra
	$(CINSTALL) -d $(DESTDIR)/usr/lib
	$(CINSTALL) -m 644 libirvalidator.a $(DESTDIR)/usr/lib
	$(CINSTALL) -d $(DESTDIR)/usr/include/irvalidator
	$(CINSTALL) -m 644 *.h $(DESTDIR)/usr/include/irvalidator