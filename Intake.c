#pragma config(Hubs,  S1, MatrxRbtcs, none,     none,     none)
#pragma config(Hubs,  S2, MatrxRbtcs, none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Sensor, S3,     BumpBottomLift, sensorTouch)
#pragma config(Motor,  motorA,          Intake_Left,   tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorB,          Intake_Right,  tmotorNXT, openLoop, encoder)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_Matrix_S1_1, LiftRight,     tmotorMatrix, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_Matrix_S1_2, Right_Back,    tmotorMatrix, openLoop, encoder)
#pragma config(Motor,  mtr_Matrix_S1_3, Right_Front,   tmotorMatrix, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_Matrix_S1_4, Conveyor,      tmotorMatrix, openLoop, encoder)
#pragma config(Motor,  mtr_Matrix_S2_1, LiftLeft,      tmotorMatrix, openLoop, encoder)
#pragma config(Motor,  mtr_Matrix_S2_2, Spindle,       tmotorMatrix, openLoop, encoder)
#pragma config(Motor,  mtr_Matrix_S2_3, Left_Back,     tmotorMatrix, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_Matrix_S2_4, Left_Front,    tmotorMatrix, openLoop, encoder)
#pragma config(Servo,  srvo_Matrix_S1_1, BoxDoor,              tServoStandard)
#pragma config(Servo,  srvo_Matrix_S1_2, servo2,               tServoNone)
#pragma config(Servo,  srvo_Matrix_S1_3, BoxArm,               tServoStandard)
#pragma config(Servo,  srvo_Matrix_S1_4, servo4,               tServoNone)
#pragma config(Servo,  srvo_Matrix_S2_1, servo5,               tServoNone)
#pragma config(Servo,  srvo_Matrix_S2_2, servo6,               tServoNone)
#pragma config(Servo,  srvo_Matrix_S2_3, servo7,               tServoNone)
#pragma config(Servo,  srvo_Matrix_S2_4, Holder,               tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int conveyorSpeed = 100;
int intakeSpeed = 100;

int boxDoorClosed = 200;
int boxDoorOpen = 100;
int boxArmStart = 220;
int boxArmEnd = 80;

void intakeAtSpeed(float speed)
{
	motor[Intake_Left] = speed;
	motor[Intake_Right] = speed;
	motor[Spindle] = speed;
}

void conveyorAtSpeed(float speed)
{
	motor[Conveyor] = speed;
}

void openBoxDoor()
{
	servo[BoxDoor] = boxDoorOpen;
}

void closeBoxDoor()
{
	servo[BoxDoor] = boxDoorClosed;
}

void moveBoxArmToStart()
{
	servo[BoxArm] = boxArmStart;
}

void moveBoxArmToEnd()
{
	servo[BoxArm] = boxArmEnd;
}
