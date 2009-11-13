# Compilateur et linker
LEX = flex
#YACC = bison -y
CC = g++
LD = g++

# Drapeaux
CFLAGS = -I $(INC) -I $(DEP)
LDFLAGS = -lfl
#YFLAGS  = -d

# Dossiers
BIN = ./bin
DEP = ./dep
INC = ./inc
OBJ = ./obj
RES = ./res
SRC = ./src

# Nom du parser et du lexer 
LEXER = lexer
#PARSER = parser

# Nom du programme
EXEC = pseudo-compilo.exe

# Nom des fichiers de test
TEST_FILE = tri.pas

# Création de la liste des objets à partir de celle des sources
LSRCS = $(wildcard $(SRC)/*.l)
#YSRCS = $(wildcard $(SRC)/*.y)
CSRCS = $(wildcard $(SRC)/*.cpp)
DEPS = $(YSRCS:$(SRC)/%.y=$(DEP)/%.cpp) $(LSRCS:$(SRC)/%.l=$(DEP)/%.cpp)
OBJS = $(CSRCS:$(SRC)/%.cpp=$(OBJ)/%.o) $(DEPS:$(DEP)/%.cpp=$(OBJ)/%.o)

all: $(BIN)/$(EXEC)

$(BIN)/%.exe: $(OBJS)
	@mkdir -p $(BIN)
	$(LD) -o $@ $^ $(LDFLAGS) 

$(OBJ)/$(LEXER).o: $(DEP)/$(LEXER).cpp $(INC)/$(LEXER).h
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -o $@ -c $<
	
$(OBJ)/$(PARSER).o: $(DEP)/$(PARSER).cpp $(DEP)/$(PARSER).h
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -o $@ -c $< 
	
$(OBJ)/%.o: $(SRC)/%.cpp $(INC)/%.h
	@mkdir -p $(OBJ)
	$(CC) $(CFLAGS) -o $@ -c $< 
	
$(DEP)/$(LEXER).cpp: $(SRC)/$(LEXER).l
	@mkdir -p $(DEP)
	$(LEX) -o $@ $<

#$(DEP)/$(PARSER).cpp: $(SRC)/$(PARSER).y
#	@mkdir -p $(DEP)
#	$(YACC) $(YFLAGS) -o $@ $<
#	mv $(SRC)/$(PARSER).h $(DEP)/$(PARSER).h

.PHONY: exec clean distclean tmpclean

exec: $(BIN)/$(EXEC)
	@echo Test du programme :
	$(BIN)/$(EXEC) $(RES)/$(TEST_FILE)

clean:
	rm -rf $(OBJ) $(DEP)

distclean: clean
	rm -rf $(BIN)

tmpclean:
	rm -rf $(SRC)/*~ $(INC)/*~ ./*~
