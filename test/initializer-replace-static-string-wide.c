struct {
	unsigned short s[6];
} u = {
	.s = u"aÎ±â¬ð",
	.s[2] = u'Â£',
};

struct {
	unsigned s[5];
} U = {
	.s = U"aÎ±â¬ð",
	.s[3] = U'ð',
};

struct {
	__typeof__(L' ') s[5];
} L = {
	.s = L"aÎ±â¬ð",
	.s[3] = L'ð',
};
