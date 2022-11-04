#include "../include/main.h"

void opcontrol(void) {
  while (true) {
    // Drive
    if (control_mode == 0) {      // tank
      drive_r.spin(DIR_FWD, RIGHT_STICK_Y * drive_speed, VEL_PCT);
      drive_l.spin(DIR_FWD, LEFT_STICK_Y * drive_speed, VEL_PCT);
    }
    if (control_mode == 1) {      // osa
      drive_r.spin(DIR_FWD, (LEFT_STICK_Y - LEFT_STICK_X * SENSITIVITY) * drive_speed, VEL_PCT);
      drive_l.spin(DIR_FWD, (LEFT_STICK_Y + LEFT_STICK_X * SENSITIVITY) * drive_speed, VEL_PCT);
    }

    // Intake
    intake.spin(DIR_FWD, (BTN_L2.pressing() - BTN_L1.pressing()) * BTN_PCT, VEL_PCT);

    // Roller
    roller.spin(DIR_FWD, (BTN_R2.pressing() - BTN_R1.pressing()) * BTN_PCT, VEL_PCT);

    wait(20, msec);
  }
}