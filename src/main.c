#include <stdio.h>
#include <string.h>

int maincontroll() {
    char command[16];
    scanf("%15s", command);
    
    if (!strcmp(command, "quit")) {
        printf("quited\n");
        return 1;
    }else if (!strcmp(command, "look")) {
        printf("looked\n");
        return 0;
    }

    if (!strcmp(command, "north")) {
        printf("north\n");
    }else if (!strcmp(command, "east")) {
        printf("east\n");
    }else if (!strcmp(command, "south")) {
        printf("south\n");
    }else if (!strcmp(command, "west")) {
        printf("west\n");
    }


    return 2;
}

void map() {
    printf("#######################\n");
    printf("#---------#-------#---#\n");
    printf("#---------#---#---#---#\n");
    printf("#---------#---#---#---#\n");
    printf("#######--########-#---#\n");
    printf("#---------------------#\n");
    printf("###################---#\n\n");
}

int main() {
    printf("Добро пожаловать в НЕ увлекательную игру от SSKKUULL\nКарта:\n");
    map();

    for(int ex, steps; ex!=1;) {
        printf("Steps: %d\nenter the command: ", steps);
        switch (maincontroll()) {
            case 1:
                ex = 1;
                break;
            case 2:
                printf("Uknown command! use commands: 'north', 'east', 'south', 'west', 'look'\n Use 'quit' for exit from game\n");
                break;
            default:
                steps++;
        }
    }   
    return 0;
}