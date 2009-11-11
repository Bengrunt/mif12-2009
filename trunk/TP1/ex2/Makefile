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

# Nom du fichier de test
TEST_FILE = tri.pas

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
	$(BIN)/$(EXEC) $(RES)/$(TEST_FILE)
	
clean:
	rm -rf $(OBJ) $(SRC)/*.c

distclean: clean
	rm -rf $(BIN)