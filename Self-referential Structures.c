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
void node_sabip(int n, int suchi, struct SUJA_LIST* sijak) {
	int i;
	struct SUJA_LIST* bogwan, * p;

	p = sijak;
	for (i = 0; i < n; i++)
		p = p->daeum;

	bogwan = p->daeum;
	p->daeum = (struct SUJA_LIST*)calloc(bytesu, 1);
	p->daeum->suja = suchi;
	p->daeum->daeum = bogwan;
}

void node_idong(int jun, int hoo, struct SUJA_LIST* sijak) {
	int i;
	struct SUJA_LIST* idongnodep, * p;
	idongnodep = node_sakje(jun, sijak);
	node_sabip(hoo, idongnodep->suja, sijak);

}
