for(int i = 1; i < strlen(p); i++){
        for(int j = 0; j < i; j++){
            if((int)p[j] > (int)p[i]){
                printf("p[j]: %c | p[i]: %c\n", p[j], p[i]);
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        }
        printf("\n");
    }