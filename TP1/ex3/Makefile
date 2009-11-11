# Compilateur et linker
LEX = flex
#YACC = bison -y
CC = gcc
LD = gcc

# Drapeaux
CFLAGS = -ansi -pedantic
LDFLAGS = -lfl
#YFLAGS  = -d

# Dossiers
BIN = ./bin
#INC = ./inc
OBJ = ./obj
RES = ./res
SRC = ./src

# Nom du parser et du lexer 
LEXER = lexer
#PARSER = parser

# Nom du programme
EXEC = $(LEXER).exe

# Nom des fichiers de test
TEST_FILE1 = tri.pas
TEST_FILE2 = test.c

all: $(BIN)/$(EXEC)

$(BIN)/%.exe: $(OBJ)/%.o
	@mkdir -p $(BIN)
	$(LD) -o $@ $^ $(LDFLAGS) 

$(OBJ)/%.o: $(SRC)/%.c
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -o $@ -c $< 

#$(SRC)/%.c: $(SRC)/%.y
#	$(YACC) $@ $< $(YFLAGS)
	
$(SRC)/%.c: $(SRC)/%.l
	$(LEX) -o $@ $<

exec: $(BIN)/$(EXEC)
	@echo Test imbrication correcte
	$(BIN)/$(EXEC) $(RES)/$(TEST_FILE1)
	@echo Test imbrication incorrecte
	$(BIN)/$(EXEC) $(RES)/$(TEST_FILE2)
	
clean:
	rm -rf $(OBJ) $(SRC)/*.c

distclean: clean
	rm -rf $(BIN)