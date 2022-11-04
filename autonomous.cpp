#include "../include/main.h"

void pre_auton(void) {
  bool auton_select = true;

  do {
    // end condition
    if (BTN_B.pressing()) auton_select = false;
    // selection
    if (BTN_UP.pressing()) control_mode = 0;
    else if (BTN_DOWN.pressing()) control_mode = 1;
    
  } while(auton_select);

  return;
}

void autonomous(void) {
  switch (auton_num) {
    case 0:
      //tmp
    case 1:
      printf("tmp");
  }
}