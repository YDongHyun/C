#include <stdio.h>
#include <stdlib.h>

#define NULL 0
#define N 10

/* 자기참조 구조체 */
struct SUJA_LIST {
	int suja;
	struct SUJA_LIST* daeum;
};

int bytesu;

struct SUJA_LIST* node_chuga(int n, struct SUJA_LIST* sijak) {
	struct SUJA_LIST* p;

	p = sijak;
	while (p->daeum != NULL)
		p = p->daeum;
	p->daeum = (struct SUJA_LIST*)malloc(bytesu);
	p->daeum->suja = n;
	p->daeum->daeum = NULL;

	return sijak;
}

void list_pyosi(struct SUJA_LIST* sijak) {
	struct SUJA_LIST* p;

	p = sijak;
	while (p->daeum != NULL) {
		printf("%d-", p->suja);
		p = p->daeum;
	}
	printf("%d\n", p->suja);
}

struct SUJA_LIST* node_sakje(int n, struct SUJA_LIST* sijak) {
	int i;
	struct SUJA_LIST* sakjenodep, * p;
	p = sijak;

	for (i = 0; i < n; i++)
		p = p->daeum;

	sakjenodep = p->daeum;
	p->daeum = sakjenodep->daeum;
	sakjenodep->daeum = NULL;

	return (sakjenodep);
}
