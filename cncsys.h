#define MACHINE_NAME            "CNCSYS"
#define N_AXIS 3
#define ENABLE_SD_CARD 

#define SPINDLE_TYPE SpindleType::HUANYANG
#define VFD_RS485_TXD_PIN GPIO_NUM_4
#define VFD_RS485_RTS_PIN GPIO_NUM_2
#define VFD_RS485_RXD_PIN GPIO_NUM_27


#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_13

#define Y_STEP_PIN              GPIO_NUM_25
#define Y_DIRECTION_PIN         GPIO_NUM_26

#define Y2_STEP_PIN             GPIO_NUM_32
#define Y2_DIRECTION_PIN        GPIO_NUM_26

#define Z_STEP_PIN              GPIO_NUM_21
#define Z_DIRECTION_PIN         GPIO_NUM_22

// Common enable for all steppers
#define STEPPERS_DISABLE_PIN    GPIO_NUM_14

#define X_LIMIT_PIN             GPIO_NUM_15
#define Y_LIMIT_PIN             GPIO_NUM_16
#define Y2_LIMIT_PIN            GPIO_NUM_39
#define Z_LIMIT_PIN             GPIO_NUM_17

#define PROBE_PIN               GPIO_NUM_34  // labeled Probe
#define DEFAULT_INVERT_PROBE_PIN 1


// Spindle/Type=Laser
//
//    To Enable: Send Grbl a $32=1 command.
//    To Disable: Send Grbl a $32=0 command.

#define SPINDLE_PWM_BIT_PRECISION 10
#define SPINDLE_PWM_BASE_FREQ   20000
#define LASER_OUTPUT_PIN        GPIO_NUM_33

// 37! 38! ''not typically available, input only, need pu/pd''
// 20! 24! 28! 29! 30! 31!  ''Not on ESP32s''

// Not (yet) hooked up
//#define CONTROL_RESET_PIN           GPIO_NUM_34  // needs external pullup   --- Used on probe
//#define CONTROL_FEED_HOLD_PIN       GPIO_NUM_35  // needs external pullup
//#define CONTROL_CYCLE_START_PIN     GPIO_NUM_36  // needs external pullup

#define DEFAULT_INVERT_LIMIT_PINS       0 // boolean
#define DEFAULT_REPORT_INCHES           0 // false

#define DEFAULT_HOMING_ENABLE           1  // false
#define DEFAULT_HOMING_DIR_MASK         7 // move positive dir Z,negative X,Y
#define DEFAULT_HOMING_FEED_RATE        50.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE        1500.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY   250 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF          2.0 // mm
#define DEFAULT_HOMING_CYCLE_0      bit(Z_AXIS)
#define DEFAULT_HOMING_CYCLE_1      (bit(X_AXIS) | bit (Y_AXIS))
#define DEFAULT_HOMING_SQUARED_AXES bit(Y_AXIS)
#define DEFAULT_HOMING_DIR_MASK     (bit(X_AXIS) | bit (Y_AXIS))
#define DEFAULT_HOMING_INIT_LOCK    # Must home on startup

// XYZ Defaults
#define DEFAULT_X_STEPS_PER_MM 320.0
#define DEFAULT_Y_STEPS_PER_MM 320.0
#define DEFAULT_Z_STEPS_PER_MM 320.0

#define DEFAULT_X_MAX_TRAVEL 450.0
#define DEFAULT_Y_MAX_TRAVEL 720.0
#define DEFAULT_Z_MAX_TRAVEL 135.0

#define DEFAULT_X_MAX_RATE 4500
#define DEFAULT_Y_MAX_RATE 4500
#define DEFAULT_Z_MAX_RATE 4500


// Cycle Start, Feed Hold, Reset, Safety Door.
#define INVERT_CONTROL_PIN_MASK B0000

//#define INVERT_LIMIT_PIN_MASK B0000

#define DEFAULT_SOFT_LIMIT_ENABLE 1
#define DEFAULT_HARD_LIMIT_ENABLE 1

#define DEFAULT_X_ACCELERATION  80
#define DEFAULT_Y_ACCELERATION  80
#define DEFAULT_Z_ACCELERATION  80

#define DEFAULT_SPINDLE_RPM_MAX 24000
#define DEFAULT_SPINDLE_RPM_MIN 6000
#define DEFAULT_SPINDLE_DELAY_SPINUP   12
#define DEFAULT_SPINDLE_DELAY_SPINDOWN 12
