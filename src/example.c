#include "example.h"

static int init = 0;
_Bool x[2];
int state[2];
_Bool prop4[2];
_Bool prop3[2];
_Bool prop2[2];
_Bool prop_all[2];
_Bool prop1[2];
int bias[2];
_Bool bias_max[2];

void skolem_0() {
  if (1) {
  bias_max[0] = 0;
  prop1[0] = 1;
  prop2[0] = 1;
  prop3[0] = 1;
  prop4[0] = 1;
  prop_all[0] = 1;
  bias[0] = (int) 0.0;
  state[0] = (int) 0.0;
} else {
  exit(0);
}
return;
}


void skolem_1() {
  if ((x[1]) && (((!((state[0]) == ((int) 0.0))) || (!(x[1]))) && (((!((state[0]) == ((int) 0.0))) || (x[1])) && ((((double) (bias[0])) >= 1.0) || ((((double) (bias[0])) <= ((-3.0))) || (bias_max[0])))))) {
  bias_max[1] = 1;
  prop1[1] = 1;
  prop2[1] = 1;
  prop3[1] = 1;
  prop4[1] = 1;
  prop_all[1] = 1;
  bias[1] = (int) (1.0 + ((double) (bias[0])));
  state[1] = (int) 3.0;
} else {
  if (x[1]) {
  bias_max[1] = 0;
  prop1[1] = 1;
  prop2[1] = 1;
  prop3[1] = 1;
  prop4[1] = 1;
  prop_all[1] = 1;
  bias[1] = (int) (1.0 + ((double) (bias[0])));
  state[1] = (int) 2.0;
} else {
  if ((!(x[1])) && (((!((state[0]) == ((int) 0.0))) || (!(x[1]))) && (((!((state[0]) == ((int) 0.0))) || (x[1])) && ((((double) (bias[0])) >= 3.0) || ((((double) (bias[0])) <= ((-1.0))) || (bias_max[0])))))) {
  bias_max[1] = 1;
  prop1[1] = 1;
  prop2[1] = 1;
  prop3[1] = 1;
  prop4[1] = 1;
  prop_all[1] = 1;
  bias[1] = (int) (((-1.0)) + ((double) (bias[0])));
  state[1] = (int) 3.0;
} else {
  if (!(x[1])) {
  bias_max[1] = 0;
  prop1[1] = 1;
  prop2[1] = 1;
  prop3[1] = 1;
  prop4[1] = 1;
  prop_all[1] = 1;
  bias[1] = (int) (((-1.0)) + ((double) (bias[0])));
  state[1] = (int) 1.0;
} else {
  if (!(x[1])) {
  bias_max[1] = 0;
  prop1[1] = 1;
  prop2[1] = 1;
  prop3[1] = 1;
  prop4[1] = 1;
  prop_all[1] = 1;
  bias[1] = (int) (((-1.0)) + ((double) (bias[0])));
  state[1] = (int) (3.0 / 2.0);
} else {
  if (x[1]) {
  bias_max[1] = 0;
  prop1[1] = 1;
  prop2[1] = 1;
  prop3[1] = 1;
  prop4[1] = 1;
  prop_all[1] = 1;
  bias[1] = (int) (1.0 + ((double) (bias[0])));
  state[1] = (int) (3.0 / 2.0);
} else {
  exit(0);
}

}

}

}

}

}
return;
}


void moveHistory() {
int iterator;
for (iterator = 2; iterator > 0; iterator--) {
  state[iterator] = state[iterator - 1];
  prop4[iterator] = prop4[iterator - 1];
  prop3[iterator] = prop3[iterator - 1];
  prop2[iterator] = prop2[iterator - 1];
  prop_all[iterator] = prop_all[iterator - 1];
  prop1[iterator] = prop1[iterator - 1];
  bias[iterator] = bias[iterator - 1];
  bias_max[iterator] = bias_max[iterator - 1];
}
return;
}


void updateFunction() {
if (init == 0) {
  skolem_0();
  moveHistory();
  init = init + 1;
} else {
  skolem_1();
  moveHistory();
  init = init + 1;
}
return;
}



