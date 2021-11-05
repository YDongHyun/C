#include <stdio.h>

struct student {
    unsigned int id; // ÇÐ¹ø
    char* name; // ÀÌ¸§
    int scores[3]; // Korean, English, Math
    double total; // ÃÑÁ¡
    double ave; // Æò±Õ
};
enum subject { KOR = 0, ENG, MATH };
int main() {
    struct student score_table[4] = {
      {1001,"John",{99,88,77}},
      {1002,"Marry",{100,90,95}},
      {1003,"Steve",{70,80,90}},
      {1004,"Cook",{60,61,62}}
    };
    struct student* std;
    std = score_table;

    for (int i = 0; i < 4; i++, std++) {
        (*std).total = (*std).scores[KOR] + (*std).scores[ENG] + (*std).scores[MATH];
        (*std).ave = ((*std).scores[KOR] + (*std).scores[ENG] + (*std).scores[MATH]) / 3;
    }
    std = score_table;
    printf("  ID\tNAME\t   KOR\t   ENG\t  MATH\t\t TOTAL\t\t  AVE\n");
    for (int i = 0; i < 4; i++, std++) {
        printf("%d\t%s\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%.2f \n", std->id, std->name, std->scores[KOR], std->scores[ENG], std->scores[MATH], std->total, std->ave); 
    }
}