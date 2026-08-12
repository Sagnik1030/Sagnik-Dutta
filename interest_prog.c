#include <stdio.h>
#include <string.h>

void recommend_path(char interest[]) {
    if (strcmp(interest, "AI") == 0 || strcmp(interest, "ai") == 0) {
        printf("Explore Machine Learning and Computer Vision.\n");
    } else if (strcmp(interest, "Web") == 0 || strcmp(interest, "web") == 0) {
        printf("Explore Web Development.\n");
    } else {
        printf("Keep exploring different areas of programming.\n");
    }
}

int main() {
    char name[50];
    char interest[20];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("What area interests you? (AI/Web): ");
    scanf("%19s", interest);

    printf("\nHello, %s!\n", name);
    recommend_path(interest);

    return 0;
}
