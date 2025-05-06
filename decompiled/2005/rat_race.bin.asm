GlobalVarCount = 2
	G_VAR_0 object Race
	G_VAR_1 int Index

Strings:
	size
	get
	all
	attack_begin
	attack_end
	pt_ratf
	rats_manager
	race_over
	rotate_left
	rotate_right
	GetLocator
	Locator '
	' doesn't exist

Import:
	Sleep (1 args)
	GetPosition (1 args)
	GetDirection (1 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	GetScene (1 args)
	RemoveActor (1 args)
	RotateAsync (4 args)
	StopAsync (0 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	Teleport (4 args)
	Stop (0 args)
	self (1 args)
	Trace (1 args)
	FindActor (2 args)
	Trigger (2 args)
	Hold (0 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
	GTASK_1  Params = 2
		EVENT_7 Op = 0xaf Vars = (int)

Events:
EVENT_6 Op = 0xe6 Vars = ()

0x0: PushEmpty(cvector, cvector, int, bool, int, int, int, bool, object, cvector, cvector, int, bool, int, int, int, bool, object)
0x1: Push((int) 1)
0x2: @ Sleep(Stack[-1])
0x3: Pop(1)
0x4: @ GetPosition(Stack[-9])
0x5: Pop(0)
0x6: @ GetDirection(Stack[-8])
0x7: Pop(0)
0x8: PushEmpty(cvector, bool)
0x9: Push((float)100.0)
0xa: Pop(1); Push(Stack[-11] * Stack[-1]);
0xb: Stack[-3] = Stack[-12] + Stack[-1]; Pop(1);
0xc: Stack[-1] = (bool) 0
0xd: Push(-2, 0); TaskCall(1)
0xe: Call2 0x76

0xf: Pop(-2, 0); TaskReturn
0x10: Pop(2)
0x11: Stack[-7] = (int) 0
0x12: Stack[-6] = (bool) 1
0x13: Push(GlobalVars[0])
0x14: @@ size(Stack[-6])
0x15: Pop(1)
0x16: Stack[-4] = (int) 0
0x17: Pop(0); Push((bool) Stack[-4] < Stack[-5])
0x18: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x19: Push(GlobalVars[0])
0x1a: @@ get(Stack[-4], Stack[-5])
0x1b: Pop(1)
0x1c: Pop(0); Push((bool) Stack[-3] != Stack[-7])
0x1d: IF (Stack[-1] == 0) GOTO 0x38; Pop(1)

0x1e: Stack[-2] = (bool) 0
0x1f: Pop(0); Push((bool) Stack[-3] < Stack[-7])
0x20: IF (Stack[-1] == 0) GOTO 0x26; Pop(1)

0x21: Push(Stack[-6])
0x22: IF (Stack[-1] == 0) GOTO 0x25; Pop(1)

0x23: Stack[-2] = (bool) 1
0x24: Stack[-6] = (bool) 0
0x25: GOTO 0x2a

0x26: Pop(0); Push((bool) Stack[-6] == 0)
0x27: IF (Stack[-1] == 0) GOTO 0x2a; Pop(1)

0x28: Stack[-2] = (bool) 1
0x29: Stack[-6] = (bool) 1
0x2a: PushEmpty(cvector, bool)
0x2b: Push((float)100.0)
0x2c: Pop(1); Push(Stack[-11] * Stack[-1]);
0x2d: Push((int) 1)
0x2e: Pop(1); Push(Stack[-7] + Stack[-1]);
0x2f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x30: Stack[-3] = Stack[-12] + Stack[-1]; Pop(1);
0x31: Stack[-1] = Stack[-4]
0x32: Push(-2, 0); TaskCall(1)
0x33: Call2 0x76

0x34: Pop(-2, 0); TaskReturn
0x35: Pop(2)
0x36: Stack[-7] = Stack[-3]
0x37: GOTO 0x52

0x38: @ WaitForAnimEnd()
0x39: Pop(0)
0x3a: Push("all")
0x3b: Push("attack_begin")
0x3c: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: @ WaitForAnimEnd()
0x3f: Pop(0)
0x40: Push("all")
0x41: Push("attack_end")
0x42: @ PlayAnimation(Stack[-2], Stack[-1])
0x43: Pop(2)
0x44: @ WaitForAnimEnd()
0x45: Pop(0)
0x46: Push("all")
0x47: Push("attack_begin")
0x48: @ PlayAnimation(Stack[-2], Stack[-1])
0x49: Pop(2)
0x4a: @ WaitForAnimEnd()
0x4b: Pop(0)
0x4c: Push("all")
0x4d: Push("attack_end")
0x4e: @ PlayAnimation(Stack[-2], Stack[-1])
0x4f: Pop(2)
0x50: @ WaitForAnimEnd()
0x51: Pop(0)
0x52: Push((int) 1)
0x53: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x54: GOTO 0x17

0x55: @ GetScene(Stack[-1])
0x56: Pop(0)
0x57: PushEmpty(cvector, bool)
0x58: PushEmpty(cvector, object, string)
0x59: Stack[-2] = Stack[-6]
0x5a: Push("pt_ratf")
0x5b: Push(GlobalVars[1])
0x5c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x5d: Call2 0xcb

0x5e: Stack[-5] = Stack[-3]
0x5f: Pop(3)
0x60: Stack[-1] = !Stack[-8]; Pop(0);
0x61: Push(-2, 0); TaskCall(1)
0x62: Call2 0x76

0x63: Pop(-2, 0); TaskReturn
0x64: Pop(2)
0x65: PushEmpty(bool, string, string)
0x66: Stack[-2] = "rats_manager"
0x67: Push("race_over")
0x68: Push(GlobalVars[1])
0x69: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x6a: Call2 0xda

0x6b: Pop(3)
0x6c: Push((int) 3)
0x6d: @ Sleep(Stack[-1])
0x6e: Pop(1)
0x6f: PushEmpty(object)
0x70: Call2 0xbb

0x71: Pop(0)
0x72: @ RemoveActor(Stack[-1])
0x73: Pop(1)
0x74: Return(); Pop(18)

0x75: Stack[-1] = 0
0x76: PushEmpty(cvector, cvector, bool, bool, object, cvector, cvector, bool, bool, object)
0x77: Push(Stack[-11])
0x78: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: @ GetPosition(Stack[-5])
0x7c: Pop(0)
0x7d: Stack[-4] = Stack[-12] - Stack[-5]; Pop(0);
0x7e: Push(CvectorIndex(Stack[-4], 0))
0x7f: Push(CvectorIndex(Stack[-5], 2))
0x80: Push((float)6.28319)
0x81: @ RotateAsync(Stack[-3], Stack[-2], Stack[-1], Stack[-6])
0x82: Pop(3)
0x83: Push("all")
0x84: Push(Stack[-4])
0x85: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x86: Push("rotate_left")
0x87: GOTO 0x89

0x88: Push("rotate_right")
0x89: @ PlayAnimation(Stack[-2], Stack[-1])
0x8a: Pop(2)
0x8b: @ WaitForAnimEnd()
0x8c: Pop(0)
0x8d: @ StopAsync()
0x8e: Pop(0)
0x8f: Push(CvectorIndex(Stack[-4], 0))
0x90: Push(CvectorIndex(Stack[-5], 2))
0x91: @ Rotate(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: Push((int) 0)
0x94: Push((int) 10)
0x95: @ SetTimer(Stack[-2], Stack[-1])
0x96: Pop(2)
0x97: Push((bool) 1)
0x98: @ MovePoint(Stack[-13], Stack[-1], Stack[-3])
0x99: Pop(1)
0x9a: Push((int) 0)
0x9b: @ KillTimer(Stack[-1])
0x9c: Pop(1)
0x9d: Pop(0); Push((bool) Stack[-2] == 0)
0x9e: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x9f: @ GetScene(Stack[-1])
0xa0: Pop(0)
0xa1: PushEmpty(object)
0xa2: Call2 0xbb

0xa3: Pop(0)
0xa4: PushEmpty(cvector, cvector)
0xa5: PushEmpty(cvector)
0xa6: Call2 0xb6

0xa7: Pop(0)
0xa8: Stack[-2] = Stack[-16] - Stack[-1]; Pop(1);
0xa9: Call2 0xc1

0xaa: Pop(1)
0xab: @ Teleport(Stack[-2], Stack[-3], Stack[-14], Stack[-1])
0xac: Pop(2)
0xad: Stack[-1] = 0
0xae: Return(); Pop(10)

0xaf: PushEmpty()
0xb0: Push((int) 0)
0xb1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: @ Stop()
0xb4: Pop(0)
0xb5: Return(); Pop(0)

0xb6: PushEmpty(cvector, cvector)
0xb7: @ GetPosition(Stack[-1])
0xb8: Pop(0)
0xb9: Stack[-3] = Stack[-1]
0xba: Return(); Pop(2)

0xbb: PushEmpty(object, object)
0xbc: @ self(Stack[-1])
0xbd: Pop(0)
0xbe: Stack[-3] = Stack[-1]
0xbf: Return(); Pop(2)

0xc0: Stack[-1] = 0
0xc1: PushEmpty(float, float)
0xc2: Pop(0); Push(Stack[-3] | Stack[-3]);
0xc3: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xc4: Push((float)0.0)
0xc5: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc7: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xc8: Return(); Pop(2)

0xc9: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xca: Return(); Pop(2)

0xcb: PushEmpty(bool, cvector, bool, cvector)
0xcc: @@ GetLocator(Stack[-5], Stack[-2], Stack[-1])
0xcd: Pop(0)
0xce: Pop(0); Push((bool) Stack[-2] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd0: Push("Locator '")
0xd1: Pop(1); Push(Stack[-1] + Stack[-6]);
0xd2: Push("' doesn't exist")
0xd3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd4: @ Trace(Stack[-1])
0xd5: Pop(1)
0xd6: Stack[-7] = CVector(0.0, 0.0, 0.0)
0xd7: Return(); Pop(4)

0xd8: Stack[-7] = Stack[-1]
0xd9: Return(); Pop(4)

0xda: PushEmpty(object, object)
0xdb: @ FindActor(Stack[-1], Stack[-4])
0xdc: Pop(0)
0xdd: Pop(0); Push((bool) Stack[-1] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdf: Stack[-5] = (bool) 0
0xe0: Return(); Pop(2)

0xe1: @ Trigger(Stack[-1], Stack[-3])
0xe2: Pop(0)
0xe3: Stack[-5] = (bool) 1
0xe4: Return(); Pop(2)

0xe5: Stack[-1] = 0
0xe6: PushEmpty(object)
0xe7: Call2 0xbb

0xe8: Pop(0)
0xe9: @ RemoveActor(Stack[-1])
0xea: Pop(1)
0xeb: @ Hold()
0xec: Pop(0)
0xed: Return(); Pop(0)

